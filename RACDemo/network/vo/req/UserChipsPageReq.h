//  
//  此文件请勿修改，如需扩展请在外部实现

//  
//  UserChipsPageReq.h
//  PENG
//
//  此文件请勿修改，如需扩展请在外部实现.
//  Copyright (c) 2015年 星盛. All rights reserved.
//
//所属模块：众筹
//说明：
/******************
请求用户众筹列表(分页) 
*******************/
#import <Foundation/Foundation.h>
#import "Req.h"

@interface UserChipsPageReq : Req

//碰用户id(必填) 
@property(nonatomic,strong) NSNumber * pengId;
//碰用户id(必填) 
@property(nonatomic,strong) NSString * mobile;
//页码(必填) 
@property(nonatomic,strong) NSNumber * pageNo;
//每页数据（默认20） 默认：20 (必填) 
@property(nonatomic,strong) NSNumber * pageSize;
//请求类型(1:支付;2：关注)(必填) 
@property(nonatomic,strong) NSNumber * flag;
@end