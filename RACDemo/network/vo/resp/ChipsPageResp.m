//  
//  此文件请勿修改，如需扩展请在外部实现

//  
//  ChipsPageResp.m
//  PENG
//
//  此文件请勿修改，如需扩展请在外部实现.
//  Copyright (c) 2015年 星盛. All rights reserved.
//

#import "ChipsPageResp.h"
#import "ChipsItem.h"

//static int const Direction_Up = 0;
//static int const Direction_Down = 1;
//static int const RetCode_Success = 1;
//static int const RetCode_Fail = 0;
//static int const RetCode_No_Data = 2;
@implementation ChipsPageResp
-(id)init
{
    self = [super init];
    if (self) {
		HBOBJ_SETVALUE_FORPATH(self, @"ChipsItem", @"items");
    }
    return self;
}
@end