//  
//  此文件请勿修改，如需扩展请在外部实现

//  
//  SubmitQrCodeResp.h
//  PENG
//
//  此文件请勿修改，如需扩展请在外部实现.
//  Copyright (c) 2015年 星盛. All rights reserved.
//
//所属模块：登录
//说明：
/******************
二维码描述登录碰碰网结果 
*******************/
#import <Foundation/Foundation.h>
#import "Resp.h"

/* 错误码 1:成功 */
//extern int const ErrCode_Success;//1

/* 错误码 0:失败(未知系统异常) */
//extern int const ErrCode_Fail_Unknow;//0

/* 错误码 -1:失败，验证码已经过期，需要网页重新生成二维码 */
//extern int const ErrCode_Qr_Deprecated;//-1

/* 错误码 -2:二维码不存在，需要网页重新生成 */
//extern int const ErrCode_Qr_NotExisted;//-2

/* 碰碰网帐号尚未绑定，需要先绑定才能使用扫码登录 */
//extern int const ErrCode_PengWebNotBind;//-3

@interface SubmitQrCodeResp : Resp

//错误码 (1:成功;0:失败(未知系统异常);-1:失败，验证码已经过期，需要网页重新生成二维码;-2:二维码不存在，需要网页重新生成;-3:碰碰网帐号尚未绑定，需要先绑定才能使用扫码登录(必填) 
@property(nonatomic,strong) NSNumber * errorCode;

//提示信息，客户端可直接用于显示(必填) 
@property(nonatomic,strong) NSString * alert;

@end