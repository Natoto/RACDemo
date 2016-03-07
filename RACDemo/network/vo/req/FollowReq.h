//  
//  此文件请勿修改，如需扩展请在外部实现

//  
//  FollowReq.h
//  PENG
//
//  此文件请勿修改，如需扩展请在外部实现.
//  Copyright (c) 2015年 星盛. All rights reserved.
//
//所属模块：关注
//说明：
/******************
关注某个用户 
*******************/
#import <Foundation/Foundation.h>
#import "Req.h"

@interface FollowReq : Req

//关注对象的uid(必填) 
@property(nonatomic,strong) NSNumber * targetUid;
//是否为取消关注 (1:是; 0：否)(必填) 
@property(nonatomic,strong) NSNumber * isUnFollow;
@end