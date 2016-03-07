//  
//  此文件请勿修改，如需扩展请在外部实现

//  
//  MainfeaturedReq.h
//  PENG
//
//  此文件请勿修改，如需扩展请在外部实现.
//  Copyright (c) 2015年 星盛. All rights reserved.
//
//所属模块：首页
//说明：
/******************
首页运营位 
*******************/
#import <Foundation/Foundation.h>
#import "Req.h"

@interface MainfeaturedReq : Req

//分类轮播 显示数据记录数(必填) 
@property(nonatomic,strong) NSNumber * listSize;
@end