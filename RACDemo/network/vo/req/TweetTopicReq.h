//  
//  此文件请勿修改，如需扩展请在外部实现

//  
//  TweetTopicReq.h
//  PENG
//
//  此文件请勿修改，如需扩展请在外部实现.
//  Copyright (c) 2015年 星盛. All rights reserved.
//
//所属模块：帖子
//说明：
/******************
发布帖子 
*******************/
#import <Foundation/Foundation.h>
#import "Req.h"

@interface TweetTopicReq : Req

//内容(必填) (内容需转义!!) 
@property(nonatomic,strong) NSString * content;
//视频传输id，默认值-1，当此值大于等于0时，补认为该碰是一个碰视频 默认：-1 (必填) 
@property(nonatomic,strong) NSNumber * videoTransId;
//图片及其信息，如果是视频的话，这里只取一张，作为封面。所以视频不要传多张过来哦(必填) 
@property(nonatomic,strong) NSMutableArray* imageList;//存储对象：TopicImageRq
//标签(必填) 
@property(nonatomic,strong) NSMutableArray* tag;
//是否位置默认 （1:是；0：不是）(必填) 
@property(nonatomic,strong) NSNumber * isDefaultLocation;
//纬度(必填) 
@property(nonatomic,strong) NSNumber * latitude;
//经度(必填) 
@property(nonatomic,strong) NSNumber * longitude;
//位置描述(必填) 
@property(nonatomic,strong) NSString * placeDesc;
//历程id(必填) 
@property(nonatomic,strong) NSNumber * courseId;
@end