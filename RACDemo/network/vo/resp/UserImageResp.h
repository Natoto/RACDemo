//  
//  此文件请勿修改，如需扩展请在外部实现

//  
//  UserImageResp.h
//  PENG
//
//  此文件请勿修改，如需扩展请在外部实现.
//  Copyright (c) 2015年 星盛. All rights reserved.
//
//所属模块：用户中心
//说明：
/******************
获取当前用户帖子列表 
*******************/
#import <Foundation/Foundation.h>
#import "Resp.h"

/*  */
//extern int const retCode_success;//1

/*  */
//extern int const retCode_success_no_data;//2

/*  */
//extern int const retCode_error;//0

@interface UserImageResp : Resp

//图片信息(必填) 
@property(nonatomic,strong) NSMutableArray* imageList;//存储对象：TagTopicItem

//最大id(必填) 
@property(nonatomic,strong) NSNumber * lastId;

//请求类型 (必填) 
@property(nonatomic,strong) NSNumber * type;

//返回码，1：成功，0：失败，2：无数据(必填) 
@property(nonatomic,strong) NSNumber * resultCode;

@end