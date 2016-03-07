//  
//  此文件请勿修改，如需扩展请在外部实现

//  
//  ChipsInfo.h
//  PENG
//
//  此文件请勿修改，如需扩展请在外部实现.
//  Copyright (c) 2015年 星盛. All rights reserved.
//
//所属模块：众筹
//说明：
/******************
众筹详细信息 
*******************/
#import <Foundation/Foundation.h>
#import "Resp.h"
#import "ChipsItem.h"
#import "WebUserInfo.h"

@interface ChipsInfo : Resp

//基本信息(必填) 
@property(nonatomic,strong) ChipsItem * item;

//创建者信息(必填) 
@property(nonatomic,strong) WebUserInfo * webuserinfo;

//排行榜(必填) 
@property(nonatomic,strong) NSMutableArray* topList;//存储对象：WebUserInfo

//回报支持(必填) 
@property(nonatomic,strong) NSMutableArray* chipsRepayList;//存储对象：ChipsRepayInfo

//点赞(1:已赞过; 0: 未赞过回报支持)(必填) 
@property(nonatomic,strong) NSNumber * praiseChips;

//关注(1:已关注; 0:未关注)(必填) 
@property(nonatomic,strong) NSNumber * concernChips;

//支付(1:可以支付; 0:不可以支付)(必填) 
@property(nonatomic,strong) NSNumber * payStatus;

//回报支持人数(必填) 
@property(nonatomic,strong) NSNumber * chipsRepayCount;

@end