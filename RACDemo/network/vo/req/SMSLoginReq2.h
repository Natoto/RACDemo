//  
//  此文件请勿修改，如需扩展请在外部实现

//  
//  SMSLoginReq2.h
//  PENG
//
//  此文件请勿修改，如需扩展请在外部实现.
//  Copyright (c) 2015年 星盛. All rights reserved.
//
//所属模块：帐号
//说明：
/******************
短信登录请求 
*******************/
#import <Foundation/Foundation.h>
#import "Req.h"

/*  */
//extern const char* const DeviceOS_Android;//Android

/*  */
//extern const char* const DeviceOS_IOS;//IOS

/*  */
//extern int const SmsChanel_Mob;//0

/*  */
//extern int const SmsChanel_Hx;//1

@interface SMSLoginReq2 : Req

//客户端设置唯一标识号(可选) 
@property(nonatomic,strong) NSString * deviceToken;
//客户端操作系统，Android/IOS(必填) 
@property(nonatomic,strong) NSString * deviceOS;
//客户端渠道号(可选) 
@property(nonatomic,strong) NSString * chanel;
//手机号(必填) 
@property(nonatomic,strong) NSString * mobile;
//手机验证码(必填) 
@property(nonatomic,strong) NSString * regCode;
//sms发送方，0:mob 1:华兴(必填) 
@property(nonatomic,strong) NSNumber * smsChanel;
@end