//  
//  此文件请勿修改，如需扩展请在外部实现

//  
//  ZanUserPageResp.m
//  PENG
//
//  此文件请勿修改，如需扩展请在外部实现.
//  Copyright (c) 2015年 星盛. All rights reserved.
//

#import "ZanUserPageResp.h"
#import "ZanUserInfo.h"

//static int const ErrCode_Success = 1;
//static int const ErrorCode_Fail = -1;
//static int const ErrorCode__Success_no_data = 0;
//static int const ErrorCode_Topic_is_not_exist = -2;
@implementation ZanUserPageResp
-(id)init
{
    self = [super init];
    if (self) {
		HBOBJ_SETVALUE_FORPATH(self, @"ZanUserInfo", @"infos");
    }
    return self;
}
@end