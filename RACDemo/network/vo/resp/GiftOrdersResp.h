//  
//  此文件请勿修改，如需扩展请在外部实现

//  
//  GiftOrdersResp.h
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
#import "OrderItem.h"

/*  */
//extern int const retCode_success;//1

/*  */
//extern int const retCode_success_no_data;//2

/*  */
//extern int const retCode_error;//0

@interface GiftOrdersResp : Resp

//礼品图片(必填) 
@property(nonatomic,strong) NSString * img;

//礼品所需金币(必填) 
@property(nonatomic,strong) NSNumber * coin;

//订单信息(必填) 
@property(nonatomic,strong) OrderItem * item;

//返回码(必填) 
@property(nonatomic,strong) NSNumber * retCode;

@end