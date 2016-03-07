//  
//  此文件请勿修改，如需扩展请在外部实现

//  
//  DelCommentReq.h
//  PENG
//
//  此文件请勿修改，如需扩展请在外部实现.
//  Copyright (c) 2015年 星盛. All rights reserved.
//
//所属模块：评论
//说明：
/******************
删除评论 
*******************/
#import <Foundation/Foundation.h>
#import "Req.h"

@interface DelCommentReq : Req

//评论ID (必填) 
@property(nonatomic,strong) NSNumber * cid;
@end