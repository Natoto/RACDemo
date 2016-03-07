//  
//  此文件请勿修改，如需扩展请在外部实现

//  
//  UpdatePassWordResp.h
//  PENG
//
//  此文件请勿修改，如需扩展请在外部实现.
//  Copyright (c) 2015年 星盛. All rights reserved.
//
//所属模块：用户
//说明：
/******************
密码修改 
*******************/
#import <Foundation/Foundation.h>
#import "Resp.h"

/*  */
//extern int const ErrCode_Success;//1

/*  */
//extern int const ErrCode_Error;//0

@interface UpdatePassWordResp : Resp

//错误码，1:成功 0：错误(必填) 
@property(nonatomic,strong) NSNumber * retCode;

@end