//  
//  此文件请勿修改，如需扩展请在外部实现

//  
//  UserInfoReq.h
//  PENG
//
//  此文件请勿修改，如需扩展请在外部实现.
//  Copyright (c) 2015年 星盛. All rights reserved.
//
//所属模块：同步
//说明：
/******************
获取用户基本信息 
*******************/
#import <Foundation/Foundation.h>
#import "Req.h"

@interface UserInfoReq : Req

//需获取的用户的uid(必填) 
@property(nonatomic,strong) NSNumber * targetId;
@end