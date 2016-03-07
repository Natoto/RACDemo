//  
//  此文件请勿修改，如需扩展请在外部实现

//  
//  AddBlackListReq.h
//  PENG
//
//  此文件请勿修改，如需扩展请在外部实现.
//  Copyright (c) 2015年 星盛. All rights reserved.
//
//所属模块：用户
//说明：
/******************
加入黑名单 
*******************/
#import <Foundation/Foundation.h>
#import "Req.h"

@interface AddBlackListReq : Req

//加入对象的uid(必填) 
@property(nonatomic,strong) NSNumber * targetUid;
//添加/取消黑名单 (1:加入; 2：取消)(必填) 
@property(nonatomic,strong) NSNumber * opt;
@end