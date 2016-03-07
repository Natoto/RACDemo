//  
//  此文件请勿修改，如需扩展请在外部实现

//  
//  UserInfoFollowing.h
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

@interface UserInfoFollowing : Resp

//用户id(必填) 
@property(nonatomic,strong) NSNumber * uid;

//用户sessionId(必填) 
@property(nonatomic,strong) NSString * sessionId;

//用户昵称(必填) 
@property(nonatomic,strong) NSString * nickname;

//关注状态(必填) 
@property(nonatomic,strong) NSNumber * followStatus;

@end