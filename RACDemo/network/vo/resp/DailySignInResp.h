//  
//  此文件请勿修改，如需扩展请在外部实现

//  
//  DailySignInResp.h
//  PENG
//
//  此文件请勿修改，如需扩展请在外部实现.
//  Copyright (c) 2015年 星盛. All rights reserved.
//
//所属模块：p币
//说明：
/******************
每日的签到回复 
*******************/
#import <Foundation/Foundation.h>
#import "Resp.h"
#import "PCoinDetailResp.h"

/* 成功 */
//extern int const RetCode_Success;//1

/* 失败 */
//extern int const RetCode_Fail;//0

@interface DailySignInResp : Resp

//返回码(必填) 
@property(nonatomic,strong) NSNumber * retCode;

//错误信息(必填) 
@property(nonatomic,strong) NSString * errMsg;

//签到成功后获得的金币奖励数量(必填) 
@property(nonatomic,strong) NSNumber * signAddCoin;

//金币详情(必填) 
@property(nonatomic,strong) PCoinDetailResp * pcoinDetail;

@end