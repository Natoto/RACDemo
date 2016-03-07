//  
//  此文件请勿修改，如需扩展请在外部实现

//  
//  GetPasswordReq.h
//  PENG
//
//  此文件请勿修改，如需扩展请在外部实现.
//  Copyright (c) 2015年 星盛. All rights reserved.
//
//所属模块：帐号
//说明：
/******************
取回密码请求 
*******************/
#import <Foundation/Foundation.h>
#import "Req.h"

@interface GetPasswordReq : Req

//手机号码(必填) 
@property(nonatomic,strong) NSString * phone;
@end