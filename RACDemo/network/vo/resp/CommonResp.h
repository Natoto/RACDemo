//  
//  此文件请勿修改，如需扩展请在外部实现

//  
//  CommonResp.h
//  PENG
//
//  此文件请勿修改，如需扩展请在外部实现.
//  Copyright (c) 2015年 星盛. All rights reserved.
//
//所属模块：错误
//说明：
/******************
通用的返回 
*******************/
#import <Foundation/Foundation.h>
#import "Resp.h"

/* session验证错误 */
//extern int const retCode_Success;//0

/* 创建用户失败 */
//extern int const retCode_Fail;//1

@interface CommonResp : Resp

//错误码(必填) 
@property(nonatomic,strong) NSNumber * retCode;

@end