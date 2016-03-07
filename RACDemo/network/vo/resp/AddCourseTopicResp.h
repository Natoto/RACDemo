//  
//  此文件请勿修改，如需扩展请在外部实现

//  
//  AddCourseTopicResp.h
//  PENG
//
//  此文件请勿修改，如需扩展请在外部实现.
//  Copyright (c) 2015年 星盛. All rights reserved.
//
//所属模块：历程
//说明：
/******************
历程帖子信息 
*******************/
#import <Foundation/Foundation.h>
#import "Resp.h"
#import "CourseTopicItem.h"

/* 成功 */
//extern int const RetCode_Success;//1

/* 失败 */
//extern int const RetCode_Fail;//0

/*  成功 没有数据 */
//extern int const RetCode_No_Data;//2

@interface AddCourseTopicResp : Resp

//返回code (1成功 2成功没有数据 0失败)(必填) 
@property(nonatomic,strong) NSNumber * retCode;

//历程帖子信息(必填) 
@property(nonatomic,strong) CourseTopicItem * item;

@end