//  
//  此文件请勿修改，如需扩展请在外部实现

//  
//  UserBlackListReq.h
//  PENG
//
//  此文件请勿修改，如需扩展请在外部实现.
//  Copyright (c) 2015年 星盛. All rights reserved.
//
//所属模块：用户
//说明：
/******************
获取用户黑名单列表 
*******************/
#import <Foundation/Foundation.h>
#import "Req.h"

@interface UserBlackListReq : Req

//当前用户(必填) 
@property(nonatomic,strong) NSNumber * userId;
@end