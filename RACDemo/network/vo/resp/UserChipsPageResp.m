//  
//  此文件请勿修改，如需扩展请在外部实现

//  
//  UserChipsPageResp.m
//  PENG
//
//  此文件请勿修改，如需扩展请在外部实现.
//  Copyright (c) 2015年 星盛. All rights reserved.
//

#import "UserChipsPageResp.h"
#import "UserChipsItem.h"

//static int const Direction_Up = 0;
//static int const Direction_Down = 1;
//static int const RetCode_Success = 1;
//static int const RetCode_Fail = 0;
//static int const RetCode_No_Data = 2;
@implementation UserChipsPageResp
-(id)init
{
    self = [super init];
    if (self) {
		HBOBJ_SETVALUE_FORPATH(self, @"UserChipsItem", @"items");
    }
    return self;
}
@end