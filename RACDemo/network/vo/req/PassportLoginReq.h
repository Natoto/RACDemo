//  
//  此文件请勿修改，如需扩展请在外部实现

//  
//  PassportLoginReq.h
//  PENG
//
//  此文件请勿修改，如需扩展请在外部实现.
//  Copyright (c) 2015年 星盛. All rights reserved.
//
//所属模块：帐号
//说明：
/******************
通行证登录请求 
*******************/
#import <Foundation/Foundation.h>
#import "Req.h"

@interface PassportLoginReq : Req

//客户端设置唯一标识号，用于辨认是否切换了客户端登录(必填) 
@property(nonatomic,strong) NSString * deviceToken;
//手机号(必填) 
@property(nonatomic,strong) NSString * mobile;
//通行证(必填) 
@property(nonatomic,strong) NSString * passport;
@end