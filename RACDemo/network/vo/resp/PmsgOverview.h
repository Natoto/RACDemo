//  
//  此文件请勿修改，如需扩展请在外部实现

//  
//  PmsgOverview.h
//  PENG
//
//  此文件请勿修改，如需扩展请在外部实现.
//  Copyright (c) 2015年 星盛. All rights reserved.
//
//所属模块：消息
//说明：
/******************
消息概览信息 
*******************/
#import <Foundation/Foundation.h>
#import "Resp.h"
#import "PmsgItem.h"

@interface PmsgOverview : Resp

//未读消息数量(必填) 
@property(nonatomic,strong) NSNumber * unReadNum;

//最新未读消息(必填) 
@property(nonatomic,strong) PmsgItem * newlyMsg;

@end