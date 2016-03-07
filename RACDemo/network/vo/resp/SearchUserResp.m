//  
//  此文件请勿修改，如需扩展请在外部实现

//  
//  SearchUserResp.m
//  PENG
//
//  此文件请勿修改，如需扩展请在外部实现.
//  Copyright (c) 2015年 星盛. All rights reserved.
//

#import "SearchUserResp.h"
#import "UserInfo.h"

@implementation SearchUserResp
-(id)init
{
    self = [super init];
    if (self) {
		HBOBJ_SETVALUE_FORPATH(self, @"UserInfo", @"infos");
    }
    return self;
}
@end