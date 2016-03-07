//  
//  此文件请勿修改，如需扩展请在外部实现

//  
//  ContactListReq.h
//  PENG
//
//  此文件请勿修改，如需扩展请在外部实现.
//  Copyright (c) 2015年 星盛. All rights reserved.
//
//所属模块：用户
//说明：
/******************
获取用户联系人列表 
*******************/
#import <Foundation/Foundation.h>
#import "Req.h"

@interface ContactListReq : Req

//用户id(必填) 
@property(nonatomic,strong) NSMutableArray* ids;//存储对象：NSNumber
@end