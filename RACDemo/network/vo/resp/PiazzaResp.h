//  
//  此文件请勿修改，如需扩展请在外部实现

//  
//  PiazzaResp.h
//  PENG
//
//  此文件请勿修改，如需扩展请在外部实现.
//  Copyright (c) 2015年 星盛. All rights reserved.
//
//所属模块：首页运营位
//说明：
/******************
首页运营位 
*******************/
#import <Foundation/Foundation.h>
#import "Resp.h"

/*  */
//extern int const Direction_Up;//0

/*  */
//extern int const Direction_Down;//1

/*  */
//extern int const retCode_success;//1

/*  */
//extern int const retCode_success_no_data;//2

/*  */
//extern int const retCode_topic_not_found;//3

/*  */
//extern int const retCode_error;//0

@interface PiazzaResp : Resp

//焦点轮播(必填) 
@property(nonatomic,strong) NSMutableArray* topList;//存储对象：MainfeaturedItem

//分页列表 默认20条(必填) 
@property(nonatomic,strong) NSMutableArray* pageList;//存储对象：PiazzaItem

//返回码(必填) 
@property(nonatomic,strong) NSNumber * retCode;

@end