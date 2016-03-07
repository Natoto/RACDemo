//  
//  此文件请勿修改，如需扩展请在外部实现

//  
//  CourseItem.h
//  PENG
//
//  此文件请勿修改，如需扩展请在外部实现.
//  Copyright (c) 2015年 星盛. All rights reserved.
//
//所属模块：历程
//说明：
/******************
历程信息 
*******************/
#import <Foundation/Foundation.h>
#import "Resp.h"

@interface CourseItem : Resp

//cid(必填) 
@property(nonatomic,strong) NSNumber * cid;

//标题(必填) 
@property(nonatomic,strong) NSString * title;

//封面 (必填) 
@property(nonatomic,strong) NSString * img;

//创建时间(必填) 
@property(nonatomic,strong) NSNumber * createTime;

//发布人id(必填) 
@property(nonatomic,strong) NSNumber * uid;

//发布人昵称(必填) 
@property(nonatomic,strong) NSString * userNick;

//用户头像 (必填) 
@property(nonatomic,strong) NSString * avatar;

//用户简介 (必填) 
@property(nonatomic,strong) NSString * info;

@end