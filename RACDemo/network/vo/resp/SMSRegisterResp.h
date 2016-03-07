//  
//  此文件请勿修改，如需扩展请在外部实现

//  
//  SMSRegisterResp.h
//  PENG
//
//  此文件请勿修改，如需扩展请在外部实现.
//  Copyright (c) 2015年 星盛. All rights reserved.
//
//所属模块：帖子
//说明：
/******************
发表帖子评论结果 
*******************/
#import <Foundation/Foundation.h>
#import "Resp.h"
#import "UserInfo.h"
#import "UserSettingInfo.h"

/* 成功 */
//extern int const RetCode_Success;//1

/* 验证码错误 */
//extern int const RetCode_VaildCode;//0

/* 已经注册过了，不能重复注册 */
//extern int const RetCode_AlreadyRegister;//-1

@interface SMSRegisterResp : Resp

//错误码，-1:已经注册过了，不能重复注册 0:验证码错误 1:成功(必填) 
@property(nonatomic,strong) NSNumber * rtnCode;

//用户信息(必填) 
@property(nonatomic,strong) UserInfo * userInfo;

//用户设置信息(必填) 
@property(nonatomic,strong) UserSettingInfo * userSetting;

@end