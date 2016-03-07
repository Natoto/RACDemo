//  
//  此文件请勿修改，如需扩展请在外部实现

//  
//  UserChipsItem.h
//  PENG
//
//  此文件请勿修改，如需扩展请在外部实现.
//  Copyright (c) 2015年 星盛. All rights reserved.
//
//所属模块：众筹
//说明：
/******************
众筹基本信息 
*******************/
#import <Foundation/Foundation.h>
#import "Resp.h"

@interface UserChipsItem : Resp

//众筹id(必填) 
@property(nonatomic,strong) NSNumber * chipsId;

//众筹标题(必填) 
@property(nonatomic,strong) NSString * title;

//众筹类型（0是应援，1是娱乐众筹）(必填) 
@property(nonatomic,strong) NSNumber * type;

//缩略图路径(必填) 
@property(nonatomic,strong) NSString * thumbnailPath;

//状态(必填) 
@property(nonatomic,strong) NSNumber * status;

//状态说明(必填) 
@property(nonatomic,strong) NSString * statusName;

//众筹总金额(必填) 
@property(nonatomic,strong) NSNumber * chipsTotal;

//已经完成的众筹总金额(必填) 
@property(nonatomic,strong) NSNumber * finishedTotal;

//支持人数(必填) 
@property(nonatomic,strong) NSNumber * humanTotal;

//关注人数(必填) 
@property(nonatomic,strong) NSNumber * favTotal;

//众筹的进度百分数(必填) 
@property(nonatomic,strong) NSString * percent;

//众筹的进度 娱乐众筹（-1：关闭 0：众筹中 1：众筹成功 2:未启动 3:待预热中 4:预热中） 粉丝众筹（-1:提前终止；0：代表众筹中；1：代表如愿达成)）(必填) 
@property(nonatomic,strong) NSNumber * progress;

//剩余时间(必填) 
@property(nonatomic,strong) NSNumber * remainDays;

//我的众筹金额(必填) 
@property(nonatomic,strong) NSNumber * myChipsTotal;

//物流状态（0：未发货；1：已发货;2:已收货）(必填) 
@property(nonatomic,strong) NSNumber * deliveryStatus;

//碰服务生成的订单号(必填) 
@property(nonatomic,strong) NSString * appPengPayOrder;

//交易号(必填) 
@property(nonatomic,strong) NSString * payId;

//交易时间(必填) 
@property(nonatomic,strong) NSString * payTime;

@end