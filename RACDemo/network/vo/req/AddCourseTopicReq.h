//  
//  此文件请勿修改，如需扩展请在外部实现

//  
//  AddCourseTopicReq.h
//  PENG
//
//  此文件请勿修改，如需扩展请在外部实现.
//  Copyright (c) 2015年 星盛. All rights reserved.
//
//所属模块：历程
//说明：
/******************
添加历程帖子 
*******************/
#import <Foundation/Foundation.h>
#import "Req.h"

@interface AddCourseTopicReq : Req

//历程id(必填) 
@property(nonatomic,strong) NSNumber * cid;
//帖子id (必填) 
@property(nonatomic,strong) NSNumber * tid;
@end