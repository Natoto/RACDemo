//  
//  此文件请勿修改，如需扩展请在外部实现

//  
//  SMSChanelResp.h
//  PENG
//
//  此文件请勿修改，如需扩展请在外部实现.
//  Copyright (c) 2015年 星盛. All rights reserved.
//
//所属模块：帐号
//说明：
/******************
短信渠道返回 
*******************/
#import <Foundation/Foundation.h>
#import "Resp.h"

/*  */
//extern int const SmsChanel_Mob;//0

/*  */
//extern int const SmsChanel_Hx;//1

@interface SMSChanelResp : Resp

//返回码,1代表成功，其它为失败(必填) 
@property(nonatomic,strong) NSNumber * retCode;

//失败时，这里为错误信息，可以直接显示给用户看(必填) 
@property(nonatomic,strong) NSString * errMsg;

//手机号(必填) 
@property(nonatomic,strong) NSString * mobile;

//短信渠道,如果渠道为hx，短信已经下发了，客户端拿到短信验证码后直接SmsLoginReq2；如果收到mob，客户端需先调用MobSDK请求mob发送短信后再获取验证码后SmsLoginReq2(必填) 
@property(nonatomic,strong) NSNumber * smsChanel;

@end