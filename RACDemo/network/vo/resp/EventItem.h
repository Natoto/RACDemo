//  
//  此文件请勿修改，如需扩展请在外部实现

//  
//  EventItem.h
//  PENG
//
//  此文件请勿修改，如需扩展请在外部实现.
//  Copyright (c) 2015年 星盛. All rights reserved.
//
//所属模块：活动
//说明：
/******************
活动信息 
*******************/
#import <Foundation/Foundation.h>
#import "Resp.h"

@interface EventItem : Resp

//活动id流水号(必填) 
@property(nonatomic,strong) NSNumber * eid;

//活动名称(必填) 
@property(nonatomic,strong) NSString * name;

//海报(必填) 
@property(nonatomic,strong) NSString * img;

//活动地点(必填) 
@property(nonatomic,strong) NSString * place;

//简介 (必填) 
@property(nonatomic,strong) NSString * intro;

//相关艺人(必填) 
@property(nonatomic,strong) NSString * actors;

//焦点图 (必填) 
@property(nonatomic,strong) NSString * pic;

//标签 (必填) 
@property(nonatomic,strong) NSString * tags;

//推荐（1：推荐到首页;2:推荐到热门）(必填) 
@property(nonatomic,strong) NSNumber * recommend;

//众筹福利 (必填) 
@property(nonatomic,strong) NSNumber * funchipsid;

//应援福利(必填) 
@property(nonatomic,strong) NSNumber * fansupportid;

//活动福利(必填) 
@property(nonatomic,strong) NSNumber * activityid;

//福利活动开始时间 (必填) 
@property(nonatomic,strong) NSNumber * startTime;

//福利活动结束时间  (必填) 
@property(nonatomic,strong) NSNumber * endTime;

//举办时间(必填) 
@property(nonatomic,strong) NSNumber * holdingTime;

//创建时间(必填) 
@property(nonatomic,strong) NSNumber * createTime;

@end