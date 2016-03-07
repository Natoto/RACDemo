//  
//  此文件请勿修改，如需扩展请在外部实现

//  
//  HotTopicItem.h
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

@interface HotTopicItem : Resp

//tid(必填) 
@property(nonatomic,strong) NSNumber * tid;

//碰类型，0:普通的图片碰，1：视频碰(必填) 
@property(nonatomic,strong) NSNumber * type;

//视频信息 默认：nil (可选) 
@property(nonatomic,strong) VideoItem * videoInfo;

//图片信息(必填) 
@property(nonatomic,strong) NSString * image;

//评论信息 (必填) 
@property(nonatomic,strong) NSMutableArray* evals;//存储对象：TopicevaluateItem

//赞数量 (必填) 
@property(nonatomic,strong) NSNumber * zanCnt;

//点赞状态 (1:已点赞 ;0:没有点赞)(必填) 
@property(nonatomic,strong) NSNumber * isZan;

@end