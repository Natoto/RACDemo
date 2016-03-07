//  
//  此文件请勿修改，如需扩展请在外部实现

//  
//  PengActivityResp.m
//  PENG
//
//  此文件请勿修改，如需扩展请在外部实现.
//  Copyright (c) 2015年 星盛. All rights reserved.
//

#import "PengActivityResp.h"
#import "PengActivity.h"

@implementation PengActivityResp
-(id)init
{
    self = [super init];
    if (self) {
		HBOBJ_SETVALUE_FORPATH(self, @"PengActivity", @"activitys");
    }
    return self;
}
@end