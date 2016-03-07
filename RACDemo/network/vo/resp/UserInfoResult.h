//  
//  此文件请勿修改，如需扩展请在外部实现

//  
//  UserInfoResult.h
//  PENG
//
//  此文件请勿修改，如需扩展请在外部实现.
//  Copyright (c) 2015年 星盛. All rights reserved.
//


#import <Foundation/Foundation.h>
#import "Resp.h"
#import "UserInfo.h"

/*  */
//extern int const result_Success;//1

/*  */
//extern int const result_Fail;//0

/*  */
//extern int const result_user_not_existed;//2

@interface UserInfoResult : Resp

//(必填) 
@property(nonatomic,strong) NSNumber * retCode;

//(必填) 
@property(nonatomic,strong) UserInfo * info;

@end