//  
//  此文件请勿修改，如需扩展请在外部实现

//  
//  GetTagTopicPageResp.h
//  PENG
//
//  此文件请勿修改，如需扩展请在外部实现.
//  Copyright (c) 2015年 星盛. All rights reserved.
//
//所属模块：帖子
//说明：
/******************
标签帖子信息 
*******************/
#import <Foundation/Foundation.h>
#import "Resp.h"

/*  */
//extern int const retCode_Success;//1

/*  */
//extern int const retCode_Fail;//0

/*  */
//extern int const retCode_No_Data;//2

@interface GetTagTopicPageResp : Resp

//返回码，1：成功，0：失败,2成功 没有数据(必填) 
@property(nonatomic,strong) NSNumber * retCode;

//帖子id(必填) 
@property(nonatomic,strong) NSNumber * tid;

//标签帖子信息(必填) 
@property(nonatomic,strong) NSMutableArray* items;//存储对象：TagTopicItem

//图片总数(必填) 
@property(nonatomic,strong) NSNumber * imageTotalCnt;

//曝光数(必填) 
@property(nonatomic,strong) NSNumber * exposureCnt;

@end