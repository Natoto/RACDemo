//  
//  此文件请勿修改，如需扩展请在外部实现

//  
//  ChipsAdvertiseResp.h
//  PENG
//
//  此文件请勿修改，如需扩展请在外部实现.
//  Copyright (c) 2015年 星盛. All rights reserved.
//
//所属模块：众筹
//说明：
/******************
众筹列表（运营位） 
*******************/
#import <Foundation/Foundation.h>
#import "Resp.h"

/* 成功 */
//extern int const RetCode_Success;//1

/* 失败 */
//extern int const RetCode_Fail;//0

/*  成功 没有数据 */
//extern int const RetCode_No_Data;//2

@interface ChipsAdvertiseResp : Resp

//众筹条目(必填) 
@property(nonatomic,strong) NSMutableArray* items;//存储对象：ChipsAdvertiseItem

//返回code (1成功 2成功没有数据 0失败)(必填) 
@property(nonatomic,strong) NSNumber * retCode;

@end