//  
//  此文件请勿修改，如需扩展请在外部实现

//  
//  CourseTopicReq.h
//  PENG
//
//  此文件请勿修改，如需扩展请在外部实现.
//  Copyright (c) 2015年 星盛. All rights reserved.
//
//所属模块：历程
//说明：
/******************
历程帖子信息 
*******************/
#import <Foundation/Foundation.h>
#import "Req.h"

@interface CourseTopicReq : Req

//帖子id(必填) 
@property(nonatomic,strong) NSNumber * tid;
//操作类型（1：新增;）(必填) 
@property(nonatomic,strong) NSNumber * opt;
@end