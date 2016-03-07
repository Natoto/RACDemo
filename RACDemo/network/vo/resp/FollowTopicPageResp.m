//  
//  此文件请勿修改，如需扩展请在外部实现

//  
//  FollowTopicPageResp.m
//  PENG
//
//  此文件请勿修改，如需扩展请在外部实现.
//  Copyright (c) 2015年 星盛. All rights reserved.
//

#import "FollowTopicPageResp.h"
#import "TopicItem.h"

//static int const Direction_Up = 0;
//static int const Direction_Down = 1;
//static int const retCode_success = 1;
//static int const retCode_success_no_data = 2;
//static int const retCode_topic_not_found = 3;
//static int const retCode_error = 0;
@implementation FollowTopicPageResp
-(id)init
{
    self = [super init];
    if (self) {
		HBOBJ_SETVALUE_FORPATH(self, @"TopicItem", @"list");
    }
    return self;
}
@end