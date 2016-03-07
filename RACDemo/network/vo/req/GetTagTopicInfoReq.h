//  
//  此文件请勿修改，如需扩展请在外部实现

//  
//  GetTagTopicInfoReq.h
//  PENG
//
//  此文件请勿修改，如需扩展请在外部实现.
//  Copyright (c) 2015年 星盛. All rights reserved.
//
//所属模块：帖子
//说明：
/******************
获取标签获取帖子列表 
*******************/
#import <Foundation/Foundation.h>
#import "Req.h"

@interface GetTagTopicInfoReq : Req

//标签id(必填) 
@property(nonatomic,strong) NSNumber * tagId;
@end