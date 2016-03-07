//  
//  此文件请勿修改，如需扩展请在外部实现

//  
//  UserChipsInfoResp.h
//  PENG
//
//  此文件请勿修改，如需扩展请在外部实现.
//  Copyright (c) 2015年 星盛. All rights reserved.
//
//所属模块：众筹
//说明：
/******************
用户众筹信息 
*******************/
#import <Foundation/Foundation.h>
#import "Resp.h"

/* 成功 */
//extern int const RetCode_Success;//1

/* 失败 */
//extern int const RetCode_Fail;//0

/*  成功 没有数据 */
//extern int const RetCode_No_Data;//2

@interface UserChipsInfoResp : Resp

//用户id(必填) 
@property(nonatomic,strong) NSNumber * userId;

//名称(必填) 
@property(nonatomic,strong) NSString * nickname;

//网站余额(必填) 
@property(nonatomic,strong) NSNumber * accountBalance;

//余额(必填) 
@property(nonatomic,strong) NSNumber * chipsTotal;

//支持项目数(必填) 
@property(nonatomic,strong) NSNumber * sponsorTotal;

//关注数(必填) 
@property(nonatomic,strong) NSNumber * favTotal;

//支持项目列表(必填) 
@property(nonatomic,strong) NSMutableArray* sponsorChipsList;//存储对象：UserChipsItem

//关注项目列表(必填) 
@property(nonatomic,strong) NSMutableArray* favChipsList;//存储对象：UserChipsItem

//返回code (1:成功; 2:成功没有数据 ; 0:失败)(必填) 
@property(nonatomic,strong) NSNumber * retCode;

@end