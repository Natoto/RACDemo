//
//  ViewController.m
//  RACDemo
//
//  Created by zeno on 16/3/7.
//  Copyright © 2016年 peng. All rights reserved.
//
#import "SigninModel.h"
#import "ViewController.h"
#import "DetailViewController.h"

#import <ReactiveCocoa/ReactiveCocoa.h>
@interface ViewController ()
@property (weak, nonatomic) IBOutlet UITextField *txt_username;
@property (weak, nonatomic) IBOutlet UITextField *txt_password;
@property (weak, nonatomic) IBOutlet UIButton *btn_login;

@property (strong, nonatomic) RACCommand * commend;


@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    
    for (int index = 0; index < self.array.count; index++) {
        CELL_STRUCT * cellstruct = [CELL_STRUCT cell_x_x_struct:self.array[index] detailvalue:nil target:self selectAction:DEFAULT_CELL_SELECT_ACTION];
        cellstruct.key_indexpath = KEY_INDEXPATH(0, index);
        [self.dataDictionary setObject:cellstruct forKey:cellstruct.key_indexpath];
    }
    
    [self init_commend];
    
    [[SigninModel sharedInstance].delegateSignal subscribeNext:^(id x) {
       
        NSLog(@"收到消息 %@",x);
    }];
}
-(NSArray *)array
{
    return  @[@"RACSignal",@"RACSubject",@"RACReplaySubject",@"delegateSignal",@"sequence",@"RACCommend",@"test_liftselector"];
}

GET_CELL_SELECT_ACTION(cellstruct)
{
    NSString * rowstr = KEY_INDEXPATH_ROW_STR(cellstruct.key_indexpath);
    switch (rowstr.intValue) {
        case 0:
            [self test_txtsignal_map_filter_subcribe];
            break;
        case 1:
            [self test_racsubject];
            break;
        case 2:
            [self test_replaysubject];
            break;
        case 3:
            [self test_delegatesignal];
            break;
        case 4:
            [self test_sequeue];
            break;
        case 5:
            [self test_commend];
            break;
        case 6:
            [self test_liftselector];
            break;
        default:
            break;
    }
}

-(void)test_txtsignal_map_filter_subcribe
{
    RACSignal * signal = [RACSignal createSignal:^RACDisposable *(id<RACSubscriber> subscriber) {
        [subscriber sendNext:@1];
        [subscriber sendCompleted];
        NSLog(@"发送信号1");
        return [RACDisposable disposableWithBlock:^{
            NSLog(@"信号被销毁");
        }];
    }];
    
    // 3.订阅信号,才会激活信号.
    [signal subscribeNext:^(id x) {
        // block调用时刻：每当有信号发出数据，就会调用block.
        NSLog(@"接收到数据:%@",x);
    }];
}

-(void)test_racsubject
{
    RACSubject * subject = [RACSubject subject];
    [subject subscribeNext:^(id x){
        NSLog(@"第一个订阅者 %@",x);
    }];
    
    [subject subscribeNext:^(id x){
        NSLog(@"第二个订阅者 %@",x);
    }];
    [subject sendNext:@"1"];
    
    //后订阅的只能收到后面发送过来的消息
    [subject subscribeNext:^(id x){
        NSLog(@"第三个订阅者 %@",x);
    }];
    
    [subject sendNext:@"2"];
    
}
-(void)test_replaysubject
{
    RACReplaySubject  * replaysubject = [RACReplaySubject subject];
    [replaysubject sendNext:@1];
    [replaysubject sendNext:@2];
    
    [replaysubject subscribeNext:^(id x) {
        NSLog(@"第一个订阅者接收到的数据%@",x);
    }];
    
    [replaysubject subscribeNext:^(id x) {
        NSLog(@"第二个订阅者接收到的数据%@",x);
    }];
}

-(void)test_delegatesignal
{
    UIStoryboard* mainStoryboard = [UIStoryboard storyboardWithName:@"Main" bundle:nil];
    DetailViewController *ctr = [mainStoryboard  instantiateViewControllerWithIdentifier:@"DetailViewController"];
    ctr.delegateSignal = [RACSubject  subject];
    [ctr.delegateSignal subscribeNext:^(id x) {
        NSLog(@"点击了通知按钮");
    }];
    [self.navigationController pushViewController:ctr animated:YES];
}


-(void)test_sequeue
{
    NSArray * numbers = @[@1,@2,@3,@4];
    [numbers.rac_sequence.signal subscribeNext:^(id x) {
        NSLog(@"%@",x);
    }];
    
    NSDictionary * dict = @{@"name":@"xmg",@"age":@13};
    [dict.rac_sequence.signal subscribeNext:^(RACTuple * x) {
        
        RACTupleUnpack(NSString *key,NSString * value) = x;
        NSLog(@"%@ %@",key,value);
        
    }];
    
}

-(void)test_commend
{
    [self.commend execute:@0];
}

-(void)init_commend
{
    RACCommand * commend =[[RACCommand alloc] initWithSignalBlock:^RACSignal *(id input) {
        NSLog(@"执行命令");
        return [RACSignal createSignal:^RACDisposable *(id<RACSubscriber> subscriber) {
            [subscriber sendNext:@"请求数据"];
            [subscriber sendCompleted];
            return nil;
        }];
    }];
    _commend = commend;
    [commend.executionSignals subscribeNext:^(id x) {
        
        [x subscribeNext:^(id x) {
            NSLog(@"========> %@",x);
        }];
    }];
    
    [commend.executionSignals.switchToLatest subscribeNext:^(id x) {
        NSLog(@"========> %@",x);
    }];
    
    [[commend.executing skip:1] subscribeNext:^(id x) {
        if ([x boolValue]) {
            NSLog(@"正在执行");
        }
        else
        {
            NSLog(@"执行完成");
        }
    }];
}

-(void)test_liftselector
{
    RACSignal *signalA = [RACSignal createSignal:^RACDisposable *(id subscriber) {
        double delayInSeconds = 2.0;
        dispatch_time_t popTime = dispatch_time(DISPATCH_TIME_NOW, (int64_t)(delayInSeconds * NSEC_PER_SEC));
        dispatch_after(popTime, dispatch_get_main_queue(), ^(void){
            [subscriber sendNext:@"A"];
            [subscriber sendCompleted];
        });
        return nil;
    }];
    RACSignal *signalB = [RACSignal createSignal:^RACDisposable *(id subscriber) {
        [subscriber sendNext:@"B"];
        [subscriber sendNext:@"Another B"];
        [subscriber sendCompleted];
        return nil;
    }];
    
    RACSignal *signalC = [RACSignal createSignal:^RACDisposable *(id subscriber) {
        [subscriber sendNext:@"C"];
        [subscriber sendNext:@"Another C"];
        [subscriber sendCompleted];
        return nil;
    }];
    
    [self rac_liftSelector:@selector(doA:withB:withC:) withSignals:signalA, signalB,signalC, nil];
}

- (void)doA:(NSString *)A withB:(NSString *)B withC:(NSString *)C
{
    NSLog(@"A:%@ and B:%@ C:%@", A, B,C);
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
