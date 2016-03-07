//  
//  此文件请勿修改，如需扩展请在外部实现

//  
//  CompleteAccountInfoResp.h
//  PENG
//
//  此文件请勿修改，如需扩展请在外部实现.
//  Copyright (c) 2015年 星盛. All rights reserved.
//
//所属模块：帐号
//说明：
/******************
完善个人信息回复 
*******************/
#import <Foundation/Foundation.h>
#import "Resp.h"

/*  */
//extern int const errCode_success;//0

/*  */
//extern int const errCode_avatar_not_found;//1

/*  */
//extern int const errCode_unkown_error;//9

@interface CompleteAccountInfoResp : Resp

//错误码(必填) 
@property(nonatomic,strong) NSNumber * errCode;

@end