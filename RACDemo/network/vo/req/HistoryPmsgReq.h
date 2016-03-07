//  
//  此文件请勿修改，如需扩展请在外部实现

//  
//  HistoryPmsgReq.h
//  PENG
//
//  此文件请勿修改，如需扩展请在外部实现.
//  Copyright (c) 2015年 星盛. All rights reserved.
//
//所属模块：消息
//说明：
/******************
请求历史消息列表 
*******************/
#import <Foundation/Foundation.h>
#import "Req.h"

@interface HistoryPmsgReq : Req

//客户端中最后一条历史消息的id，用于分页,给-1代表拿最新的(必填) 
@property(nonatomic,strong) NSNumber * lastId;
@end