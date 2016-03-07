//  
//  此文件请勿修改，如需扩展请在外部实现

//  
//  CommonError.h
//  PENG
//
//  此文件请勿修改，如需扩展请在外部实现.
//  Copyright (c) 2015年 星盛. All rights reserved.
//
//所属模块：错误
//说明：
/******************
常用的错误 
*******************/
#import <Foundation/Foundation.h>
#import "Resp.h"

/* session验证错误 */
//extern int const ErrCode_SessionForbid;//0

/* 创建用户失败 */
//extern int const ErrCode_FailCreateUser;//1

/* 未知系统异常 */
//extern int const ErrCode_UnKnownError;//2

/* 服务繁忙，请重试 */
//extern int const ErrCode_BUSY;//3

/* 已知系统异常，此时把errorMsg弹出给用户看吧 */
//extern int const ErrCode_KnownError;//4

@interface CommonError : Resp

//错误码(必填) 
@property(nonatomic,strong) NSNumber * errorCode;

//错误信息(必填) 
@property(nonatomic,strong) NSString * errorMsg;

@end