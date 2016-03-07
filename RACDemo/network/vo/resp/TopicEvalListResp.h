//  
//  此文件请勿修改，如需扩展请在外部实现

//  
//  TopicEvalListResp.h
//  PENG
//
//  此文件请勿修改，如需扩展请在外部实现.
//  Copyright (c) 2015年 星盛. All rights reserved.
//
//所属模块：帖子
//说明：
/******************
帖子详细列表 
*******************/
#import <Foundation/Foundation.h>
#import "Resp.h"

/*  */
//extern int const ErrCode_Success;//1

/*  */
//extern int const ErrorCode_Fail;//-1

/*  */
//extern int const ErrorCode__Success_no_data;//0

/*  */
//extern int const ErrorCode_Topic_is_not_exist;//-1

@interface TopicEvalListResp : Resp

//返回码，1：成功，-1：失败 默认：-1 (必填) 
@property(nonatomic,strong) NSNumber * errorCode;

//评论列表(必填) 
@property(nonatomic,strong) NSMutableArray* evals;//存储对象：TopicevaluateItem

@end