//
//  DetailViewController.h
//  RACDemo
//
//  Created by zeno on 16/3/8.
//  Copyright © 2016年 peng. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <HBKit/HBKit.h>
#import <ReactiveCocoa/ReactiveCocoa.h>
@interface DetailViewController : HBBaseViewController
@property(nonatomic,strong) RACSubject * delegateSignal;
@end
