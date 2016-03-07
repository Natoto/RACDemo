//  
//  此文件请勿修改，如需扩展请在外部实现

//  
//  SMSLoginResp2.h
//  PENG
//
//  此文件请勿修改，如需扩展请在外部实现.
//  Copyright (c) 2015年 星盛. All rights reserved.
//
//所属模块：帐号
//说明：
/******************
短信登录返回 
*******************/
#import <Foundation/Foundation.h>
#import "Resp.h"
#import "UserInfo.h"
#import "UserSettingInfo.h"

/* 成功 */
//extern int const RetCode_Success;//1

/* 验证码错误 */
//extern int const RetCode_ValidCode;//0

/* 未知系统错误 */
//extern int const RetCode_Fail;//-1

@interface SMSLoginResp2 : Resp

//错误码，-1:未知系统错误 0:验证码错误 1：成功(必填) 
@property(nonatomic,strong) NSNumber * rtnCode;

//是否为做了一次自动注册,0:false 1:true，当帐号不存在时先自动做一次注册再进行登录操作(必填) 
@property(nonatomic,strong) NSNumber * autoRegister;

//用户信息(必填) 
@property(nonatomic,strong) UserInfo * userInfo;

//用户设置信息(必填) 
@property(nonatomic,strong) UserSettingInfo * userSetting;

//mod短信验证返回的信息，错误时可用作界面提示(可选) 
@property(nonatomic,strong) NSString * smsCheckResult;

@end