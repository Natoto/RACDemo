//  
//  此文件请勿修改，如需扩展请在外部实现

//  
//  ResDefine.h
//  PENG
//
//  此文件请勿修改，如需扩展请在外部实现.
//  Copyright (c) 2015年 星盛. All rights reserved.
//
//所属模块：登录
//说明：
/******************
一些初始配置 
*******************/
#import <Foundation/Foundation.h>
#import "Resp.h"

@interface ResDefine : Resp

//资源服务器url(必填) 
@property(nonatomic,strong) NSString * resourceServerUrl;

@end