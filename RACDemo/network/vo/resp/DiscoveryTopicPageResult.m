//  
//  此文件请勿修改，如需扩展请在外部实现

//  
//  DiscoveryTopicPageResult.m
//  PENG
//
//  此文件请勿修改，如需扩展请在外部实现.
//  Copyright (c) 2015年 星盛. All rights reserved.
//

#import "DiscoveryTopicPageResult.h"
#import "DiscoveryTopicItem.h"

//static int const Direction_Up = 0;
//static int const Direction_Down = 1;
//static int const RetCode_Success = 1;
//static int const RetCode_Fail = 0;
//static int const RetCode_No_Data = 2;
@implementation DiscoveryTopicPageResult
-(id)init
{
    self = [super init];
    if (self) {
		HBOBJ_SETVALUE_FORPATH(self, @"DiscoveryTopicItem", @"list");
    }
    return self;
}
@end