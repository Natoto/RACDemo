//  
//  此文件请勿修改，如需扩展请在外部实现

//  
//  AccountRelationResult.h
//  PENG
//
//  此文件请勿修改，如需扩展请在外部实现.
//  Copyright (c) 2015年 星盛. All rights reserved.
//


#import <Foundation/Foundation.h>
#import "Resp.h"

/*  */
//extern int const ResultCode_Success;//1

/*  */
//extern int const ResultCode_Fail;//0

/*  */
//extern int const ResultCode_is_exist;//2

@interface AccountRelationResult : Resp

//返回码 (1:成功;0:失败)(必填) 
@property(nonatomic,strong) NSNumber * rtnCode;

@end