//  
//  此文件请勿修改，如需扩展请在外部实现

//  
//  AliPay.h
//  PENG
//
//  此文件请勿修改，如需扩展请在外部实现.
//  Copyright (c) 2015年 星盛. All rights reserved.
//
//所属模块：支付
//说明：
/******************
客户端用于支持宝支付的请求 
*******************/
#import <Foundation/Foundation.h>
#import "Resp.h"

@interface AliPay : Resp

//签约合作者身份ID(必填) 
@property(nonatomic,strong) NSString * partner;

//签约卖家支付宝账号(必填) 
@property(nonatomic,strong) NSString * seller_id;

//商户网站唯一订单号(必填) 
@property(nonatomic,strong) NSString * out_trade_no;

//商品名称(必填) 
@property(nonatomic,strong) NSString * subject;

//商品详情(必填) 
@property(nonatomic,strong) NSString * body;

//商品金额(必填) 
@property(nonatomic,strong) NSString * total_fee;

//服务器异步通知页面路径(必填) 
@property(nonatomic,strong) NSString * notify_url;

//服务接口名称， 固定值(必填) 
@property(nonatomic,strong) NSString * service;

//支付类型， 固定值(必填) 
@property(nonatomic,strong) NSString * payment_type;

//参数编码， 固定值(必填) 
@property(nonatomic,strong) NSString * input_charset;

//设置未付款交易的超时时间(必填) 
@property(nonatomic,strong) NSString * it_b_pay;

//支付宝处理完请求后，当前页面跳转到商户指定页面的路径，可空(必填) 
@property(nonatomic,strong) NSString * return_url;

//订单RSA 签名(必填) 
@property(nonatomic,strong) NSString * sign;

//签名类型(必填) 
@property(nonatomic,strong) NSString * sign_type;

@end