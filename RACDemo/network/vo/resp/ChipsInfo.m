//  
//  此文件请勿修改，如需扩展请在外部实现

//  
//  ChipsInfo.m
//  PENG
//
//  此文件请勿修改，如需扩展请在外部实现.
//  Copyright (c) 2015年 星盛. All rights reserved.
//

#import "ChipsInfo.h"
#import "WebUserInfo.h"
#import "ChipsRepayInfo.h"

@implementation ChipsInfo
-(id)init
{
    self = [super init];
    if (self) {
		HBOBJ_SETVALUE_FORPATH(self, @"WebUserInfo", @"topList");
		HBOBJ_SETVALUE_FORPATH(self, @"ChipsRepayInfo", @"chipsRepayList");
    }
    return self;
}
@end