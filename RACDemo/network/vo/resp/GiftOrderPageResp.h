//  
//  此文件请勿修改，如需扩展请在外部实现

//  
//  GiftOrderPageResp.h
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
#import "Resp.h"

/*  */
//extern int const retCode_success;//1

/*  */
//extern int const retCode_success_no_data;//2

/*  */
//extern int const retCode_error;//0

@interface GiftOrderPageResp : Resp

//订单信息(必填) 
@property(nonatomic,strong) NSMutableArray* items;//存储对象：OrderItem

//返回码(必填) 
@property(nonatomic,strong) NSNumber * retCode;

@end