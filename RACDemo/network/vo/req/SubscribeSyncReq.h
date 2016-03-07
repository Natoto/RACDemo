//  
//  此文件请勿修改，如需扩展请在外部实现

//  
//  SubscribeSyncReq.h
//  PENG
//
//  此文件请勿修改，如需扩展请在外部实现.
//  Copyright (c) 2015年 星盛. All rights reserved.
//
//所属模块：同步
//说明：
/******************
订阅内容同步通知 
*******************/
#import <Foundation/Foundation.h>
#import "Req.h"

/*  */
//extern int const type_topic_sync;//0

/*  */
//extern int const type_chat_sync;//1

@interface SubscribeSyncReq : Req

//订阅类型(必填) 
@property(nonatomic,strong) NSNumber * type;
//确认接收到的碰的id列表 id数据类型NSNumber(必填) 
@property(nonatomic,strong) NSMutableArray* topicIds;
@end