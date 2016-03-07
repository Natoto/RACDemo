//  
//  此文件请勿修改，如需扩展请在外部实现

//  
//  DelTopicReq.h
//  PENG
//
//  此文件请勿修改，如需扩展请在外部实现.
//  Copyright (c) 2015年 星盛. All rights reserved.
//
//所属模块：帖子
//说明：
/******************
删除帖子 
*******************/
#import <Foundation/Foundation.h>
#import "Req.h"

@interface DelTopicReq : Req

//帖子id(必填) 
@property(nonatomic,strong) NSNumber * topicId;
@end