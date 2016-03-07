//  
//  此文件请勿修改，如需扩展请在外部实现

//  
//  GiftItem.h
//  PENG
//
//  此文件请勿修改，如需扩展请在外部实现.
//  Copyright (c) 2015年 星盛. All rights reserved.
//
//所属模块：礼品
//说明：
/******************
礼品信息 
*******************/
#import <Foundation/Foundation.h>
#import "Resp.h"

@interface GiftItem : Resp

//礼品id(必填) 
@property(nonatomic,strong) NSNumber * gid;

//礼品名称(必填) 
@property(nonatomic,strong) NSString * name;

//礼品图片(必填) 
@property(nonatomic,strong) NSString * img;

//数量(必填) 
@property(nonatomic,strong) NSNumber * count;

//礼品所需金币(必填) 
@property(nonatomic,strong) NSNumber * coin;

//上线时间(必填) 
@property(nonatomic,strong) NSNumber * startTime;

//下线时间(必填) 
@property(nonatomic,strong) NSNumber * endTime;

@end