//  
//  此文件请勿修改，如需扩展请在外部实现

//  
//  WxAuthResp.h
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

@interface WxAuthResp : Resp

//错误码，0表示成功，-1代表微信无返回，其它为微信返回的错误码(必填) 
@property(nonatomic,strong) NSNumber * errorCode;

//错误信息，当不为0时，为微信返回的错误信息(必填) 
@property(nonatomic,strong) NSString * errorMsg;

//授权用户唯一标识(必填) 
@property(nonatomic,strong) NSString * openid;

@end