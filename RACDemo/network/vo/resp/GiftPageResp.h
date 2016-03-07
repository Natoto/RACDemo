//  
//  此文件请勿修改，如需扩展请在外部实现

//  
//  GiftPageResp.h
//  PENG
//
//  此文件请勿修改，如需扩展请在外部实现.
//  Copyright (c) 2015年 星盛. All rights reserved.
//
//所属模块：礼品
//说明：
/******************
礼品列表（分页） 
*******************/
#import <Foundation/Foundation.h>
#import "Resp.h"

/*  */
//extern int const Direction_Up;//0

/*  */
//extern int const Direction_Down;//1

/*  */
//extern int const retCode_success;//1

/*  */
//extern int const retCode_success_no_data;//2

/*  */
//extern int const retCode_topic_not_found;//3

/*  */
//extern int const retCode_error;//0

@interface GiftPageResp : Resp

//礼品信息(必填) 
@property(nonatomic,strong) NSMutableArray* list;//存储对象：GiftItem

//返回码(必填) 
@property(nonatomic,strong) NSNumber * retCode;

//边界值 为获取的最后一条数据的id(必填) 
@property(nonatomic,strong) NSNumber * lastId;

//当前用户金币数(必填) 
@property(nonatomic,strong) NSNumber * userCoin;

@end