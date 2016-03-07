//  
//  此文件请勿修改，如需扩展请在外部实现

//  
//  QueryTagLibResp.m
//  PENG
//
//  此文件请勿修改，如需扩展请在外部实现.
//  Copyright (c) 2015年 星盛. All rights reserved.
//

#import "QueryTagLibResp.h"
#import "TaglibInfo.h"

@implementation QueryTagLibResp
-(id)init
{
    self = [super init];
    if (self) {
		HBOBJ_SETVALUE_FORPATH(self, @"TaglibInfo", @"infos");
    }
    return self;
}
@end