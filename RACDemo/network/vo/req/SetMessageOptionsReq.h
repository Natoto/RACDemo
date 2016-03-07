//  
//  此文件请勿修改，如需扩展请在外部实现

//  
//  SetMessageOptionsReq.h
//  PENG
//
//  此文件请勿修改，如需扩展请在外部实现.
//  Copyright (c) 2015年 星盛. All rights reserved.
//
//所属模块：用户设置
//说明：
/******************
消息设置 
*******************/
#import <Foundation/Foundation.h>
#import "Req.h"

@interface SetMessageOptionsReq : Req

//消息类型(字段名称)(必填) 
@property(nonatomic,strong) NSString * type;
//消息状态(必填) 
@property(nonatomic,strong) NSNumber * status;
//用户id(必填) 
@property(nonatomic,strong) NSNumber * userId;
@end