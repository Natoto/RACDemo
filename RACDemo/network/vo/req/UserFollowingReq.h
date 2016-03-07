//  
//  此文件请勿修改，如需扩展请在外部实现

//  
//  UserFollowingReq.h
//  PENG
//
//  此文件请勿修改，如需扩展请在外部实现.
//  Copyright (c) 2015年 星盛. All rights reserved.
//
//所属模块：用户信息
//说明：
/******************
用户关注列表 
*******************/
#import <Foundation/Foundation.h>
#import "Req.h"

@interface UserFollowingReq : Req

//当前用户id(必填) (内容需转义!!) 
@property(nonatomic,strong) NSString * curUserId;
//对方用户id(必填) 
@property(nonatomic,strong) NSString * userId;
//请求类型（1：关注；2：粉丝）(必填) 
@property(nonatomic,strong) NSNumber * type;
@end