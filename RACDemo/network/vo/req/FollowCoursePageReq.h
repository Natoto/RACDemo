//  
//  此文件请勿修改，如需扩展请在外部实现

//  
//  FollowCoursePageReq.h
//  PENG
//
//  此文件请勿修改，如需扩展请在外部实现.
//  Copyright (c) 2015年 星盛. All rights reserved.
//
//所属模块：碰
//说明：
/******************
请求关注频道的碰 
*******************/
#import <Foundation/Foundation.h>
#import "Req.h"

@interface FollowCoursePageReq : Req

//碰边界值Tid,当向上拉时，边界值为客户端时间最大的碰的Tid；向下拉时，边界值为客户端时间最小的碰的Tid 默认：-1 (必填) 
@property(nonatomic,strong) NSNumber * fromCourseId;
//获取数据记录条数 默认：20(必填) 
@property(nonatomic,strong) NSNumber * size;
@end