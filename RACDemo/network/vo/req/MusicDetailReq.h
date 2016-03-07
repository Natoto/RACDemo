//  
//  此文件请勿修改，如需扩展请在外部实现

//  
//  MusicDetailReq.h
//  PENG
//
//  此文件请勿修改，如需扩展请在外部实现.
//  Copyright (c) 2015年 星盛. All rights reserved.
//
//所属模块：音乐
//说明：
/******************
音乐详细信息 
*******************/
#import <Foundation/Foundation.h>
#import "Req.h"

@interface MusicDetailReq : Req

//音乐id(必填) 
@property(nonatomic,strong) NSNumber * mid;
@end