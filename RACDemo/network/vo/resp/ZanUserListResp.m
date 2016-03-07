//  
//  此文件请勿修改，如需扩展请在外部实现

//  
//  ZanUserListResp.m
//  PENG
//
//  此文件请勿修改，如需扩展请在外部实现.
//  Copyright (c) 2015年 星盛. All rights reserved.
//

#import "ZanUserListResp.h"
#import "UserInfo.h"

//static int const ErrCode_Success = 1;
//static int const ErrorCode_Fail = 0;
//static int const ErrCode_No_Data = 2;
@implementation ZanUserListResp
-(id)init
{
    self = [super init];
    if (self) {
		HBOBJ_SETVALUE_FORPATH(self, @"UserInfo", @"infos");
    }
    return self;
}
@end