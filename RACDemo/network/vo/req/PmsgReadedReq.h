//  
//  此文件请勿修改，如需扩展请在外部实现

//  
//  PmsgReadedReq.h
//  PENG
//
//  此文件请勿修改，如需扩展请在外部实现.
//  Copyright (c) 2015年 星盛. All rights reserved.
//
//所属模块：消息
//说明：
/******************
标志消息已读 
*******************/
#import <Foundation/Foundation.h>
#import "Req.h"

@interface PmsgReadedReq : Req

//需要标志为已读的消息列表(必填) 
@property(nonatomic,strong) NSMutableArray* readedPmsgIds;//存储对象：NSNumber
@end