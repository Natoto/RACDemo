//  
//  此文件请勿修改，如需扩展请在外部实现

//  
//  NewsDetailResp.h
//  PENG
//
//  此文件请勿修改，如需扩展请在外部实现.
//  Copyright (c) 2015年 星盛. All rights reserved.
//
//所属模块：电影
//说明：
/******************
电影详细信息 
*******************/
#import <Foundation/Foundation.h>
#import "Resp.h"

/*  */
//extern int const retCode_success;//1

/*  */
//extern int const retCode_success_no_data;//2

/*  */
//extern int const retCode_error;//0

@interface NewsDetailResp : Resp

//相关艺人(必填) 
@property(nonatomic,strong) NSMutableArray* actorItems;//存储对象：ActorItem

//图文列表(必填) 
@property(nonatomic,strong) NSMutableArray* articleItems;//存储对象：NewsArticleItem

//返回码(必填) 
@property(nonatomic,strong) NSNumber * retCode;

@end