//  
//  此文件请勿修改，如需扩展请在外部实现

//  
//  UpdateUserInfoReq.h
//  PENG
//
//  此文件请勿修改，如需扩展请在外部实现.
//  Copyright (c) 2015年 星盛. All rights reserved.
//
//所属模块：修改用户信息
//说明：
/******************
用户信息 
*******************/
#import <Foundation/Foundation.h>
#import "Req.h"

@interface UpdateUserInfoReq : Req

//用户id(必填) 
@property(nonatomic,strong) NSNumber * userId;
//用户昵称(必填) 
@property(nonatomic,strong) NSString * nickname;
//头像(必填) 
@property(nonatomic,strong) NSString * avatar;
//性别(必填) 
@property(nonatomic,strong) NSNumber * sex;
//城市(必填) 
@property(nonatomic,strong) NSString * city;
//简介(必填) 
@property(nonatomic,strong) NSString * info;
//是否加V (1:加V;0:不加V)(必填) 
@property(nonatomic,strong) NSNumber * isV;
@end