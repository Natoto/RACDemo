//  
//  此文件请勿修改，如需扩展请在外部实现

//  
//  UserFollowingResp.m
//  PENG
//
//  此文件请勿修改，如需扩展请在外部实现.
//  Copyright (c) 2015年 星盛. All rights reserved.
//

#import "UserFollowingResp.h"
#import "UserInfoFollowing.h"

@implementation UserFollowingResp
-(id)init
{
    self = [super init];
    if (self) {
		HBOBJ_SETVALUE_FORPATH(self, @"UserInfoFollowing", @"infos");
    }
    return self;
}
@end