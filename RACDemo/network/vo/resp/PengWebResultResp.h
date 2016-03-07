//  
//  此文件请勿修改，如需扩展请在外部实现

//  
//  PengWebResultResp.h
//  PENG
//
//  此文件请勿修改，如需扩展请在外部实现.
//  Copyright (c) 2015年 星盛. All rights reserved.
//
//所属模块：众筹
//说明：
/******************
web请求结果 
*******************/
#import <Foundation/Foundation.h>
#import "Resp.h"
#import "UserInfo.h"

@interface PengWebResultResp : Resp

//返回码（0:成功；1:失败;-1:服务异常；-2:web服务异常）(必填) 
@property(nonatomic,strong) NSNumber * errcode;

//错误描述(必填) 
@property(nonatomic,strong) NSString * errmsg;

//用户信息，含碰碰网帐号绑定信息(必填) 
@property(nonatomic,strong) UserInfo * userInfo;

@end