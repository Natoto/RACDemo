//  
//  此文件请勿修改，如需扩展请在外部实现

//  
//  PayInfoReq.h
//  PENG
//
//  此文件请勿修改，如需扩展请在外部实现.
//  Copyright (c) 2015年 星盛. All rights reserved.
//
//所属模块：众筹
//说明：
/******************
众筹支付信息 
*******************/
#import <Foundation/Foundation.h>
#import "Req.h"

@interface PayInfoReq : Req

//众筹类型(1.娱乐众筹 2.粉丝应援众筹)(必填) 
@property(nonatomic,strong) NSNumber * chipsType;
//碰用户手机号(必填) 
@property(nonatomic,strong) NSString * mobile;
//碰用户id(必填) 
@property(nonatomic,strong) NSNumber * pengId;
//支付编号(必填) 
@property(nonatomic,strong) NSNumber * payId;
@end