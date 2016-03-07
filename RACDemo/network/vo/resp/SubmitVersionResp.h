//  
//  此文件请勿修改，如需扩展请在外部实现

//  
//  SubmitVersionResp.h
//  PENG
//
//  此文件请勿修改，如需扩展请在外部实现.
//  Copyright (c) 2015年 星盛. All rights reserved.
//
//所属模块：登录
//说明：
/******************
版本检测结果，是否要进行强制更新、非强制更新，以及一些初始化的配置信息 
*******************/
#import <Foundation/Foundation.h>
#import "Resp.h"
#import "ResDefine.h"

/* 不需更新，当前为最新版本 */
//extern int const UpdateType_None;//0

/* 非强制更新，选择性更新 */
//extern int const UpdateType_Optional;//1

/* 强制更新 */
//extern int const UpdateType_Force;//2

@interface SubmitVersionResp : Resp

//更新指令，见常量定义(必填) 
@property(nonatomic,strong) NSNumber * updateType;

//更新地址，当需要更新时此属性才有意义(可选) 
@property(nonatomic,strong) NSString * updateUrl;

//初始化配置信息(必填) 
@property(nonatomic,strong) ResDefine * resDefine;

@end