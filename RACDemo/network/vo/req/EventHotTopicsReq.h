//  
//  此文件请勿修改，如需扩展请在外部实现

//  
//  EventHotTopicsReq.h
//  PENG
//
//  此文件请勿修改，如需扩展请在外部实现.
//  Copyright (c) 2015年 星盛. All rights reserved.
//
//所属模块：活动
//说明：
/******************
活动列表（分页） 
*******************/
#import <Foundation/Foundation.h>
#import "Req.h"

@interface EventHotTopicsReq : Req

//活动id(必填) 
@property(nonatomic,strong) NSNumber * eid;
//每页数据量(必填) 
@property(nonatomic,strong) NSNumber * pageSize;
//当前页码 从0开始(必填) 
@property(nonatomic,strong) NSNumber * currentPage;
//边界(必填) 
@property(nonatomic,strong) NSNumber * fromId;
@end