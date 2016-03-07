//  
//  此文件请勿修改，如需扩展请在外部实现

//  
//  MusicPageReq.h
//  PENG
//
//  此文件请勿修改，如需扩展请在外部实现.
//  Copyright (c) 2015年 星盛. All rights reserved.
//
//所属模块：音乐
//说明：
/******************
音乐列表（分页） 
*******************/
#import <Foundation/Foundation.h>
#import "Req.h"

@interface MusicPageReq : Req

//音乐类型(1:音乐;2:IN乐指数)(必填) 
@property(nonatomic,strong) NSNumber * type;
//边界值id, 默认:-1(必填) 
@property(nonatomic,strong) NSNumber * fromId;
//获取数据记录条数 默认：20(必填) 
@property(nonatomic,strong) NSNumber * size;
@end