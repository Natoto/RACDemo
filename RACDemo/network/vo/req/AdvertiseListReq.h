//  
//  此文件请勿修改，如需扩展请在外部实现

//  
//  AdvertiseListReq.h
//  PENG
//
//  此文件请勿修改，如需扩展请在外部实现.
//  Copyright (c) 2015年 星盛. All rights reserved.
//
//所属模块：碰
//说明：
/******************
请求广告位列表 
*******************/
#import <Foundation/Foundation.h>
#import "Req.h"

@interface AdvertiseListReq : Req

//类型（0:旧版;1：新版 2:2015-11-16新版）(必填) 
@property(nonatomic,strong) NSNumber * v;
@end