//  
//  此文件请勿修改，如需扩展请在外部实现

//  
//  DelCourseReq.h
//  PENG
//
//  此文件请勿修改，如需扩展请在外部实现.
//  Copyright (c) 2015年 星盛. All rights reserved.
//
//所属模块：历程
//说明：
/******************
删除历程 
*******************/
#import <Foundation/Foundation.h>
#import "Req.h"

@interface DelCourseReq : Req

//历程id(必填) 
@property(nonatomic,strong) NSNumber * courseId;
@end