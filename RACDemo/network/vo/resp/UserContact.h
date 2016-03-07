//  
//  此文件请勿修改，如需扩展请在外部实现

//  
//  UserContact.h
//  PENG
//
//  此文件请勿修改，如需扩展请在外部实现.
//  Copyright (c) 2015年 星盛. All rights reserved.
//
//所属模块：用户
//说明：
/******************
联系人信息 
*******************/
#import <Foundation/Foundation.h>
#import "Resp.h"

@interface UserContact : Resp

//用户id(必填) 
@property(nonatomic,strong) NSNumber * uid;

//用户昵称(必填) 
@property(nonatomic,strong) NSString * nickName;

//头像(必填) 
@property(nonatomic,strong) NSString * avatar;

//简介(必填) 
@property(nonatomic,strong) NSString * info;

//类型(账号类型，0:未注册，1：微博 2：联系人 )(必填) 
@property(nonatomic,strong) NSNumber * type;

//关注状态（0：没有关系，1：被关注，2：关注，3：双向关注）(必填) 
@property(nonatomic,strong) NSNumber * relation;

@end