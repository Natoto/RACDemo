//  
//  此文件请勿修改，如需扩展请在外部实现

//  
//  EditCourseReq.h
//  PENG
//
//  此文件请勿修改，如需扩展请在外部实现.
//  Copyright (c) 2015年 星盛. All rights reserved.
//
//所属模块：历程
//说明：
/******************
编辑历程 
*******************/
#import <Foundation/Foundation.h>
#import "Req.h"

@interface EditCourseReq : Req

//历程id(0:新增) (必填) 
@property(nonatomic,strong) NSNumber * cid;
//标题 (必填) 
@property(nonatomic,strong) NSString * title;
//封面 (必填) 
@property(nonatomic,strong) NSString * img;
//历程帖子信息(必填) 
@property(nonatomic,strong) NSMutableArray* items;//存储对象：CourseTopicItem
@end