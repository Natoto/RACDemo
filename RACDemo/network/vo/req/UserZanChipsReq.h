//  
//  此文件请勿修改，如需扩展请在外部实现

//  
//  UserZanChipsReq.h
//  PENG
//
//  此文件请勿修改，如需扩展请在外部实现.
//  Copyright (c) 2015年 星盛. All rights reserved.
//
//所属模块：众筹
//说明：
/******************
用户关注众筹 
*******************/
#import <Foundation/Foundation.h>
#import "Req.h"

@interface UserZanChipsReq : Req

//碰用户手机号(必填) 
@property(nonatomic,strong) NSString * mobile;
//碰用户id(必填) 
@property(nonatomic,strong) NSNumber * pengId;
//众筹id(必填) 
@property(nonatomic,strong) NSNumber * chipsId;
@end