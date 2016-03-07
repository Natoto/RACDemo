//  
//  此文件请勿修改，如需扩展请在外部实现

//  
//  HotTopicsResp.h
//  PENG
//
//  此文件请勿修改，如需扩展请在外部实现.
//  Copyright (c) 2015年 星盛. All rights reserved.
//
//所属模块：众筹
//说明：
/******************
获取众筹话题列表（分页） 
*******************/
#import <Foundation/Foundation.h>
#import "Resp.h"

/* 成功 */
//extern int const RetCode_Success;//1

/* 失败 */
//extern int const RetCode_Fail;//0

/*  成功 没有数据 */
//extern int const RetCode_No_Data;//2

@interface HotTopicsResp : Resp

//帖子列表(必填) 
@property(nonatomic,strong) NSMutableArray* items;//存储对象：TopicItem

//标签列表（字符串数组）(必填) 
@property(nonatomic,strong) NSMutableArray* keys;

//当前页码(必填) 
@property(nonatomic,strong) NSNumber * pageNo;

//分页总数(必填) 
@property(nonatomic,strong) NSNumber * totalPage;

//返回code (1:成功; 2:成功没有数据 ; 0:失败)(必填) 
@property(nonatomic,strong) NSNumber * retCode;

@end