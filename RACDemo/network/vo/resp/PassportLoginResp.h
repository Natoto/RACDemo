//  
//  此文件请勿修改，如需扩展请在外部实现

//  
//  PassportLoginResp.h
//  PENG
//
//  此文件请勿修改，如需扩展请在外部实现.
//  Copyright (c) 2015年 星盛. All rights reserved.
//
//所属模块：帐号
//说明：
/******************
通行证登录返回 
*******************/
#import <Foundation/Foundation.h>
#import "Resp.h"
#import "UserInfo.h"
#import "UserSettingInfo.h"

/* 成功 */
//extern int const RetCode_Success;//1

/* 通行证错误或已过期 */
//extern int const RetCode_PassportError;//0

/* 帐号尚未注册不能登录 */
//extern int const RetCode_MobileNotRegister;//-1

/* 未知系统错误 */
//extern int const RetCode_Fail;//-2

@interface PassportLoginResp : Resp

//错误码，-2:未知系统错误 -1:帐号尚未注册不能登录 0:通行证错误或已过期 1:成功(必填) 
@property(nonatomic,strong) NSNumber * rtnCode;

//用户信息(必填) 
@property(nonatomic,strong) UserInfo * userInfo;

//用户设置信息(必填) 
@property(nonatomic,strong) UserSettingInfo * userSetting;

@end