//  
//  此文件请勿修改，如需扩展请在外部实现

//  
//  ResetPasswordResp.h
//  PENG
//
//  此文件请勿修改，如需扩展请在外部实现.
//  Copyright (c) 2015年 星盛. All rights reserved.
//
//所属模块：帐号
//说明：
/******************
重置密码返回 
*******************/
#import <Foundation/Foundation.h>
#import "Resp.h"

/* 重置密码成功 */
//extern int const RetCode_Success;//1

/* 重置密码失败,该手机号并未注册碰 */
//extern int const RetCode_Fail;//0

@interface ResetPasswordResp : Resp

//返回码，0失败(手机号并未注册碰) 1成功(必填) 
@property(nonatomic,strong) NSNumber * retCode;

//手机号码(必填) 
@property(nonatomic,strong) NSString * phone;

//新密码(必填) 
@property(nonatomic,strong) NSString * pasw;

@end