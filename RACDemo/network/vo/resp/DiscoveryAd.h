//  
//  此文件请勿修改，如需扩展请在外部实现

//  
//  DiscoveryAd.h
//  PENG
//
//  此文件请勿修改，如需扩展请在外部实现.
//  Copyright (c) 2015年 星盛. All rights reserved.
//
//所属模块：碰
//说明：
/******************
发现频道广告位 
*******************/
#import <Foundation/Foundation.h>
#import "Resp.h"
#import "TopicItem.h"

@interface DiscoveryAd : Resp

//广告位id(必填) 
@property(nonatomic,strong) NSNumber * aid;

//帖子id(必填) 
@property(nonatomic,strong) NSNumber * tid;

//图片(必填) 
@property(nonatomic,strong) NSString * img;

//创建时间(必填) 
@property(nonatomic,strong) NSNumber * createTime;

//帖子数据(必填) 
@property(nonatomic,strong) TopicItem * item;

@end