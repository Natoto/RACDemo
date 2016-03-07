//  
//  此文件请勿修改，如需扩展请在外部实现

//  
//  RegisterResult.h
//  PENG
//
//  此文件请勿修改，如需扩展请在外部实现.
//  Copyright (c) 2015年 星盛. All rights reserved.
//
//所属模块：帐号
//说明：
/******************
帐号注册结果 
*******************/
#import <Foundation/Foundation.h>
#import "Resp.h"

/* 成功 */
//extern int const ErrorCode_Success;//0

/* 失败 */
//extern int const ErrorCode_Fail;//-1

/* 手册号已经注册 */
//extern int const ErrorCode_Mobile_Aready_Register;//-2

@interface RegisterResult : Resp

//返回码 默认：-1 (必填) 
@property(nonatomic,strong) NSNumber * errorCode;

//新注册的帐号(必填) 
@property(nonatomic,strong) NSString * account;

//手机号(必填) 
@property(nonatomic,strong) NSString * phone;

@end