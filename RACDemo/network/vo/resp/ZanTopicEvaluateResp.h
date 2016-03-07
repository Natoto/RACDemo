//  
//  此文件请勿修改，如需扩展请在外部实现

//  
//  ZanTopicEvaluateResp.h
//  PENG
//
//  此文件请勿修改，如需扩展请在外部实现.
//  Copyright (c) 2015年 星盛. All rights reserved.
//
//所属模块：帖子
//说明：
/******************
帖子评论点赞结果 
*******************/
#import <Foundation/Foundation.h>
#import "Resp.h"

/*  */
//extern int const ErrCode_Success;//0

/*  */
//extern int const ErrorCode_Fail;//-1

/*  */
//extern int const ErrCode_CheckError;//1

/*  */
//extern int const result_topic_not_existed;//2

/*  */
//extern int const result_eval_floor_not_existed;//3

/*  */
//extern int const result_sys_error;//4

/*  */
//extern int const result_zaned;//5

/*  */
//extern int const result_not_zaned;//6

@interface ZanTopicEvaluateResp : Resp

//返回码，0：成功，-1：失败 默认：-1 (必填) 
@property(nonatomic,strong) NSNumber * resultCode;

//帖子id(必填) 
@property(nonatomic,strong) NSNumber * topicId;

//楼层id(必填) 
@property(nonatomic,strong) NSNumber * floor;

//操作类型（0:ios的模式 1：帖子点赞 2：帖子消赞）(必填) 
@property(nonatomic,strong) NSNumber * action;

@end