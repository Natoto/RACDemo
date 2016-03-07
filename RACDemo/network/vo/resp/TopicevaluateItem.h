//  
//  此文件请勿修改，如需扩展请在外部实现

//  
//  TopicevaluateItem.h
//  PENG
//
//  此文件请勿修改，如需扩展请在外部实现.
//  Copyright (c) 2015年 星盛. All rights reserved.
//
//所属模块：帖子
//说明：
/******************
帖子评论信息 
*******************/
#import <Foundation/Foundation.h>
#import "Resp.h"

@interface TopicevaluateItem : Resp

//评论ID (必填) 
@property(nonatomic,strong) NSNumber * tid;

//评论者ID (必填) 
@property(nonatomic,strong) NSString * cmder;

//楼层(必填) 
@property(nonatomic,strong) NSNumber * floor;

//帖子id(必填) 
@property(nonatomic,strong) NSNumber * topicId;

//对象id(必填) 
@property(nonatomic,strong) NSNumber * oid;

//类型:(5:电影;6:音乐;7:活动;8:八卦;9:潮品)(必填) 
@property(nonatomic,strong) NSNumber * type;

//评价时间(必填) 
@property(nonatomic,strong) NSNumber * evalTime;

//评价时间(必填) 
@property(nonatomic,strong) NSString * evalTimeStr;

//评论信息(必填) 
@property(nonatomic,strong) NSString * msg;

//头像(必填) 
@property(nonatomic,strong) NSString * portrait;

//昵称(必填) 
@property(nonatomic,strong) NSString * nickname;

//引用的楼层(必填) 
@property(nonatomic,strong) NSNumber * attachFloor;

//引用的楼层用户昵称(必填) 
@property(nonatomic,strong) NSString * attachFloorUser;

@end