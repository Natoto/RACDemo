//  
//  此文件请勿修改，如需扩展请在外部实现

//  
//  DiscoveryTopicPageResp.h
//  PENG
//
//  此文件请勿修改，如需扩展请在外部实现.
//  Copyright (c) 2015年 星盛. All rights reserved.
//
//所属模块：碰
//说明：
/******************
发现频道 
*******************/
#import <Foundation/Foundation.h>
#import "Resp.h"

/*  */
//extern int const Direction_Up;//0

/*  */
//extern int const Direction_Down;//1

@interface DiscoveryTopicPageResp : Resp

//方向，有向上及向下两方向(必填) 
@property(nonatomic,strong) NSNumber * direction;

//广告位边界值Aid，当向上拉时，边界值为客户端时间最大的广告位的Aid；向下拉时，边界值为客户端时间最小的广告位的Aid 默认：-1 (必填) 
@property(nonatomic,strong) NSNumber * fromAdvertiseId;

//碰边界值Tid,当向上拉时，边界值为客户端时间最大的碰的Tid；向下拉时，边界值为客户端时间最小的碰的Tid 默认：-1 (必填) 
@property(nonatomic,strong) NSNumber * fromTopicId;

//碰列表(必填) 
@property(nonatomic,strong) NSMutableArray* items;//存储对象：TopicItem

//广告运营位数据(必填) 
@property(nonatomic,strong) NSMutableArray* advertises;//存储对象：DiscoveryAd

@end