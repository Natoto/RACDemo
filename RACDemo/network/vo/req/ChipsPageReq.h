//  
//  此文件请勿修改，如需扩展请在外部实现

//  
//  ChipsPageReq.h
//  PENG
//
//  此文件请勿修改，如需扩展请在外部实现.
//  Copyright (c) 2015年 星盛. All rights reserved.
//
//所属模块：众筹
//说明：
/******************
请求娱乐众筹列表 
*******************/
#import <Foundation/Foundation.h>
#import "Req.h"

@interface ChipsPageReq : Req

//请求id(必填) 
@property(nonatomic,strong) NSNumber * fromId;
//页码(必填) 
@property(nonatomic,strong) NSNumber * pageNo;
//每页数据（默认20） 默认：20 (必填) 
@property(nonatomic,strong) NSNumber * pageSize;
//众筹类型(1.娱乐众筹 2.粉丝应援众筹)(必填) 
@property(nonatomic,strong) NSNumber * cType;
@end