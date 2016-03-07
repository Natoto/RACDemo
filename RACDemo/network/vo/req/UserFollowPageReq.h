//  
//  此文件请勿修改，如需扩展请在外部实现

//  
//  UserFollowPageReq.h
//  PENG
//
//  此文件请勿修改，如需扩展请在外部实现.
//  Copyright (c) 2015年 星盛. All rights reserved.
//
//所属模块：个人
//说明：
/******************
获取用户关联信息列表 
*******************/
#import <Foundation/Foundation.h>
#import "Req.h"

@interface UserFollowPageReq : Req

//当前用户(必填) 
@property(nonatomic,strong) NSNumber * userId;
//默认0(必填) 
@property(nonatomic,strong) NSNumber * fromId;
//获取数据记录条数 默认：20(必填) 
@property(nonatomic,strong) NSNumber * size;
//查询数据类型（1：关注;2：粉丝;）(必填) 
@property(nonatomic,strong) NSNumber * type;
@end