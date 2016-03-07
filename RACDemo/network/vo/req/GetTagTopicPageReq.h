//  
//  此文件请勿修改，如需扩展请在外部实现

//  
//  GetTagTopicPageReq.h
//  PENG
//
//  此文件请勿修改，如需扩展请在外部实现.
//  Copyright (c) 2015年 星盛. All rights reserved.
//
//所属模块：标签
//说明：
/******************
获取标签获取帖子列表(分页) 
*******************/
#import <Foundation/Foundation.h>
#import "Req.h"

@interface GetTagTopicPageReq : Req

//标签id(必填) 
@property(nonatomic,strong) NSNumber * tagId;
//边界值id, 默认:-1(必填) 
@property(nonatomic,strong) NSNumber * fromId;
//获取数据记录条数 默认：20(必填) 
@property(nonatomic,strong) NSNumber * pageSize;
@end