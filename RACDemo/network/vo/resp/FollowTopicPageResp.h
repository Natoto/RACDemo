//  
//  此文件请勿修改，如需扩展请在外部实现

//  
//  FollowTopicPageResp.h
//  PENG
//
//  此文件请勿修改，如需扩展请在外部实现.
//  Copyright (c) 2015年 星盛. All rights reserved.
//
//所属模块：关注
//说明：
/******************
关注的碰信息推送 
*******************/
#import <Foundation/Foundation.h>
#import "Resp.h"

/*  */
//extern int const Direction_Up;//0

/*  */
//extern int const Direction_Down;//1

/*  */
//extern int const retCode_success;//1

/*  */
//extern int const retCode_success_no_data;//2

/*  */
//extern int const retCode_topic_not_found;//3

/*  */
//extern int const retCode_error;//0

@interface FollowTopicPageResp : Resp

//帖子信息(必填) 
@property(nonatomic,strong) NSMutableArray* list;//存储对象：TopicItem

//边界值 为获取的最后一条数据的id(必填) 
@property(nonatomic,strong) NSNumber * lastId;

//方向，有向上及向下两方向(0:上;1:下)(必填) 
@property(nonatomic,strong) NSNumber * direction;

//返回码(必填) 
@property(nonatomic,strong) NSNumber * retCode;

@end