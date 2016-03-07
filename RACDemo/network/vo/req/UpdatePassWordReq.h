//  
//  此文件请勿修改，如需扩展请在外部实现

//  
//  UpdatePassWordReq.h
//  PENG
//
//  此文件请勿修改，如需扩展请在外部实现.
//  Copyright (c) 2015年 星盛. All rights reserved.
//
//所属模块：帐号
//说明：
/******************
用户密码修改,已经过期，请使用ResetPasswordReq 
*******************/
#import <Foundation/Foundation.h>
#import "Req.h"

@interface UpdatePassWordReq : Req

//密码(必填) 
@property(nonatomic,strong) NSString * password;
@end