//  
//  此文件请勿修改，如需扩展请在外部实现

//  
//  ChipsSponsorInfoReq.h
//  PENG
//
//  此文件请勿修改，如需扩展请在外部实现.
//  Copyright (c) 2015年 星盛. All rights reserved.
//
//所属模块：众筹
//说明：
/******************
发起人介绍 
*******************/
#import <Foundation/Foundation.h>
#import "Req.h"

@interface ChipsSponsorInfoReq : Req

//众筹id(必填) 
@property(nonatomic,strong) NSNumber * cid;
@end