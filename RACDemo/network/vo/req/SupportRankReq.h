//  
//  此文件请勿修改，如需扩展请在外部实现

//  
//  SupportRankReq.h
//  PENG
//
//  此文件请勿修改，如需扩展请在外部实现.
//  Copyright (c) 2015年 星盛. All rights reserved.
//
//所属模块：众筹
//说明：
/******************
支持榜单列表（分页） 
*******************/
#import <Foundation/Foundation.h>
#import "Req.h"

@interface SupportRankReq : Req

//众筹id(必填) 
@property(nonatomic,strong) NSNumber * cid;
//众筹类型(1.娱乐众筹 2.粉丝应援众筹)(必填) 
@property(nonatomic,strong) NSNumber * ctype;
//页码(必填) 
@property(nonatomic,strong) NSNumber * pageNo;
@end