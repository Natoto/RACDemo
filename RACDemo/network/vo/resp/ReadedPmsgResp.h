//  
//  此文件请勿修改，如需扩展请在外部实现

//  
//  ReadedPmsgResp.h
//  PENG
//
//  此文件请勿修改，如需扩展请在外部实现.
//  Copyright (c) 2015年 星盛. All rights reserved.
//
//所属模块：消息
//说明：
/******************
已读消息列表 
*******************/
#import <Foundation/Foundation.h>
#import "Resp.h"

@interface ReadedPmsgResp : Resp

//最后一条已读消息的id，用于分页(必填) 
@property(nonatomic,strong) NSNumber * lastId;

//最新未读消息(必填) 
@property(nonatomic,strong) NSMutableArray* readedMsgs;//存储对象：PmsgItem

//是否到达了列表尾端,0未到尾端，1已到尾端(必填) 
@property(nonatomic,strong) NSNumber * ending;

@end