//  
//  此文件请勿修改，如需扩展请在外部实现

//  
//  WechatPay.h
//  PENG
//
//  此文件请勿修改，如需扩展请在外部实现.
//  Copyright (c) 2015年 星盛. All rights reserved.
//
//所属模块：支付
//说明：
/******************
客户端直接给微信的请求，对应微信支付SDK提供的PayReq 
*******************/
#import <Foundation/Foundation.h>
#import "Resp.h"

@interface WechatPay : Resp

//对应微信支付SDK中PayReq.appId(必填) 
@property(nonatomic,strong) NSString * appId;

//对应微信支付SDK中对应PayReq.partnerId(必填) 
@property(nonatomic,strong) NSString * partnerId;

//对应微信支付SDK中对应PayReq.prepayId(必填) 
@property(nonatomic,strong) NSString * prepayId;

//对应微信支付SDK中对应PayReq.packageValue(必填) 
@property(nonatomic,strong) NSString * packageValue;

//对应微信支付SDK中对应PayReq.nonceStr(必填) 
@property(nonatomic,strong) NSString * nonceStr;

//对应微信支付SDK中对应PayReq.timeStamp(必填) 
@property(nonatomic,strong) NSString * timeStamp;

//对应微信支付SDK中对应PayReq.sign(必填) 
@property(nonatomic,strong) NSString * sign;

@end