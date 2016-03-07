//  
//  此文件请勿修改，如需扩展请在外部实现

//  
//  EventDetailResp.m
//  PENG
//
//  此文件请勿修改，如需扩展请在外部实现.
//  Copyright (c) 2015年 星盛. All rights reserved.
//

#import "EventDetailResp.h"
#import "ActorItem.h"
#import "ArticleItem.h"

//static int const retCode_success = 1;
//static int const retCode_success_no_data = 2;
//static int const retCode_error = 0;
@implementation EventDetailResp
-(id)init
{
    self = [super init];
    if (self) {
		HBOBJ_SETVALUE_FORPATH(self, @"ActorItem", @"actorItems");
		HBOBJ_SETVALUE_FORPATH(self, @"ArticleItem", @"articleItems");
    }
    return self;
}
@end