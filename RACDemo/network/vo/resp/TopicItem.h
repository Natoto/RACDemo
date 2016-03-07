//  
//  此文件请勿修改，如需扩展请在外部实现

//  
//  TopicItem.h
//  PENG
//
//  此文件请勿修改，如需扩展请在外部实现.
//  Copyright (c) 2015年 星盛. All rights reserved.
//
//所属模块：帖子
//说明：
/******************
帖子信息 
*******************/
#import <Foundation/Foundation.h>
#import "Resp.h"
#import "VideoItem.h"

@interface TopicItem : Resp

//tid(必填) 
@property(nonatomic,strong) NSNumber * tid;

//tid密文(必填) 
@property(nonatomic,strong) NSString * ptid;

//碰类型，0:普通的图片碰，1：视频碰(必填) 
@property(nonatomic,strong) NSNumber * type;

//视频信息 默认：nil (可选) 
@property(nonatomic,strong) VideoItem * videoInfo;

//图片信息(必填) 
@property(nonatomic,strong) NSMutableArray* imageList;//存储对象：TopicImageRp

//内容(必填) 
@property(nonatomic,strong) NSString * content;

//地点详细(必填) 
@property(nonatomic,strong) NSString * placeDesc;

//城市名(必填) 
@property(nonatomic,strong) NSString * city;

//区县名(必填) 
@property(nonatomic,strong) NSString * district;

//省名(必填) 
@property(nonatomic,strong) NSString * province;

//字符串数组 (必填) 
@property(nonatomic,strong) NSMutableArray* tags;//存储对象：TaglibInfo

//赞数量 (必填) 
@property(nonatomic,strong) NSNumber * zanCnt;

//评论数量 (必填) 
@property(nonatomic,strong) NSNumber * cmdCnt;

//发布人id(必填) 
@property(nonatomic,strong) NSNumber * userId;

//发布人昵称(必填) 
@property(nonatomic,strong) NSString * userNick;

//发布时间 (必填) 
@property(nonatomic,strong) NSNumber * createTime;

//用户头像 (必填) 
@property(nonatomic,strong) NSString * avatar;

//评论信息 (必填) 
@property(nonatomic,strong) NSMutableArray* evals;//存储对象：TopicevaluateItem

//点赞状态 (1:已点赞 ;0:没有点赞)(必填) 
@property(nonatomic,strong) NSNumber * isZan;

//关注状态(1:已关注;0:没有点赞)(必填) 
@property(nonatomic,strong) NSNumber * isFollow;

@end