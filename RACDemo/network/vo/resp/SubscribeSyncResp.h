//  
//  此文件请勿修改，如需扩展请在外部实现

//  
//  SubscribeSyncResp.h
//  PENG
//
//  此文件请勿修改，如需扩展请在外部实现.
//  Copyright (c) 2015年 星盛. All rights reserved.
//
//所属模块：同步
//说明：
/******************
同步订阅消息的回复 
*******************/
#import <Foundation/Foundation.h>
#import "Resp.h"

@interface SubscribeSyncResp : Resp

//是否成功 默认：false (必填) 
@property (nonatomic,assign) BOOL success;

@end