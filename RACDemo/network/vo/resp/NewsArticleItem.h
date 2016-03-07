//  
//  此文件请勿修改，如需扩展请在外部实现

//  
//  NewsArticleItem.h
//  PENG
//
//  此文件请勿修改，如需扩展请在外部实现.
//  Copyright (c) 2015年 星盛. All rights reserved.
//
//所属模块：新闻
//说明：
/******************
新闻图文信息 
*******************/
#import <Foundation/Foundation.h>
#import "Resp.h"

@interface NewsArticleItem : Resp

//图文id(必填) 
@property(nonatomic,strong) NSNumber * nid;

//新闻id(必填) 
@property(nonatomic,strong) NSNumber * newsid;

//内容 (必填) 
@property(nonatomic,strong) NSString * content;

//内容类型（1：图片；2：文字）(必填) 
@property(nonatomic,strong) NSNumber * type;

//排序编号 (必填) 
@property(nonatomic,strong) NSNumber * sortNo;

@end