//  
//  此文件请勿修改，如需扩展请在外部实现

//  
//  PiazzaReq.h
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

@interface PiazzaReq : Req

//轮播数(必填) 
@property(nonatomic,strong) NSNumber * listSize;
//类型(5:电影;6:音乐;7:活动;8:八卦;9:潮品)(必填) 
@property(nonatomic,strong) NSNumber * type;
@end