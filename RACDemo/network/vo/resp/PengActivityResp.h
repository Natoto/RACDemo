//  
//  此文件请勿修改，如需扩展请在外部实现

//  
//  PengActivityResp.h
//  PENG
//
//  此文件请勿修改，如需扩展请在外部实现.
//  Copyright (c) 2015年 星盛. All rights reserved.
//
//所属模块：活动
//说明：
/******************
活动列表 
*******************/
#import <Foundation/Foundation.h>
#import "Resp.h"

@interface PengActivityResp : Resp

//活动数据列表(必填) 
@property(nonatomic,strong) NSMutableArray* activitys;//存储对象：PengActivity

@end