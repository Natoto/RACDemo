//  
//  此文件请勿修改，如需扩展请在外部实现

//  
//  DiscoveryTopicItem.h
//  PENG
//
//  此文件请勿修改，如需扩展请在外部实现.
//  Copyright (c) 2015年 星盛. All rights reserved.
//
//所属模块：碰
//说明：
/******************
发现频道 
*******************/
#import <Foundation/Foundation.h>
#import "Resp.h"

/*  */
//extern int const AD_TYPE;//1

/*  */
//extern int const TOPIC_TYPE;//2

/*  */
//extern int const COURSE_TYPE;//3

/*  */
//extern int const VIDEO_TYPE;//4

@interface DiscoveryTopicItem : Resp

//帖子id(必填) 
@property(nonatomic,strong) NSNumber * tid;

//图片(必填) 
@property(nonatomic,strong) NSString * img;

//创建时间(必填) 
@property(nonatomic,strong) NSNumber * createTime;

//标题(必填) 
@property(nonatomic,strong) NSString * title;

//类型（1:帖子运营位；2：帖子；3:历程运营位置；4:帖子视频）(必填) 
@property(nonatomic,strong) NSNumber * type;

//发布人id(必填) 
@property(nonatomic,strong) NSNumber * userId;

//发布人昵称(必填) 
@property(nonatomic,strong) NSString * userNick;

//用户头像 (必填) 
@property(nonatomic,strong) NSString * avatar;

//点赞状态 (1:已点赞 ;0:没有点赞)(必填) 
@property(nonatomic,strong) NSNumber * isZan;

//赞数量 (必填) 
@property(nonatomic,strong) NSNumber * zanCnt;

//图片数量 (必填) 
@property(nonatomic,strong) NSNumber * imageCnt;

//内容(必填) 
@property(nonatomic,strong) NSString * content;

@end