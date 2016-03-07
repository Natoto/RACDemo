//  
//  此文件请勿修改，如需扩展请在外部实现

//  
//  WxAuthReq.h
//  PENG
//
//  此文件请勿修改，如需扩展请在外部实现.
//  Copyright (c) 2015年 星盛. All rights reserved.
//
//所属模块：登录
//说明：
/******************
微信授权验证请求 
*******************/
#import <Foundation/Foundation.h>
#import "Req.h"

/* 设备类型-Android */
//extern const char* const DeviceOS_Android;//Android

/* 设备类型-IOS */
//extern const char* const DeviceOS_IOS;//IOS

@interface WxAuthReq : Req

//微信Api发送SendAuth.Req成功后返回的code(可选) 
@property(nonatomic,strong) NSString * code;
//客户端操作系统: Android/IOS(可选) 
@property(nonatomic,strong) NSString * deviceOS;
@end