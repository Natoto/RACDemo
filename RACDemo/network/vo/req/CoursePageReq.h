//  
//  此文件请勿修改，如需扩展请在外部实现

//  
//  CoursePageReq.h
//  PENG
//
//  此文件请勿修改，如需扩展请在外部实现.
//  Copyright (c) 2015年 星盛. All rights reserved.
//
//所属模块：历程
//说明：
/******************
历程列表(分页) 
*******************/
#import <Foundation/Foundation.h>
#import "Req.h"

@interface CoursePageReq : Req

//碰边界值Tid,当向上拉时，边界值为客户端时间最大的碰的Tid；向下拉时，边界值为客户端时间最小的碰的Tid 默认：-1 (必填) 
@property(nonatomic,strong) NSNumber * fromCourseId;
//获取数据记录条数 默认：20(必填) 
@property(nonatomic,strong) NSNumber * size;
@end