//  
//  此文件请勿修改，如需扩展请在外部实现

//  
//  GiftRedeemReq.h
//  PENG
//
//  此文件请勿修改，如需扩展请在外部实现.
//  Copyright (c) 2015年 星盛. All rights reserved.
//
//所属模块：礼品
//说明：
/******************
兑换礼品 
*******************/
#import <Foundation/Foundation.h>
#import "Req.h"

@interface GiftRedeemReq : Req

//礼品gid(必填) 
@property(nonatomic,strong) NSNumber * gid;
//收货人姓名 (必填) 
@property(nonatomic,strong) NSString * name;
//手机号码 (必填) 
@property(nonatomic,strong) NSString * mobile;
//详细地址(必填) 
@property(nonatomic,strong) NSString * address;
@end