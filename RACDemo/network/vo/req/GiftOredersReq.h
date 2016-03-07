//  
//  此文件请勿修改，如需扩展请在外部实现

//  
//  GiftOredersReq.h
//  PENG
//
//  此文件请勿修改，如需扩展请在外部实现.
//  Copyright (c) 2015年 星盛. All rights reserved.
//
//所属模块：礼品
//说明：
/******************
礼品兑换记录 
*******************/
#import <Foundation/Foundation.h>
#import "Req.h"

@interface GiftOredersReq : Req

//历程gid(必填) 
@property(nonatomic,strong) NSNumber * gid;
//收货人姓名 (必填) 
@property(nonatomic,strong) NSString * name;
//手机号码 (必填) 
@property(nonatomic,strong) NSString * mobile;
//所在地区(必填) 
@property(nonatomic,strong) NSString * city;
//详细地址(必填) 
@property(nonatomic,strong) NSString * address;
@end