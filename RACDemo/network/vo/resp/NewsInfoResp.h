//  
//  此文件请勿修改，如需扩展请在外部实现

//  
//  NewsInfoResp.h
//  PENG
//
//  此文件请勿修改，如需扩展请在外部实现.
//  Copyright (c) 2015年 星盛. All rights reserved.
//
//所属模块：资讯
//说明：
/******************
资讯介绍 
*******************/
#import <Foundation/Foundation.h>
#import "Resp.h"
#import "NewsItem.h"

/*  */
//extern int const retCode_success;//1

/*  */
//extern int const retCode_success_no_data;//2

/*  */
//extern int const retCode_error;//0

@interface NewsInfoResp : Resp

//资讯信息(必填) 
@property(nonatomic,strong) NewsItem * item;

//相关福利(必填) 
@property(nonatomic,strong) NSMutableArray* wList;//存储对象：WelfareItem

//相关艺人(必填) 
@property(nonatomic,strong) NSMutableArray* actorItems;//存储对象：ActorItem

//图文列表(必填) 
@property(nonatomic,strong) NSMutableArray* articleItems;//存储对象：NewsArticleItem

//评论数量 (必填) 
@property(nonatomic,strong) NSNumber * cmdCnt;

//返回码(必填) 
@property(nonatomic,strong) NSNumber * retCode;

@end