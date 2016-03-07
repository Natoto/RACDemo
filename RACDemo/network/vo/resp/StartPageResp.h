//  
//  此文件请勿修改，如需扩展请在外部实现

//  
//  StartPageResp.h
//  PENG
//
//  此文件请勿修改，如需扩展请在外部实现.
//  Copyright (c) 2015年 星盛. All rights reserved.
//
//所属模块：启动页
//说明：
/******************
启动页广告列表 
*******************/
#import <Foundation/Foundation.h>
#import "Resp.h"

/*  */
//extern int const retCode_success;//1

/*  */
//extern int const retCode_success_no_data;//2

/*  */
//extern int const retCode_error;//0

@interface StartPageResp : Resp

//广告列表(必填) 
@property(nonatomic,strong) NSMutableArray* items;//存储对象：StartPageItem

//返回码(必填) 
@property(nonatomic,strong) NSNumber * retCode;

@end