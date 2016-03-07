//  
//  此文件请勿修改，如需扩展请在外部实现

//  
//  CoinLogReq.h
//  PENG
//
//  此文件请勿修改，如需扩展请在外部实现.
//  Copyright (c) 2015年 星盛. All rights reserved.
//
//所属模块：p币
//说明：
/******************
P币消耗产出日志请求 
*******************/
#import <Foundation/Foundation.h>
#import "Req.h"

@interface CoinLogReq : Req

//客户端中p币日志的最早时间点，用于分页拉取;如果要拉最新的传-1或0均可 默认：-1 (必填) 
@property(nonatomic,strong) NSNumber * oldestTime;
//一次最多拿多少条，由客户端控制，如果值为小于等于0，服务端给默认的20条(必填) 
@property(nonatomic,strong) NSNumber * limit;
@end