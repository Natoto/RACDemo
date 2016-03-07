//  
//  此文件请勿修改，如需扩展请在外部实现

//  
//  PengWebOneKeyRegisterResp.h
//  PENG
//
//  此文件请勿修改，如需扩展请在外部实现.
//  Copyright (c) 2015年 星盛. All rights reserved.
//
//所属模块：帐号
//说明：
/******************
碰碰网一键登录结果 
*******************/
#import <Foundation/Foundation.h>
#import "Resp.h"
#import "UserInfo.h"

/* 成功 */
//extern int const ErrCode_Success;//0

/* 碰碰网暂停服务，请稍候再试 */
//extern int const ErrCode_PengWebNotOnService;//1

/* 碰碰网帐号已绑定，无需一键登录 */
//extern int const ErrCode_PengAlreadyBind;//2

/* 碰碰网帐号已绑定，无需一键登录 */
//extern int const ErrCode_OtherError;//3

@interface PengWebOneKeyRegisterResp : Resp

//错误码，0:成功 1：碰碰网暂停服务，请稍候再试 2:碰碰网帐号已经绑定，无需一键登录 3:其它异常(必填) 
@property(nonatomic,strong) NSNumber * errCode;

//错误提示 当errCode为3时，此字段有效(必填) 
@property(nonatomic,strong) NSNumber * errMsg;

//用户信息(必填) 
@property(nonatomic,strong) UserInfo * userInfo;

@end