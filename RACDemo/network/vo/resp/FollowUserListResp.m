//  
//  此文件请勿修改，如需扩展请在外部实现

//  
//  FollowUserListResp.m
//  PENG
//
//  此文件请勿修改，如需扩展请在外部实现.
//  Copyright (c) 2015年 星盛. All rights reserved.
//

#import "FollowUserListResp.h"
#import "UserInfo.h"

//static int const ErrCode_Success = 1;
//static int const ErrorCode_Fail = 0;
//static int const ErrCode_No_Data = 2;
@implementation FollowUserListResp
-(id)init
{
    self = [super init];
    if (self) {
		HBOBJ_SETVALUE_FORPATH(self, @"UserInfo", @"infos");
    }
    return self;
}
@end