//  
//  此文件请勿修改，如需扩展请在外部实现

//  
//  SearchResult.m
//  PENG
//
//  此文件请勿修改，如需扩展请在外部实现.
//  Copyright (c) 2015年 星盛. All rights reserved.
//

#import "SearchResult.h"
#import "TaglibInfo.h"

//static int const ErrorCode_Success = 0;
//static int const ErrorCode_Fail = -1;
@implementation SearchResult
-(id)init
{
    self = [super init];
    if (self) {
		HBOBJ_SETVALUE_FORPATH(self, @"TaglibInfo", @"list");
    }
    return self;
}
@end