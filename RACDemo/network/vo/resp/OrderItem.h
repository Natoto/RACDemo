//  
//  此文件请勿修改，如需扩展请在外部实现

//  
//  OrderItem.h
//  PENG
//
//  此文件请勿修改，如需扩展请在外部实现.
//  Copyright (c) 2015年 星盛. All rights reserved.
//
//所属模块：订单
//说明：
/******************
订单信息 
*******************/
#import <Foundation/Foundation.h>
#import "Resp.h"

@interface OrderItem : Resp

//订单id(必填) 
@property(nonatomic,strong) NSNumber * oid;

//订单号(必填) 
@property(nonatomic,strong) NSString * no;

//礼品id (必填) 
@property(nonatomic,strong) NSNumber * gid;

//礼品图片(必填) 
@property(nonatomic,strong) NSString * img;

//礼品所需金币(必填) 
@property(nonatomic,strong) NSNumber * coin;

//用户id (必填) 
@property(nonatomic,strong) NSNumber * userId;

//地址(必填) 
@property(nonatomic,strong) NSString * address;

//订单状态(-1:兑换失败；0:待处理；1：已兑换) (必填) 
@property(nonatomic,strong) NSNumber * status;

//创建时间 (必填) 
@property(nonatomic,strong) NSNumber * createTime;

//更新时间 (必填) 
@property(nonatomic,strong) NSNumber * updateTime;

//备注 (必填) 
@property(nonatomic,strong) NSString * remark;

@end