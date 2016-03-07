//  
//  此文件请勿修改，如需扩展请在外部实现

//  
//  MainfeaturedResp.m
//  PENG
//
//  此文件请勿修改，如需扩展请在外部实现.
//  Copyright (c) 2015年 星盛. All rights reserved.
//

#import "MainfeaturedResp.h"
#import "MainfeaturedItem.h"
#import "MainfeaturedItem.h"
#import "MainfeaturedItem.h"
#import "MainfeaturedItem.h"
#import "MainfeaturedItem.h"

//static int const Direction_Up = 0;
//static int const Direction_Down = 1;
//static int const retCode_success = 1;
//static int const retCode_success_no_data = 2;
//static int const retCode_topic_not_found = 3;
//static int const retCode_error = 0;
@implementation MainfeaturedResp
-(id)init
{
    self = [super init];
    if (self) {
		HBOBJ_SETVALUE_FORPATH(self, @"MainfeaturedItem", @"topList");
		HBOBJ_SETVALUE_FORPATH(self, @"MainfeaturedItem", @"filmList");
		HBOBJ_SETVALUE_FORPATH(self, @"MainfeaturedItem", @"musicList");
		HBOBJ_SETVALUE_FORPATH(self, @"MainfeaturedItem", @"eventList");
		HBOBJ_SETVALUE_FORPATH(self, @"MainfeaturedItem", @"courseList");
    }
    return self;
}
@end