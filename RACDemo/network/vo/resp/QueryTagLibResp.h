//  
//  此文件请勿修改，如需扩展请在外部实现

//  
//  QueryTagLibResp.h
//  PENG
//
//  此文件请勿修改，如需扩展请在外部实现.
//  Copyright (c) 2015年 星盛. All rights reserved.
//
//所属模块：标签
//说明：
/******************
标签搜索接口 
*******************/
#import <Foundation/Foundation.h>
#import "Resp.h"

@interface QueryTagLibResp : Resp

//关键字(必填) 
@property(nonatomic,strong) NSString * keyword;

//内容(必填) 
@property(nonatomic,strong) NSMutableArray* infos;//存储对象：TaglibInfo

//返回码，0：成功，-1：失败，1：无数据 默认：-1 (必填) 
@property(nonatomic,strong) NSNumber * resultCode;

@end