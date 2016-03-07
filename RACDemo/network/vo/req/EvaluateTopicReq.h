//  
//  此文件请勿修改，如需扩展请在外部实现

//  
//  EvaluateTopicReq.h
//  PENG
//
//  此文件请勿修改，如需扩展请在外部实现.
//  Copyright (c) 2015年 星盛. All rights reserved.
//
//所属模块：帖子
//说明：
/******************
发表评论 
*******************/
#import <Foundation/Foundation.h>
#import "Req.h"

@interface EvaluateTopicReq : Req

//帖子id(必填) (内容需转义!!) 
@property(nonatomic,strong) NSNumber * topicId;
//评论引用楼层(评论id 默认:不引用 -1)  (必填) 
@property(nonatomic,strong) NSNumber * attachFloor;
//评论内容(必填) (内容需转义!!) 
@property(nonatomic,strong) NSString * msg;
@end