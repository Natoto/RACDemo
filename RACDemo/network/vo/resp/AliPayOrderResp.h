//  
//  此文件请勿修改，如需扩展请在外部实现

//  
//  AliPayOrderResp.h
//  PENG
//
//  此文件请勿修改，如需扩展请在外部实现.
//  Copyright (c) 2015年 星盛. All rights reserved.
//
//所属模块：支付
//说明：
/******************
支付宝支付订单回复 
*******************/
#import <Foundation/Foundation.h>
#import "Resp.h"
#import "AliPay.h"

/* 支付类型-应援众筹 */
//extern int const PaymentType_FanCrowdfunding;//2

/* 支付类型-娱乐众筹 */
//extern int const PaymentType_FunCrowdfunding;//1

/* 众筹平台帐号未绑定 */
//extern int const retCode_WebUserNotFound;//-3

/* 请求支付订单失败,未填写收货人地址 */
//extern int const retCode_ReceiverInfoNotFound;//-2

/* 众筹平台校验错误，梦言那边检测不通过 */
//extern int const retCode_CrowdPlatformError;//-1

/* 请求支付订单失败,未知错误 */
//extern int const retCode_UnKownError;//0

/* 请求支付订单成功 */
//extern int const retCode_Success;//1

@interface AliPayOrderResp : Resp

//返回码 -2:失败，未填写收货人地址(需要回报的众筹必须要地址填写后才能支付) -1:众筹平台校验错误 0：失败（未知错误） 1：成功(必填) 
@property(nonatomic,strong) NSNumber * retCode;

//支付类型 1-娱乐众筹 2-应援众筹(目前暂只支付众筹类型)(必填) 
@property(nonatomic,strong) NSNumber * paymentType;

//商品编号(必填) 
@property(nonatomic,strong) NSNumber * paymentId;

//商品子编号,当支付类型为娱乐众筹时，此处为众筹的repayId(可选) 
@property(nonatomic,strong) NSNumber * paymentSubId;

//当返回码为-1，众筹平台校验错误时，此串文字有效，可以展示给用户看。例如：众筹项目已过期，不能支付(必填) 
@property(nonatomic,strong) NSString * platformErrorMsg;

//当返回码为成功时，此字段有效，这个就是微信SDK中的PayReq，把属性拷贝过去发请求即可，所有属性已经计算好(必填) 
@property(nonatomic,strong) AliPay * payReq;

@end