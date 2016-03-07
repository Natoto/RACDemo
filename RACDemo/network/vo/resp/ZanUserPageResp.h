//  
//  此文件请勿修改，如需扩展请在外部实现

//  
//  ZanUserPageResp.h
//  PENG
//
//  此文件请勿修改，如需扩展请在外部实现.
//  Copyright (c) 2015年 星盛. All rights reserved.
//
//所属模块：帖子
//说明：
/******************
帖子点赞用户列表（分页） 
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
//extern int const ErrorCode_Topic_is_not_exist;//-2

@interface ZanUserPageResp : Resp

//返回码，1：成功，0：失败 默认：-1 (必填) 
@property(nonatomic,strong) NSNumber * resultCode;

//赞总数 (必填) 
@property(nonatomic,strong) NSNumber * zanCnt;

//帖子id(必填) 
@property(nonatomic,strong) NSNumber * topicId;

//点赞用户列表(必填) 
@property(nonatomic,strong) NSMutableArray* infos;//存储对象：ZanUserInfo

@end