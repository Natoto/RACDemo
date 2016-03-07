//  
//  此文件请勿修改，如需扩展请在外部实现

//  
//  HotTopicsReq.h
//  PENG
//
//  此文件请勿修改，如需扩展请在外部实现.
//  Copyright (c) 2015年 星盛. All rights reserved.
//
//所属模块：众筹
//说明：
/******************
获取众筹话题 
*******************/
#import <Foundation/Foundation.h>
#import "Req.h"

@interface HotTopicsReq : Req

//众筹id(必填) 
@property(nonatomic,strong) NSNumber * cid;
//类型（1:众筹;2:应援）(必填) 
@property(nonatomic,strong) NSNumber * cType;
//查询类型（1：最热;2:最新）(必填) 
@property(nonatomic,strong) NSNumber * flag;
//每页数据量(必填) 
@property(nonatomic,strong) NSNumber * pageSize;
//当前页码 从0开始(必填) 
@property(nonatomic,strong) NSNumber * currentPage;
//边界(必填) 
@property(nonatomic,strong) NSNumber * fromId;
@end