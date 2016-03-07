//  
//  此文件请勿修改，如需扩展请在外部实现

//  
//  PengLoginResp.h
//  PENG
//
//  此文件请勿修改，如需扩展请在外部实现.
//  Copyright (c) 2015年 星盛. All rights reserved.
//
//所属模块：帖子
//说明：
/******************
发表帖子评论结果 
*******************/
#import <Foundation/Foundation.h>
#import "Resp.h"
#import "UserInfo.h"
#import "MainGallery.h"
#import "UserSettingInfo.h"

/*  */
//extern int const ErrCode_Success;//0

/*  */
//extern int const ErrCode_CheckError;//1

@interface PengLoginResp : Resp

//错误码，0:成功 1：帐号或密码不对(必填) 
@property(nonatomic,strong) NSNumber * errCode;

//用户信息(必填) 
@property(nonatomic,strong) UserInfo * userInfo;

//画廊(必填) 
@property(nonatomic,strong) MainGallery * gallery;

//用户设置信息(必填) 
@property(nonatomic,strong) UserSettingInfo * userSetting;

@end