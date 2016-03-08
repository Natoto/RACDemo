//
//  DetailViewController.m
//  RACDemo
//
//  Created by zeno on 16/3/8.
//  Copyright © 2016年 peng. All rights reserved.
//
#import "SigninModel.h"
#import "DetailViewController.h"
@interface DetailViewController()

@property (strong, nonatomic)  SigninModel * model;
@property (weak, nonatomic) IBOutlet UITextField *txt_username;
@property (weak, nonatomic) IBOutlet UITextField *txt_password;
@property (weak, nonatomic) IBOutlet UILabel *lbl_user;
@property (weak, nonatomic) IBOutlet UILabel *lbl_password;
@property (weak, nonatomic) IBOutlet UIButton *btn_login;
@end
@implementation DetailViewController

-(void)viewDidLoad
{
    [super viewDidLoad];
    
    @weakify(self)
    [[self.btn_login rac_signalForControlEvents:UIControlEventTouchUpInside] subscribeNext:^(id x) {
     @strongify(self)
        if (self.delegateSignal) {
            [self.delegateSignal sendNext:nil];
        }
    }];
    
    //    self.txt_password
    _model = [[SigninModel alloc] init];
    RAC(_model,  phone) = [self.txt_username rac_textSignal];
    RAC(_model,  password) = [self.txt_password rac_textSignal];
    RAC(self.lbl_user,  text) = RACObserve(self,  model.phone);
    RAC(self.lbl_password,  text) = RACObserve(self,  model.password);
    
    [[[self.txt_username rac_textSignal] map:^id(id value) {
        NSString * str =(NSString *)value;
        if (str.length < 10) {
            return @1;
        }
        else
            return @0;
    }] subscribeNext:^(NSNumber * valite){
        self.txt_username.backgroundColor = valite.boolValue?[UIColor whiteColor]:[UIColor orangeColor];
    }];
}


-(void)test_RACObserve
{
    RAC(self.lbl_user,  text) = RACObserve(self,  model.phone);
    RAC(self.lbl_password,  text) = RACObserve(self,  model.password);
    
}

@end
