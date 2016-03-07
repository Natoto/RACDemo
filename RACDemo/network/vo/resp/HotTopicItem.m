//  
//  此文件请勿修改，如需扩展请在外部实现

//  
//  HotTopicItem.m
//  PENG
//
//  此文件请勿修改，如需扩展请在外部实现.
//  Copyright (c) 2015年 星盛. All rights reserved.
//

#import "HotTopicItem.h"
#import "TopicevaluateItem.h"

@implementation HotTopicItem
-(id)init
{
    self = [super init];
    if (self) {
		HBOBJ_SETVALUE_FORPATH(self, @"TopicevaluateItem", @"evals");
    }
    return self;
}
@end