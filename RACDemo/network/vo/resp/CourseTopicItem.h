//  
//  此文件请勿修改，如需扩展请在外部实现

//  
//  CourseTopicItem.h
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
#import "Resp.h"

@interface CourseTopicItem : Resp

//历程id(必填) 
@property(nonatomic,strong) NSNumber * cid;

//帖子id(必填) 
@property(nonatomic,strong) NSNumber * tid;

//创建时间(yyyy年MM月dd日)(必填) 
@property(nonatomic,strong) NSNumber * createTime;

//地址 (必填) 
@property(nonatomic,strong) NSString * address;

//内容 (必填) 
@property(nonatomic,strong) NSString * context;

//图片 (必填) 
@property(nonatomic,strong) NSString * image;

//碰类型，0:普通的图片碰，1：视频碰(必填) 
@property(nonatomic,strong) NSNumber * type;

@end