//  
//  此文件请勿修改，如需扩展请在外部实现

//  
//  FollowResp.h
//  PENG
//
//  此文件请勿修改，如需扩展请在外部实现.
//  Copyright (c) 2015年 星盛. All rights reserved.
//
//所属模块：Follow
//说明：
/******************
关注结果 
*******************/
#import <Foundation/Foundation.h>
#import "Resp.h"

/*  */
//extern int const ErrCode_Success;//1

/*  */
//extern int const ErrCode_Fail;//0

@interface FollowResp : Resp

//是否为取消关注 (1:是; 0：否)(必填) 
@property(nonatomic,strong) NSNumber * isUnFollow;

//错误码 (1:成功;0:失败)(必填) 
@property(nonatomic,strong) NSNumber * errorCode;

@end