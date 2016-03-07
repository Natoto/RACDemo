//  
//  此文件请勿修改，如需扩展请在外部实现

//  
//  DiscoveryTopicPageResp.m
//  PENG
//
//  此文件请勿修改，如需扩展请在外部实现.
//  Copyright (c) 2015年 星盛. All rights reserved.
//

#import "DiscoveryTopicPageResp.h"
#import "TopicItem.h"
#import "DiscoveryAd.h"

static int const Direction_Up = 0;
static int const Direction_Down = 1;
@implementation DiscoveryTopicPageResp
-(id)init
{
    self = [super init];
    if (self) {
		HBOBJ_SETVALUE_FORPATH(self, @"TopicItem", @"items");
		HBOBJ_SETVALUE_FORPATH(self, @"DiscoveryAd", @"advertises");
    }
    return self;
}
@end