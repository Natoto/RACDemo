//  
//  此文件请勿修改，如需扩展请在外部实现

//  
//  DelEvaluateResp.h
//  PENG
//
//  此文件请勿修改，如需扩展请在外部实现.
//  Copyright (c) 2015年 星盛. All rights reserved.
//
//所属模块：帖子
//说明：
/******************
删除评论 
*******************/
#import <Foundation/Foundation.h>
#import "Resp.h"

/*  */
//extern int const retCode_success;//1

/*  */
//extern int const retCode_fail;//0

/*  */
//extern int const retCode_data_not_found;//2

@interface DelEvaluateResp : Resp

//返回码，1：成功，0：失败(必填) 
@property(nonatomic,strong) NSNumber * code;

@end