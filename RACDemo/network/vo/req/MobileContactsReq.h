//  
//  此文件请勿修改，如需扩展请在外部实现

//  
//  MobileContactsReq.h
//  PENG
//
//  此文件请勿修改，如需扩展请在外部实现.
//  Copyright (c) 2015年 星盛. All rights reserved.
//
//所属模块：用户
//说明：
/******************
获取用户联系人列表(根据手机号) 
*******************/
#import <Foundation/Foundation.h>
#import "Req.h"

@interface MobileContactsReq : Req

//电话号码(必填) 
@property(nonatomic,strong) NSMutableArray* mobileList;
@end