//
//  ViewController.m
//  RACDemo
//
//  Created by zeno on 16/3/7.
//  Copyright © 2016年 peng. All rights reserved.
//
#import "SigninModel.h"
#import "ViewController.h"
#import <ReactiveCocoa/ReactiveCocoa.h>
@interface ViewController ()
@property (weak, nonatomic) IBOutlet UITextField *txt_username;
@property (weak, nonatomic) IBOutlet UITextField *txt_password;
@property (weak, nonatomic) IBOutlet UIButton *btn_login;

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    
    RACSignal *letters = [@"A B C D E F G H I" componentsSeparatedByString:@" "].rac_sequence.signal;
    
    // Outputs: A B C D
    [letters subscribeNext:^(NSString *x) {
        NSLog(@"%@", x);
    }];
    
    self.btn_login.enabled = NO;
    
    RACSignal * validUsernameSignal = [self.txt_username.rac_textSignal map:^id(NSString * value) {
        BOOL valide = value.length > 3;
        return @(valide);
    }];
    
    RACSignal * validPasswordSignal = [self.txt_password.rac_textSignal map:^id(NSString * value) {
        BOOL valide = value.length > 3;
        return @(valide);
    }];
    
    
    RAC(self.txt_username, backgroundColor) =
    [validUsernameSignal
     map:^id(NSNumber *passwordValid){
         return[passwordValid boolValue] ? [UIColor clearColor]:[UIColor yellowColor];
     }];
    
    RAC(self.txt_password, backgroundColor) =
    [validPasswordSignal
     map:^id(NSNumber *passwordValid){
         return[passwordValid boolValue] ? [UIColor clearColor]:[UIColor yellowColor];
     }];
    
    RACSignal * signUpActiveSignal = [RACSignal combineLatest:@[validUsernameSignal,validPasswordSignal] reduce:^id(NSNumber * valideuser,NSNumber * validpassword){
        return @(valideuser.boolValue && validpassword.boolValue);
    }];
    
    [signUpActiveSignal subscribeNext:^(NSNumber *valide) {
        self.btn_login.enabled = valide.boolValue;
    }];

    
    [[[self.btn_login rac_signalForControlEvents:UIControlEventTouchUpInside] flattenMap:^id(id value) {
        return [self signInSignal];
    }] subscribeNext:^(SMSLoginResp2 * x) {
        NSLog(@"Sign in result: %@", x);
    }];
    
//    RAC(self.btn_login, enabled) =
//    [validUsernameSignal
//     map:^id(NSNumber *passwordValid){
//         return [passwordValid boolValue]; //? [UIColor clearColor]:[UIColor yellowColor];
//     }];
    
}

- (RACSignal *)signInSignal {
    return [RACSignal createSignal:^RACDisposable *(id<RACSubscriber> subscriber){
        
        [[SigninModel sharedInstance] req_SMSLoginReq2WithPhone:self.txt_username.text password:self.txt_password.text response:^(SMSLoginResp2 *response) {
            [subscriber sendNext:response];
            [subscriber sendCompleted];
        } errorHandler:^(NSError *error) {
            [subscriber sendError:error];
        }];
        return nil;
    }];
}


-(void)test_txtsignal_map_filter_subcribe
{
    
    //    [self.txt_username.rac_textSignal subscribeNext:^(id x){
    //        NSLog(@"++++%@", x);
    //    }];
    
    
    //    [[self.txt_username.rac_textSignal filter:^BOOL(id value) {
    //        NSString *str = (NSString *)value;
    //        return str.length>3;
    //    }] subscribeNext:^(id x) {
    //        NSLog(@"---->%@", x);
    //        self.btn_login.enabled = YES;
    //    }];
    
    [[[self.txt_username.rac_textSignal map:^id(NSString * value) {
        return @(value.length);
    }]filter:^BOOL(id value) {
        NSString *str = (NSString *)value;
        return str.intValue>3;
    }] subscribeNext:^(id x) {
        NSLog(@"---->%@", x);
        self.btn_login.enabled = YES;
    }];
    
    [self.txt_username.rac_textSignal subscribeCompleted:^{
        NSLog(@"输入完成");
    }];
    
    [self.txt_username.rac_textSignal subscribeError:^(NSError *error) {
        NSLog(@"%@",error);
    }];
    
}
- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
