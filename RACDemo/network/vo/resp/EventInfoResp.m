//  
//  此文件请勿修改，如需扩展请在外部实现

//  
//  EventInfoResp.m
//  PENG
//
//  此文件请勿修改，如需扩展请在外部实现.
//  Copyright (c) 2015年 星盛. All rights reserved.
//

#import "EventInfoResp.h"
#import "WelfareItem.h"

//static int const retCode_success = 1;
//static int const retCode_success_no_data = 2;
//static int const retCode_error = 0;
@implementation EventInfoResp
-(id)init
{
    self = [super init];
    if (self) {
		HBOBJ_SETVALUE_FORPATH(self, @"WelfareItem", @"wList");
    }
    return self;
}
@end