//  
//  此文件请勿修改，如需扩展请在外部实现

//  
//  AliPayOrderReq.h
//  PENG
//
//  此文件请勿修改，如需扩展请在外部实现.
//  Copyright (c) 2015年 星盛. All rights reserved.
//
//所属模块：支付
//说明：
/******************
支付宝支持订单信息请求 
*******************/
#import <Foundation/Foundation.h>
#import "Req.h"

/* 设备类型-Android */
//extern const char* const DeviceOS_Android;//Android

/* 设备类型-IOS */
//extern const char* const DeviceOS_IOS;//IOS

/* 支付类型-应援众筹 */
//extern int const PaymentType_FanCrowdfunding;//2

/* 支付类型-娱乐众筹 */
//extern int const PaymentType_FunCrowdfunding;//1

@interface AliPayOrderReq : Req

//客户端操作系统: Android/IOS(可选) 
@property(nonatomic,strong) NSString * deviceOS;
//支付类型 1-娱乐众筹 2-应援众筹(目前暂只支付众筹类型)(必填) 
@property(nonatomic,strong) NSNumber * paymentType;
//商品编号,当支付类型为众筹时，此处为众筹id(必填) 
@property(nonatomic,strong) NSNumber * paymentId;
//商品子编号,当支付类型为娱乐众筹时，此处为众筹的repayId(可选) 
@property(nonatomic,strong) NSNumber * paymentSubId;
//欲支付的金钱,人民币‘分’为单(必填) 
@property(nonatomic,strong) NSNumber * money;
@end