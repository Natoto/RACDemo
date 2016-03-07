//  
//  此文件请勿修改，如需扩展请在外部实现

//  
//  TopicItem.m
//  PENG
//
//  此文件请勿修改，如需扩展请在外部实现.
//  Copyright (c) 2015年 星盛. All rights reserved.
//

#import "TopicItem.h"
#import "TopicImageRp.h"
#import "TaglibInfo.h"
#import "TopicevaluateItem.h"

@implementation TopicItem
-(id)init
{
    self = [super init];
    if (self) {
		HBOBJ_SETVALUE_FORPATH(self, @"TopicImageRp", @"imageList");
		HBOBJ_SETVALUE_FORPATH(self, @"TaglibInfo", @"tags");
		HBOBJ_SETVALUE_FORPATH(self, @"TopicevaluateItem", @"evals");
    }
    return self;
}
@end