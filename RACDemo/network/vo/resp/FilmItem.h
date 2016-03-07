//  
//  此文件请勿修改，如需扩展请在外部实现

//  
//  FilmItem.h
//  PENG
//
//  此文件请勿修改，如需扩展请在外部实现.
//  Copyright (c) 2015年 星盛. All rights reserved.
//
//所属模块：电影
//说明：
/******************
电影信息 
*******************/
#import <Foundation/Foundation.h>
#import "Resp.h"

@interface FilmItem : Resp

//电影id(必填) 
@property(nonatomic,strong) NSNumber * fid;

//名称(必填) 
@property(nonatomic,strong) NSString * name;

//类型(1:正在上映;2:即将上映)(必填) 
@property(nonatomic,strong) NSNumber * type;

//海报 (必填) 
@property(nonatomic,strong) NSString * img;

//简介 (必填) 
@property(nonatomic,strong) NSString * intro;

//焦点图  (必填) 
@property(nonatomic,strong) NSString * pic;

//标签 (必填) 
@property(nonatomic,strong) NSString * tags;

//出处，来源(必填) 
@property(nonatomic,strong) NSString * source;

//相关艺人(必填) 
@property(nonatomic,strong) NSString * actors;

//推荐（1：推荐到首页;2:推荐到热门）(必填) 
@property(nonatomic,strong) NSNumber * recommend;

//上映结束时间(必填) 
@property(nonatomic,strong) NSNumber * endTime;

//上映开始时间(必填) 
@property(nonatomic,strong) NSNumber * startTime;

//创建时间(必填) 
@property(nonatomic,strong) NSNumber * createTime;

@end