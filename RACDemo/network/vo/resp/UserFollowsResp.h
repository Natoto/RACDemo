//  
//  此文件请勿修改，如需扩展请在外部实现

//  
//  UserFollowsResp.h
//  PENG
//
//  此文件请勿修改，如需扩展请在外部实现.
//  Copyright (c) 2015年 星盛. All rights reserved.
//
//所属模块：用户中心
//说明：
/******************
获取当前用户关注列表 
*******************/
#import <Foundation/Foundation.h>
#import "Resp.h"

/* 成功 */
//extern int const ErrCode_Success;//1

/* 失败 */
//extern int const ErrorCode_Fail;//0

/*  成功 没有数据 */
//extern int const ErrCode_No_Data;//2

@interface UserFollowsResp : Resp

//返回码，1：成功，0：失败,2:没有数据(必填) 
@property(nonatomic,strong) NSNumber * resultCode;

//当前用户id(必填) 
@property(nonatomic,strong) NSNumber * userId;

//请求类型 (必填) 
@property(nonatomic,strong) NSNumber * type;

//用户列表(必填) 
@property(nonatomic,strong) NSMutableArray* infos;//存储对象：UserInfo

@end