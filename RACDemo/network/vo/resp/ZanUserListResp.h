//  
//  此文件请勿修改，如需扩展请在外部实现

//  
//  ZanUserListResp.h
//  PENG
//
//  此文件请勿修改，如需扩展请在外部实现.
//  Copyright (c) 2015年 星盛. All rights reserved.
//
//所属模块：点赞
//说明：
/******************
点赞用户列表 
*******************/
#import <Foundation/Foundation.h>
#import "Resp.h"

/*  */
//extern int const ErrCode_Success;//1

/*  */
//extern int const ErrorCode_Fail;//0

/*  */
//extern int const ErrCode_No_Data;//2

@interface ZanUserListResp : Resp

//返回码，1：成功，0：失败 默认：-1 (必填) 
@property(nonatomic,strong) NSNumber * resultCode;

//帖子id(必填) 
@property(nonatomic,strong) NSNumber * topicId;

//用户列表(必填) 
@property(nonatomic,strong) NSMutableArray* infos;//存储对象：UserInfo

@end