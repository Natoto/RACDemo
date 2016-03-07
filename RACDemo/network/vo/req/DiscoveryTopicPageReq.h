//  
//  此文件请勿修改，如需扩展请在外部实现

//  
//  DiscoveryTopicPageReq.h
//  PENG
//
//  此文件请勿修改，如需扩展请在外部实现.
//  Copyright (c) 2015年 星盛. All rights reserved.
//
//所属模块：碰
//说明：
/******************
请求发现频道的碰 
*******************/
#import <Foundation/Foundation.h>
#import "Req.h"

@interface DiscoveryTopicPageReq : Req

//碰边界值Tid,当向上拉时，边界值为客户端时间最大的碰的Tid；向下拉时，边界值为客户端时间最小的碰的Tid 默认：-1 (必填) 
@property(nonatomic,strong) NSNumber * fromTopicId;
//类型（1:运营位置；2：帖子;3：历程）(必填) 
@property(nonatomic,strong) NSNumber * type;
//版本（0:旧旧版;1：旧版 2:2015-11-16新版）(必填) 
@property(nonatomic,strong) NSNumber * v;
@end