//  
//  此文件请勿修改，如需扩展请在外部实现

//  
//  CoinLog.h
//  PENG
//
//  此文件请勿修改，如需扩展请在外部实现.
//  Copyright (c) 2015年 星盛. All rights reserved.
//
//所属模块：p币
//说明：
/******************
P币消耗产出日志 
*******************/
#import <Foundation/Foundation.h>
#import "Resp.h"

@interface CoinLog : Resp

//理由，如签到(必填) 
@property(nonatomic,strong) NSString * reason;

//金币变化(必填) 
@property(nonatomic,strong) NSNumber * changeCoin;

//事件发生时间(必填) 
@property(nonatomic,strong) NSNumber * time;

@end