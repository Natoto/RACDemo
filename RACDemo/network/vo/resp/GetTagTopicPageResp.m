//  
//  此文件请勿修改，如需扩展请在外部实现

//  
//  GetTagTopicPageResp.m
//  PENG
//
//  此文件请勿修改，如需扩展请在外部实现.
//  Copyright (c) 2015年 星盛. All rights reserved.
//

#import "GetTagTopicPageResp.h"
#import "TagTopicItem.h"

//static int const retCode_Success = 1;
//static int const retCode_Fail = 0;
//static int const retCode_No_Data = 2;
@implementation GetTagTopicPageResp
-(id)init
{
    self = [super init];
    if (self) {
		HBOBJ_SETVALUE_FORPATH(self, @"TagTopicItem", @"items");
    }
    return self;
}
@end