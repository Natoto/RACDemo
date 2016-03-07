//  
//  此文件请勿修改，如需扩展请在外部实现

//  
//  SubscribeTopicPageResp.m
//  PENG
//
//  此文件请勿修改，如需扩展请在外部实现.
//  Copyright (c) 2015年 星盛. All rights reserved.
//

#import "SubscribeTopicPageResp.h"
#import "TopicItem.h"

//static int const retCode_success = 0;
//static int const retCode_success_no_data = 1;
//static int const retCode_topic_not_found = 2;
//static int const retCode_error = -1;
@implementation SubscribeTopicPageResp
-(id)init
{
    self = [super init];
    if (self) {
		HBOBJ_SETVALUE_FORPATH(self, @"TopicItem", @"items");
    }
    return self;
}
@end