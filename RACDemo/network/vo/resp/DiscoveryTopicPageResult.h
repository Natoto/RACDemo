//  
//  此文件请勿修改，如需扩展请在外部实现

//  
//  DiscoveryTopicPageResult.h
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

/* 成功 */
//extern int const RetCode_Success;//1

/* 失败 */
//extern int const RetCode_Fail;//0

/*  成功 没有数据 */
//extern int const RetCode_No_Data;//2

@interface DiscoveryTopicPageResult : Resp

//返回code (1成功 2成功没有数据 0失败)(必填) 
@property(nonatomic,strong) NSNumber * retCode;

//碰列表(必填) 
@property(nonatomic,strong) NSMutableArray* list;//存储对象：DiscoveryTopicItem

//边界值 为获取的最后一条数据的id(必填) 
@property(nonatomic,strong) NSNumber * lastId;

//方向，有向上及向下两方向(0:上;1:下)(必填) 
@property(nonatomic,strong) NSNumber * direction;

@end