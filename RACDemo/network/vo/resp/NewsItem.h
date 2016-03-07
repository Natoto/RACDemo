//  
//  此文件请勿修改，如需扩展请在外部实现

//  
//  NewsItem.h
//  PENG
//
//  此文件请勿修改，如需扩展请在外部实现.
//  Copyright (c) 2015年 星盛. All rights reserved.
//
//所属模块：资讯
//说明：
/******************
资讯信息 
*******************/
#import <Foundation/Foundation.h>
#import "Resp.h"

@interface NewsItem : Resp

//资讯id(必填) 
@property(nonatomic,strong) NSNumber * nid;

//标题 (必填) 
@property(nonatomic,strong) NSString * title;

//标题图片 (必填) 
@property(nonatomic,strong) NSString * img;

//出处，来源 (必填) 
@property(nonatomic,strong) NSString * source;

//标签关键字 分号分割 (必填) 
@property(nonatomic,strong) NSString * tags;

//相关艺人(必填) 
@property(nonatomic,strong) NSString * actors;

//状态 1:八卦.2:潮品 (必填) 
@property(nonatomic,strong) NSNumber * type;

//状态 0:无效 1:有效 2:驳回 3:待审 (必填) 
@property(nonatomic,strong) NSNumber * status;

//创建时间 (必填) 
@property(nonatomic,strong) NSNumber * createTime;

@end