//  
//  此文件请勿修改，如需扩展请在外部实现

//  
//  FilmPageReq.h
//  PENG
//
//  此文件请勿修改，如需扩展请在外部实现.
//  Copyright (c) 2015年 星盛. All rights reserved.
//
//所属模块：电影
//说明：
/******************
电影列表（分页） 
*******************/
#import <Foundation/Foundation.h>
#import "Req.h"

@interface FilmPageReq : Req

//类型(1:正在上映;2:即将上映)(必填) 
@property(nonatomic,strong) NSNumber * type;
//边界值id, 默认:-1(必填) 
@property(nonatomic,strong) NSNumber * fromId;
//获取数据记录条数 默认：20(必填) 
@property(nonatomic,strong) NSNumber * size;
@end