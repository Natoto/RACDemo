//  
//  此文件请勿修改，如需扩展请在外部实现

//  
//  TagTopicItem.h
//  PENG
//
//  此文件请勿修改，如需扩展请在外部实现.
//  Copyright (c) 2015年 星盛. All rights reserved.
//
//所属模块：帖子
//说明：
/******************
标签帖子信息 
*******************/
#import <Foundation/Foundation.h>
#import "Resp.h"

@interface TagTopicItem : Resp

//帖子id(必填) 
@property(nonatomic,strong) NSNumber * topicId;

//图片数(必填) 
@property(nonatomic,strong) NSNumber * imageCnt;

//图片(必填) 
@property(nonatomic,strong) NSString * imageUrl;

//时间(必填) 
@property(nonatomic,strong) NSNumber * createTime;

//地址(必填) 
@property(nonatomic,strong) NSString * address;

//内容(必填) 
@property(nonatomic,strong) NSString * content;

//碰类型，0:普通的图片碰，1：视频碰(必填) 
@property(nonatomic,strong) NSNumber * type;

@end