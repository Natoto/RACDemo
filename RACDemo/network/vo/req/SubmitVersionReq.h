//  
//  此文件请勿修改，如需扩展请在外部实现

//  
//  SubmitVersionReq.h
//  PENG
//
//  此文件请勿修改，如需扩展请在外部实现.
//  Copyright (c) 2015年 星盛. All rights reserved.
//
//所属模块：登录
//说明：
/******************
提交客户端版本信息 
*******************/
#import <Foundation/Foundation.h>
#import "Req.h"

/*  */
//extern const char* const DeviceOS_Android;//Android

/*  */
//extern const char* const DeviceOS_IOS;//IOS

@interface SubmitVersionReq : Req

//版本名字(可选) 
@property(nonatomic,strong) NSString * versionName;
//版本号，如 1.0.39(必填) 
@property(nonatomic,strong) NSString * versionCode;
//操作系统，Android/IOS(必填) 
@property(nonatomic,strong) NSString * deviceOS;
//设备唯一标识(必填) 
@property(nonatomic,strong) NSString * deviceToken;
//数据库版本标识(必填) 
@property(nonatomic,strong) NSNumber * dbVersion;
//渠道(必填) 
@property(nonatomic,strong) NSString * chanel;
@end