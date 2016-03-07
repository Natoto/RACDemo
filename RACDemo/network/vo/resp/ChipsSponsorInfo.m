//  
//  此文件请勿修改，如需扩展请在外部实现

//  
//  ChipsSponsorInfo.m
//  PENG
//
//  此文件请勿修改，如需扩展请在外部实现.
//  Copyright (c) 2015年 星盛. All rights reserved.
//

#import "ChipsSponsorInfo.h"
#import "ChipsItem.h"

@implementation ChipsSponsorInfo
-(id)init
{
    self = [super init];
    if (self) {
		HBOBJ_SETVALUE_FORPATH(self, @"ChipsItem", @"funChipsList");
    }
    return self;
}
@end