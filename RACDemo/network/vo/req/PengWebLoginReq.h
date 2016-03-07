//  
//  此文件请勿修改，如需扩展请在外部实现

//  
//  PengWebLoginReq.h
//  PENG
//
//  此文件请勿修改，如需扩展请在外部实现.
//  Copyright (c) 2015年 星盛. All rights reserved.
//
//所属模块：帐号
//说明：
/******************
碰碰网用户登录 
*******************/
#import <Foundation/Foundation.h>
#import "Req.h"

@interface PengWebLoginReq : Req

//用户网站账号（会员呢称/邮箱/手机号码）(必填) 
@property(nonatomic,strong) NSString * loginId;
//用户网站密码(必填) 
@property(nonatomic,strong) NSString * password;
//手机号码 (不用输，自动传递)(必填) 
@property(nonatomic,strong) NSString * mobile;
//碰ID值(不用输，自动传递)(必填) 
@property(nonatomic,strong) NSNumber * pengId;
@end