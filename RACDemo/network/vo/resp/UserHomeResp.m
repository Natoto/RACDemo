//  
//  此文件请勿修改，如需扩展请在外部实现

//  
//  UserHomeResp.m
//  PENG
//
//  此文件请勿修改，如需扩展请在外部实现.
//  Copyright (c) 2015年 星盛. All rights reserved.
//

#import "UserHomeResp.h"
#import "TagTopicItem.h"

@implementation UserHomeResp
-(id)init
{
    self = [super init];
    if (self) {
		HBOBJ_SETVALUE_FORPATH(self, @"TagTopicItem", @"topicList");
    }
    return self;
}
@end