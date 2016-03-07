//  
//  此文件请勿修改，如需扩展请在外部实现

//  
//  FilmHotTopicsReq.h
//  PENG
//
//  此文件请勿修改，如需扩展请在外部实现.
//  Copyright (c) 2015年 星盛. All rights reserved.
//
//所属模块：电影
//说明：
/******************
电影列表（分页） 
*******************/
#import <Foundation/Foundation.h>
#import "Req.h"

@interface FilmHotTopicsReq : Req

//电影id(必填) 
@property(nonatomic,strong) NSNumber * fid;
//电影类型(必填) 
@property(nonatomic,strong) NSNumber * type;
//电影类型（1：最热;2:最新）(必填) 
@property(nonatomic,strong) NSNumber * flag;
//每页数据量(必填) 
@property(nonatomic,strong) NSNumber * pageSize;
//当前页码 从0开始(必填) 
@property(nonatomic,strong) NSNumber * currentPage;
//边界(必填) 
@property(nonatomic,strong) NSNumber * fromId;
@end