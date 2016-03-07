//  
//  此文件请勿修改，如需扩展请在外部实现

//  
//  ZanUserListReq.h
//  PENG
//
//  此文件请勿修改，如需扩展请在外部实现.
//  Copyright (c) 2015年 星盛. All rights reserved.
//
//所属模块：点赞
//说明：
/******************
获取帖子评论列表 
*******************/
#import <Foundation/Foundation.h>
#import "Req.h"

@interface ZanUserListReq : Req

//帖子id(必填) 
@property(nonatomic,strong) NSNumber * topicId;
@end