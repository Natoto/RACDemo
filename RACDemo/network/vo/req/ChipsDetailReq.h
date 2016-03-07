//  
//  此文件请勿修改，如需扩展请在外部实现

//  
//  ChipsDetailReq.h
//  PENG
//
//  此文件请勿修改，如需扩展请在外部实现.
//  Copyright (c) 2015年 星盛. All rights reserved.
//
//所属模块：众筹
//说明：
/******************
获取众筹详细信息 
*******************/
#import <Foundation/Foundation.h>
#import "Req.h"

@interface ChipsDetailReq : Req

//众筹id(必填) 
@property(nonatomic,strong) NSNumber * cid;
//类型（1:众筹;2:应援）(必填) 
@property(nonatomic,strong) NSNumber * cType;
@end