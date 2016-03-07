//  
//  此文件请勿修改，如需扩展请在外部实现

//  
//  NewsInfoReq.h
//  PENG
//
//  此文件请勿修改，如需扩展请在外部实现.
//  Copyright (c) 2015年 星盛. All rights reserved.
//
//所属模块：资讯
//说明：
/******************
资讯详细信息 
*******************/
#import <Foundation/Foundation.h>
#import "Req.h"

@interface NewsInfoReq : Req

//资讯id(必填) 
@property(nonatomic,strong) NSNumber * nid;
@end