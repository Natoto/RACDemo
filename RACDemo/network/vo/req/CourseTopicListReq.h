//  
//  此文件请勿修改，如需扩展请在外部实现

//  
//  CourseTopicListReq.h
//  PENG
//
//  此文件请勿修改，如需扩展请在外部实现.
//  Copyright (c) 2015年 星盛. All rights reserved.
//
//所属模块：历程
//说明：
/******************
帖子列表 
*******************/
#import <Foundation/Foundation.h>
#import "Req.h"

@interface CourseTopicListReq : Req

//历程id(必填) 
@property(nonatomic,strong) NSNumber * cid;
@end