//  
//  此文件请勿修改，如需扩展请在外部实现

//  
//  UserChipsInfoReq.h
//  PENG
//
//  此文件请勿修改，如需扩展请在外部实现.
//  Copyright (c) 2015年 星盛. All rights reserved.
//
//所属模块：众筹
//说明：
/******************
我的众筹 
*******************/
#import <Foundation/Foundation.h>
#import "Req.h"

@interface UserChipsInfoReq : Req

//碰用户id(必填) 
@property(nonatomic,strong) NSNumber * pengId;
//碰用户id(必填) 
@property(nonatomic,strong) NSString * mobile;
@end