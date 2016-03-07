//  
//  此文件请勿修改，如需扩展请在外部实现

//  
//  PengWebBindInfo.h
//  PENG
//
//  此文件请勿修改，如需扩展请在外部实现.
//  Copyright (c) 2015年 星盛. All rights reserved.
//
//所属模块：Account
//说明：
/******************
碰碰网帐号绑定信息 
*******************/
#import <Foundation/Foundation.h>
#import "Resp.h"

@interface PengWebBindInfo : Resp

//碰App的帐号，预留，可不使用(必填) 
@property(nonatomic,strong) NSNumber * pengUid;

//碰碰网的帐号(必填) 
@property(nonatomic,strong) NSString * pengWebUid;

//碰碰网的昵称(必填) 
@property(nonatomic,strong) NSString * pengWebNickname;

//碰碰网的头像(必填) 
@property(nonatomic,strong) NSString * pengWebAvatar;

@end