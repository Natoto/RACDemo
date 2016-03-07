//  
//  此文件请勿修改，如需扩展请在外部实现

//  
//  EvaluateTopicResp.h
//  PENG
//
//  此文件请勿修改，如需扩展请在外部实现.
//  Copyright (c) 2015年 星盛. All rights reserved.
//
//所属模块：帖子
//说明：
/******************
发表帖子评论结果 
*******************/
#import <Foundation/Foundation.h>
#import "Resp.h"

/*  */
//extern int const ErrCode_Success;//0

/*  */
//extern int const ErrorCode_Fail;//-1

@interface EvaluateTopicResp : Resp

//返回码，0：成功，-1：失败 默认：-1 (必填) 
@property(nonatomic,strong) NSNumber * errorCode;

//评论id(必填) 
@property(nonatomic,strong) NSNumber * tid;

//帖子id(必填) 
@property(nonatomic,strong) NSNumber * topicId;

//所在楼层(必填) 
@property(nonatomic,strong) NSNumber * floor;

//评论引用楼层(默认:不引用 -1)(必填) 
@property(nonatomic,strong) NSNumber * focusFloor;

@end