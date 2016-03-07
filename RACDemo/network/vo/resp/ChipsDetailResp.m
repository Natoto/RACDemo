//  
//  此文件请勿修改，如需扩展请在外部实现

//  
//  ChipsDetailResp.m
//  PENG
//
//  此文件请勿修改，如需扩展请在外部实现.
//  Copyright (c) 2015年 星盛. All rights reserved.
//

#import "ChipsDetailResp.h"
#import "ChipsMusicItem.h"
#import "ChipsContentItem.h"

//static int const RetCode_Success = 1;
//static int const RetCode_Fail = 0;
//static int const RetCode_No_Data = 2;
@implementation ChipsDetailResp
-(id)init
{
    self = [super init];
    if (self) {
		HBOBJ_SETVALUE_FORPATH(self, @"ChipsMusicItem", @"chipsMusicItems");
		HBOBJ_SETVALUE_FORPATH(self, @"ChipsContentItem", @"chipsContentItems");
    }
    return self;
}
@end