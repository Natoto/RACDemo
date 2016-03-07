//  
//  此文件请勿修改，如需扩展请在外部实现

//  
//  ChipsTopicInfoReq.h
//  PENG
//
//  此文件请勿修改，如需扩展请在外部实现.
//  Copyright (c) 2015年 星盛. All rights reserved.
//
//所属模块：众筹
//说明：
/******************
众筹话题信息 
*******************/
#import <Foundation/Foundation.h>
#import "Req.h"

@interface ChipsTopicInfoReq : Req

//众筹id(必填) 
@property(nonatomic,strong) NSNumber * cid;
@end