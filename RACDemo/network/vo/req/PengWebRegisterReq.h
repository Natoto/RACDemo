//  
//  此文件请勿修改，如需扩展请在外部实现

//  
//  PengWebRegisterReq.h
//  PENG
//
//  此文件请勿修改，如需扩展请在外部实现.
//  Copyright (c) 2015年 星盛. All rights reserved.
//
//所属模块：帐号
//说明：
/******************
碰碰网用户注册 
*******************/
#import <Foundation/Foundation.h>
#import "Req.h"

@interface PengWebRegisterReq : Req

//账号(必填) 
@property(nonatomic,strong) NSString * nickname;
//密码(必填) 
@property(nonatomic,strong) NSString * password;
//碰用户Id(必填) 
@property(nonatomic,strong) NSString * pengId;
//手机(必填) 
@property(nonatomic,strong) NSString * mobile;
//邮箱(必填) 
@property(nonatomic,strong) NSString * email;
@end