//  
//  此文件请勿修改，如需扩展请在外部实现

//  
//  EditCourseResp.h
//  PENG
//
//  此文件请勿修改，如需扩展请在外部实现.
//  Copyright (c) 2015年 星盛. All rights reserved.
//
//所属模块：历程
//说明：
/******************
编辑历程帖子 
*******************/
#import <Foundation/Foundation.h>
#import "Resp.h"

/* 发布成功 */
//extern int const ErrCode_Success;//1

/* 存在敏感字 */
//extern int const ErrCode_Content_Exception;//-1

/* 未知错误 */
//extern int const ErrCode_UNKNOWN;//-9

/* 用户信息异常（用户已冻结） */
//extern int const ErrCode_USER_Exception;//-2

@interface EditCourseResp : Resp

//错误码(必填) 
@property(nonatomic,strong) NSNumber * errorCode;

//当不成功时，这里为错误提示信息(必填) 
@property(nonatomic,strong) NSString * errorMsg;

@end