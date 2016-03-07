//  
//  此文件请勿修改，如需扩展请在外部实现

//  
//  GiftOrderPageReq.h
//  PENG
//
//  此文件请勿修改，如需扩展请在外部实现.
//  Copyright (c) 2015年 星盛. All rights reserved.
//
//所属模块：礼品
//说明：
/******************
礼品兑换记录(分页) 
*******************/
#import <Foundation/Foundation.h>
#import "Req.h"

@interface GiftOrderPageReq : Req

//边界值id, 默认:-1(必填) 
@property(nonatomic,strong) NSNumber * fromId;
//获取数据记录条数 默认：20(必填) 
@property(nonatomic,strong) NSNumber * pageSize;
@end