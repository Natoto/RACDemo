//  
//  此文件请勿修改，如需扩展请在外部实现

//  
//  FollowUserInfo.h
//  PENG
//
//  此文件请勿修改，如需扩展请在外部实现.
//  Copyright (c) 2015年 星盛. All rights reserved.
//
//所属模块：帐号
//说明：
/******************
用户信息 
*******************/
#import <Foundation/Foundation.h>
#import "Resp.h"

/* 没有关系的 */
//extern int const relation_none;//0

/* 订阅了我的 */
//extern int const relation_subscribe;//1

/* 我订阅的 */
//extern int const relation_follow;//2

/* 双向关注 */
//extern int const relation_double;//3

/* 黑名单 */
//extern int const black;//4

@interface FollowUserInfo : Resp

//关注id(必填) 
@property(nonatomic,strong) NSNumber * fid;

//用户id(必填) 
@property(nonatomic,strong) NSNumber * uid;

//用户昵称(必填) 
@property(nonatomic,strong) NSString * nickname;

//性别(必填) 
@property(nonatomic,strong) NSNumber * sex;

//头像(必填) 
@property(nonatomic,strong) NSString * avatar;

//关注状态（0：没有关系，1：被关注，2：关注，3：双向关注）(必填) 
@property(nonatomic,strong) NSNumber * relation;

@end