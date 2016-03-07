//  
//  此文件请勿修改，如需扩展请在外部实现

//  
//  HotTopicsResp.m
//  PENG
//
//  此文件请勿修改，如需扩展请在外部实现.
//  Copyright (c) 2015年 星盛. All rights reserved.
//

#import "HotTopicsResp.h"
#import "TopicItem.h"

//static int const RetCode_Success = 1;
//static int const RetCode_Fail = 0;
//static int const RetCode_No_Data = 2;
@implementation HotTopicsResp
-(id)init
{
    self = [super init];
    if (self) {
		HBOBJ_SETVALUE_FORPATH(self, @"TopicItem", @"items");
    }
    return self;
}
@end