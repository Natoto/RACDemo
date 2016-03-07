//  
//  此文件请勿修改，如需扩展请在外部实现

//  
//  TweetTopicResp.h
//  PENG
//
//  此文件请勿修改，如需扩展请在外部实现.
//  Copyright (c) 2015年 星盛. All rights reserved.
//
//所属模块：碰
//说明：
/******************
发布碰结果 
*******************/
#import <Foundation/Foundation.h>
#import "Resp.h"
#import "TopicItem.h"

/* 碰发布成功 */
//extern int const ErrCode_Success;//1

/* 存在敏感字 */
//extern int const ErrCode_Content_Exception;//-1

/* 未知错误 */
//extern int const ErrCode_UNKNOWN;//-9

/* 用户信息异常（用户已冻结） */
//extern int const ErrCode_USER_Exception;//-2

/* 图片信息错误 */
//extern int const ErrCode_Img_Exception;//-3

/* 视频信息错误 */
//extern int const ErrCode_Video_Exception;//-4

@interface TweetTopicResp : Resp

//错误码(必填) 
@property(nonatomic,strong) NSNumber * errorCode;

//当不成功时，这里为错误提示信息(必填) 
@property(nonatomic,strong) NSString * errorMsg;

//服务返回的具体碰数据，以服务返回的为准(必填) 
@property(nonatomic,strong) TopicItem * item;

@end