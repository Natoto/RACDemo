//  
//  此文件请勿修改，如需扩展请在外部实现

//  
//  GetUserInfoReq.h
//  PENG
//
//  此文件请勿修改，如需扩展请在外部实现.
//  Copyright (c) 2015年 星盛. All rights reserved.
//
//所属模块：用户
//说明：
/******************
获取用户详细信息 
*******************/
#import <Foundation/Foundation.h>
#import "Req.h"

@interface GetUserInfoReq : Req

//用户id(必填) 
@property(nonatomic,strong) NSNumber * userId;
@end