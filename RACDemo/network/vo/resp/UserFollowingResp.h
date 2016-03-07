//  
//  此文件请勿修改，如需扩展请在外部实现

//  
//  UserFollowingResp.h
//  PENG
//
//  此文件请勿修改，如需扩展请在外部实现.
//  Copyright (c) 2015年 星盛. All rights reserved.
//


#import <Foundation/Foundation.h>
#import "Resp.h"

@interface UserFollowingResp : Resp

//关注用户列表(必填) 
@property(nonatomic,strong) NSMutableArray* infos;//存储对象：UserInfoFollowing

//返回码，0：成功，-1：失败，1：无数据 默认：-1 (必填) 
@property(nonatomic,strong) NSNumber * resultCode;

@end