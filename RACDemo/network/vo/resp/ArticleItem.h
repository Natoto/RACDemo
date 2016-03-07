//  
//  此文件请勿修改，如需扩展请在外部实现

//  
//  ArticleItem.h
//  PENG
//
//  此文件请勿修改，如需扩展请在外部实现.
//  Copyright (c) 2015年 星盛. All rights reserved.
//
//所属模块：图文
//说明：
/******************
图文信息 
*******************/
#import <Foundation/Foundation.h>
#import "Resp.h"

@interface ArticleItem : Resp

//图文id(必填) 
@property(nonatomic,strong) NSNumber * aid;

//标题 (必填) 
@property(nonatomic,strong) NSString * title;

//描述(必填) 
@property(nonatomic,strong) NSString * depict;

//图片地址 (必填) 
@property(nonatomic,strong) NSString * picUrl;

//排序编号  (必填) 
@property(nonatomic,strong) NSNumber * sortNo;

//类型(1:电影;2:音乐)(必填) 
@property(nonatomic,strong) NSNumber * type;

@end