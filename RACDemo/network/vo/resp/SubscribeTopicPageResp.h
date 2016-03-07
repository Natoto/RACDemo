//  
//  此文件请勿修改，如需扩展请在外部实现

//  
//  SubscribeTopicPageResp.h
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
//extern int const retCode_success;//0

/*  */
//extern int const retCode_success_no_data;//1

/*  */
//extern int const retCode_topic_not_found;//2

/*  */
//extern int const retCode_error;//-1

@interface SubscribeTopicPageResp : Resp

//帖子信息(必填) 
@property(nonatomic,strong) NSMutableArray* items;//存储对象：TopicItem

//返回码(必填) 
@property(nonatomic,strong) NSNumber * returnCode;

@end