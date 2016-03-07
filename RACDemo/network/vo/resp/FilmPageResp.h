//  
//  此文件请勿修改，如需扩展请在外部实现

//  
//  FilmPageResp.h
//  PENG
//
//  此文件请勿修改，如需扩展请在外部实现.
//  Copyright (c) 2015年 星盛. All rights reserved.
//
//所属模块：电影
//说明：
/******************
电影列表（分页） 
*******************/
#import <Foundation/Foundation.h>
#import "Resp.h"

/*  */
//extern int const retCode_success;//1

/*  */
//extern int const retCode_success_no_data;//2

/*  */
//extern int const retCode_topic_not_found;//3

/*  */
//extern int const retCode_error;//0

@interface FilmPageResp : Resp

//电影信息(必填) 
@property(nonatomic,strong) NSMutableArray* list;//存储对象：FilmItem

//返回码(必填) 
@property(nonatomic,strong) NSNumber * retCode;

//电影类型(1:正在上映;2:即将上映)(必填) 
@property(nonatomic,strong) NSNumber * type;

@end