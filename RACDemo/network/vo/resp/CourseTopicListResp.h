//  
//  此文件请勿修改，如需扩展请在外部实现

//  
//  CourseTopicListResp.h
//  PENG
//
//  此文件请勿修改，如需扩展请在外部实现.
//  Copyright (c) 2015年 星盛. All rights reserved.
//
//所属模块：历程
//说明：
/******************
历程列表 
*******************/
#import <Foundation/Foundation.h>
#import "Resp.h"
#import "CourseItem.h"

/*  */
//extern int const RetCode_Success;//1

/*  */
//extern int const RetCode_Fail;//0

/*  */
//extern int const RetCode_No_Data;//2

/*  */
//extern int const RetCode_User_Not_Existed;//3

@interface CourseTopicListResp : Resp

//返回code (1:成功; 2:成功没有数据 ;3:用户不存在;0:失败)(必填) 
@property(nonatomic,strong) NSNumber * retCode;

//历程帖子列表(必填) 
@property(nonatomic,strong) NSMutableArray* items;//存储对象：CourseTopicItem

//历程信息(必填) 
@property(nonatomic,strong) CourseItem * citem;

@end