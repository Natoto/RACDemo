//  
//  此文件请勿修改，如需扩展请在外部实现

//  
//  ChipsInfoResp.h
//  PENG
//
//  此文件请勿修改，如需扩展请在外部实现.
//  Copyright (c) 2015年 星盛. All rights reserved.
//
//所属模块：众筹
//说明：
/******************
众筹详细信息 
*******************/
#import <Foundation/Foundation.h>
#import "Resp.h"
#import "ChipsInfo.h"

/* 成功 */
//extern int const RetCode_Success;//1

/* 失败 */
//extern int const RetCode_Fail;//0

/*  成功 没有数据 */
//extern int const RetCode_No_Data;//2

@interface ChipsInfoResp : Resp

//信息(必填) 
@property(nonatomic,strong) ChipsInfo * info;

//返回code (1:成功; 2:成功没有数据 ; 0:失败)(必填) 
@property(nonatomic,strong) NSNumber * retCode;

@end