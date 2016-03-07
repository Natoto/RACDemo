//  
//  此文件请勿修改，如需扩展请在外部实现

//  
//  DelTopicResp.h
//  PENG
//
//  此文件请勿修改，如需扩展请在外部实现.
//  Copyright (c) 2015年 星盛. All rights reserved.
//
//所属模块：结果
//说明：
/******************
操作状态返回 
*******************/
#import <Foundation/Foundation.h>
#import "Resp.h"

/* 成功 */
//extern int const RetCode_Success;//1

/* 失败,系统异常 */
//extern int const RetCode_Fail;//0

/* 失败,用户已冻结 */
//extern int const RetCode_User_Forbid;//-1

/* 失败,碰不存在或已被冻结 */
//extern int const RetCode_Topic_Not_Existed;//-2

@interface DelTopicResp : Resp

//返回code (1:成功 0:失败，系统异常 -1:失败,用户已冻结 -2:失败,碰不存在或已被冻结)(必填) 
@property(nonatomic,strong) NSNumber * retCode;

@end