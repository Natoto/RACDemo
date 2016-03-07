//  
//  此文件请勿修改，如需扩展请在外部实现

//  
//  SearchUserResp.h
//  PENG
//
//  此文件请勿修改，如需扩展请在外部实现.
//  Copyright (c) 2015年 星盛. All rights reserved.
//
//所属模块：登录
//说明：
/******************
版本检测结果，是否要进行强制更新、非强制更新，以及一些初始化的配置信息 
*******************/
#import <Foundation/Foundation.h>
#import "Resp.h"

@interface SearchUserResp : Resp

//关键字(必填) 
@property(nonatomic,strong) NSString * keyword;

//内容(必填) 
@property(nonatomic,strong) NSMutableArray* infos;//存储对象：UserInfo

//返回码，0：成功，-1：失败，1：无数据 默认：-1 (必填) 
@property(nonatomic,strong) NSNumber * resultCode;

@end