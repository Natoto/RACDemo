//  
//  此文件请勿修改，如需扩展请在外部实现

//  
//  PengWebLoginResp.h
//  PENG
//
//  此文件请勿修改，如需扩展请在外部实现.
//  Copyright (c) 2015年 星盛. All rights reserved.
//
//所属模块：用户
//说明：
/******************
碰碰网登陆 
*******************/
#import <Foundation/Foundation.h>
#import "Resp.h"
#import "UserInfo.h"

/*  */
//extern int const rtnCode_Error;//0

/*  */
//extern int const rtnCode_Success;//1

/*  */
//extern int const rtnCode_password_or_account_error;//2

@interface PengWebLoginResp : Resp

//返回码，0：失败; 1:成功; 2：帐号或密码不对(必填) 
@property(nonatomic,strong) NSNumber * rtnCode;

//用户信息(必填) 
@property(nonatomic,strong) UserInfo * userInfo;

@end