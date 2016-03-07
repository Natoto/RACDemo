//  
//  此文件请勿修改，如需扩展请在外部实现

//  
//  BaseResp.h
//  PENG
//
//  此文件请勿修改，如需扩展请在外部实现.
//  Copyright (c) 2015年 星盛. All rights reserved.
//


#import <Foundation/Foundation.h>
#import "Resp.h"

@interface BaseResp : Resp

//返回码 默认：-1 (必填) 
@property(nonatomic,strong) NSNumber * resultCode;

@end