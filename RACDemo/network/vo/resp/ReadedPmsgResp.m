//  
//  此文件请勿修改，如需扩展请在外部实现

//  
//  ReadedPmsgResp.m
//  PENG
//
//  此文件请勿修改，如需扩展请在外部实现.
//  Copyright (c) 2015年 星盛. All rights reserved.
//

#import "ReadedPmsgResp.h"
#import "PmsgItem.h"

@implementation ReadedPmsgResp
-(id)init
{
    self = [super init];
    if (self) {
		HBOBJ_SETVALUE_FORPATH(self, @"PmsgItem", @"readedMsgs");
    }
    return self;
}
@end