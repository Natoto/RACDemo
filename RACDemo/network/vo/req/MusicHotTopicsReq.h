//  
//  此文件请勿修改，如需扩展请在外部实现

//  
//  MusicHotTopicsReq.h
//  PENG
//
//  此文件请勿修改，如需扩展请在外部实现.
//  Copyright (c) 2015年 星盛. All rights reserved.
//
//所属模块：音乐
//说明：
/******************
音乐列表（分页） 
*******************/
#import <Foundation/Foundation.h>
#import "Req.h"

@interface MusicHotTopicsReq : Req

//音乐id(必填) 
@property(nonatomic,strong) NSNumber * mid;
//音乐类型(1:音乐;2:IN乐指数)(必填) 
@property(nonatomic,strong) NSNumber * type;
//查询类型（1：最热;2:最新）(必填) 
@property(nonatomic,strong) NSNumber * flag;
//每页数据量(必填) 
@property(nonatomic,strong) NSNumber * pageSize;
//当前页码 从0开始(必填) 
@property(nonatomic,strong) NSNumber * currentPage;
//边界(必填) 
@property(nonatomic,strong) NSNumber * fromId;
@end