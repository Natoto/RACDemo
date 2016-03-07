//  
//  此文件请勿修改，如需扩展请在外部实现

//  
//  EventInfoReq.h
//  PENG
//
//  此文件请勿修改，如需扩展请在外部实现.
//  Copyright (c) 2015年 星盛. All rights reserved.
//
//所属模块：活动
//说明：
/******************
活动详细信息 
*******************/
#import <Foundation/Foundation.h>
#import "Req.h"

@interface EventInfoReq : Req

//活动id(必填) 
@property(nonatomic,strong) NSNumber * eid;
@end