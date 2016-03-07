//  
//  此文件请勿修改，如需扩展请在外部实现

//  
//  PengWebUserInfoResp.h
//  PENG
//
//  此文件请勿修改，如需扩展请在外部实现.
//  Copyright (c) 2015年 星盛. All rights reserved.
//
//所属模块：众筹
//说明：
/******************
碰碰网用户信息 
*******************/
#import <Foundation/Foundation.h>
#import "Resp.h"

/*  */
//extern int const ResultCode_Success;//1

/*  */
//extern int const ResultCode_Fail;//0

/*  */
//extern int const ResultCode_user_is_not_exist;//2

@interface PengWebUserInfoResp : Resp

//碰碰网用户id(必填) 
@property(nonatomic,strong) NSNumber * userId;

//用户昵称(必填) 
@property(nonatomic,strong) NSString * nickname;

//可用资金(必填) 
@property(nonatomic,strong) NSNumber * chipsFinishTotal;

//应援中的金额(必填) 
@property(nonatomic,strong) NSNumber * chipsUnFinishTotal;

//冻结金额 (必填) 
@property(nonatomic,strong) NSNumber * funBalance;

// 总资金 (必填) 
@property(nonatomic,strong) NSNumber * chipsTotal;

//返回码 (1:成功;0:失败)(必填) 
@property(nonatomic,strong) NSNumber * rtnCode;

@end