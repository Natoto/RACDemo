//  
//  此文件请勿修改，如需扩展请在外部实现

//  
//  CoinLogResp.h
//  PENG
//
//  此文件请勿修改，如需扩展请在外部实现.
//  Copyright (c) 2015年 星盛. All rights reserved.
//
//所属模块：p币
//说明：
/******************
P币消耗产出日志回复 
*******************/
#import <Foundation/Foundation.h>
#import "Resp.h"

@interface CoinLogResp : Resp

//P币消耗产出日志列表(必填) 
@property(nonatomic,strong) NSMutableArray* logs;//存储对象：CoinLog

//列表中日志数据的最早时间，此值拿到后比对客户端当时的oldest，如果这个是更older，那就放心把数据加入listview吧。。。  分页下拉数据时CoinLogReq请求带oldestTime过来。。 默认：-1 (必填) 
@property(nonatomic,strong) NSNumber * oldestTime;

@end