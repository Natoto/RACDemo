//  
//  此文件请勿修改，如需扩展请在外部实现

//  
//  SMSChanelReq.h
//  PENG
//
//  此文件请勿修改，如需扩展请在外部实现.
//  Copyright (c) 2015年 星盛. All rights reserved.
//
//所属模块：帐号
//说明：
/******************
短信渠道请求 
*******************/
#import <Foundation/Foundation.h>
#import "Req.h"

@interface SMSChanelReq : Req

//手机号(必填) 
@property(nonatomic,strong) NSString * mobile;
@end