//  
//  此文件请勿修改，如需扩展请在外部实现

//  
//  EventInfoResp.h
//  PENG
//
//  此文件请勿修改，如需扩展请在外部实现.
//  Copyright (c) 2015年 星盛. All rights reserved.
//
//所属模块：活动
//说明：
/******************
活动介绍 
*******************/
#import <Foundation/Foundation.h>
#import "Resp.h"
#import "EventItem.h"

/*  */
//extern int const retCode_success;//1

/*  */
//extern int const retCode_success_no_data;//2

/*  */
//extern int const retCode_error;//0

@interface EventInfoResp : Resp

//活动信息(必填) 
@property(nonatomic,strong) EventItem * item;

//相关福利(必填) 
@property(nonatomic,strong) NSMutableArray* wList;//存储对象：WelfareItem

//返回码(必填) 
@property(nonatomic,strong) NSNumber * retCode;

@end