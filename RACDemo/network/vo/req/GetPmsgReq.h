//  
//  此文件请勿修改，如需扩展请在外部实现

//  
//  GetPmsgReq.h
//  PENG
//
//  此文件请勿修改，如需扩展请在外部实现.
//  Copyright (c) 2015年 星盛. All rights reserved.
//
//所属模块：消息
//说明：
/******************
请求单条消息 
*******************/
#import <Foundation/Foundation.h>
#import "Req.h"

@interface GetPmsgReq : Req

//消息id(必填) 
@property(nonatomic,strong) NSNumber * msgId;
@end