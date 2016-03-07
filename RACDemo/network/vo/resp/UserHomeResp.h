//  
//  此文件请勿修改，如需扩展请在外部实现

//  
//  UserHomeResp.h
//  PENG
//
//  此文件请勿修改，如需扩展请在外部实现.
//  Copyright (c) 2015年 星盛. All rights reserved.
//


#import <Foundation/Foundation.h>
#import "Resp.h"
#import "UserInfo.h"

@interface UserHomeResp : Resp

//用户信息(必填) 
@property(nonatomic,strong) UserInfo * info;

//点赞数（收藏数)(必填) 
@property(nonatomic,strong) NSNumber * zanCount;

//被赞数(必填) 
@property(nonatomic,strong) NSNumber * zanedCount;

//图片数(必填) 
@property(nonatomic,strong) NSNumber * imageCount;

//关注数(必填) 
@property(nonatomic,strong) NSNumber * followingCount;

//粉丝数(必填) 
@property(nonatomic,strong) NSNumber * followedByCount;

//历程数(必填) 
@property(nonatomic,strong) NSNumber * courseCount;

//图片列表(必填) 
@property(nonatomic,strong) NSMutableArray* topicList;//存储对象：TagTopicItem

//返回码，0：成功，-1：失败，1：无数据 默认：-1 (必填) 
@property(nonatomic,strong) NSNumber * resultCode;

@end