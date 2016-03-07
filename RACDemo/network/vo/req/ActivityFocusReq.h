//  
//  此文件请勿修改，如需扩展请在外部实现

//  
//  ActivityFocusReq.h
//  PENG
//
//  此文件请勿修改，如需扩展请在外部实现.
//  Copyright (c) 2015年 星盛. All rights reserved.
//
//所属模块：活动
//说明：
/******************
点击某个活动的感兴趣按钮 
*******************/
#import <Foundation/Foundation.h>
#import "Req.h"

@interface ActivityFocusReq : Req

//活动id(必填) 
@property(nonatomic,strong) NSNumber * aid;
@end