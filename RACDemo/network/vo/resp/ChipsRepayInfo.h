//  
//  此文件请勿修改，如需扩展请在外部实现

//  
//  ChipsRepayInfo.h
//  PENG
//
//  此文件请勿修改，如需扩展请在外部实现.
//  Copyright (c) 2015年 星盛. All rights reserved.
//
//所属模块：众筹
//说明：
/******************
众筹回报信息 
*******************/
#import <Foundation/Foundation.h>
#import "Resp.h"

@interface ChipsRepayInfo : Resp

//众筹回报id(必填) 
@property(nonatomic,strong) NSNumber * chipsRepayId;

//众筹id(必填) 
@property(nonatomic,strong) NSNumber * chipsId;

//回报类型(0:实物 1:虚拟物品)(必填) 
@property(nonatomic,strong) NSNumber * types;

//支持金额(必填) 
@property(nonatomic,strong) NSNumber * amount;

//内容(必填) 
@property(nonatomic,strong) NSString * content;

//封面图(必填) 
@property(nonatomic,strong) NSString * cover;

//限定名额(必填) 
@property(nonatomic,strong) NSNumber * quota;

//还剩下多少名额(必填) 
@property(nonatomic,strong) NSNumber * remain;

//支持者数量(必填) 
@property(nonatomic,strong) NSNumber * payPerson;

//运费(必填) 
@property(nonatomic,strong) NSNumber * carriage;

//回报发放时间(必填) 
@property(nonatomic,strong) NSNumber * sendTime;

//支付(1:可以支付; 0:不可以支付)(必填) 
@property(nonatomic,strong) NSNumber * funChipsPayStatus;

@end