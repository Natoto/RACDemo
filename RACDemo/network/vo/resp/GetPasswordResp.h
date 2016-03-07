//  
//  此文件请勿修改，如需扩展请在外部实现

//  
//  GetPasswordResp.h
//  PENG
//
//  此文件请勿修改，如需扩展请在外部实现.
//  Copyright (c) 2015年 星盛. All rights reserved.
//
//所属模块：帐号
//说明：
/******************
取回密码返回 
*******************/
#import <Foundation/Foundation.h>
#import "Resp.h"

/* 成功 */
//extern int const RetCode_Success;//1

/* 失败，手机号尚未注册碰 */
//extern int const RetCode_Fail;//0

@interface GetPasswordResp : Resp

//返回码，0失败(手机号并未注册碰) 1成功(必填) 
@property(nonatomic,strong) NSNumber * retCode;

//手机号码(必填) 
@property(nonatomic,strong) NSString * phone;

//密码(必填) 
@property(nonatomic,strong) NSString * password;

@end