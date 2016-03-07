//  
//  此文件请勿修改，如需扩展请在外部实现

//  
//  CompleteAccountInfoReq.h
//  PENG
//
//  此文件请勿修改，如需扩展请在外部实现.
//  Copyright (c) 2015年 星盛. All rights reserved.
//
//所属模块：帐号
//说明：
/******************
完善帐号信息 
*******************/
#import <Foundation/Foundation.h>
#import "Req.h"

@interface CompleteAccountInfoReq : Req

//头像(必填) 
@property(nonatomic,strong) NSString * avatar;
//昵称(必填) 
@property(nonatomic,strong) NSString * nickname;
//性别(必填) 
@property(nonatomic,strong) NSNumber * sex;
@end