//  
//  此文件请勿修改，如需扩展请在外部实现

//  
//  ZanTopicEvaluateReq.h
//  PENG
//
//  此文件请勿修改，如需扩展请在外部实现.
//  Copyright (c) 2015年 星盛. All rights reserved.
//
//所属模块：帖子
//说明：
/******************
点赞 
*******************/
#import <Foundation/Foundation.h>
#import "Req.h"

@interface ZanTopicEvaluateReq : Req

//帖子id(必填) (内容需转义!!) 
@property(nonatomic,strong) NSNumber * topicId;
//评论类型（1：帖子点赞 2：帖子评论点赞） (必填) 
@property(nonatomic,strong) NSNumber * type;
//评论Id,默认对帖子点赞-1 (可选) 
@property(nonatomic,strong) NSNumber * topicevaluateId;
//操作类型（0:ios的模式 1：帖子点赞 2：帖子消赞）(必填) 
@property(nonatomic,strong) NSNumber * action;
@end