//  
//  此文件请勿修改，如需扩展请在外部实现

//  
//  SupportChipsPageReq.h
//  PENG
//
//  此文件请勿修改，如需扩展请在外部实现.
//  Copyright (c) 2015年 星盛. All rights reserved.
//
//所属模块：众筹
//说明：
/******************
请求粉丝应援列表 
*******************/
#import <Foundation/Foundation.h>
#import "Req.h"

@interface SupportChipsPageReq : Req

//请求id(必填) 
@property(nonatomic,strong) NSNumber * fromId;
//页码(必填) 
@property(nonatomic,strong) NSNumber * pageNo;
//每页数据（默认20） 默认：20 (必填) 
@property(nonatomic,strong) NSNumber * pageSize;
@end