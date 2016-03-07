//  
//  此文件请勿修改，如需扩展请在外部实现

//  
//  HistoryPmsgResp.m
//  PENG
//
//  此文件请勿修改，如需扩展请在外部实现.
//  Copyright (c) 2015年 星盛. All rights reserved.
//

#import "HistoryPmsgResp.h"
#import "PmsgItem.h"

@implementation HistoryPmsgResp
-(id)init
{
    self = [super init];
    if (self) {
		HBOBJ_SETVALUE_FORPATH(self, @"PmsgItem", @"historyMsgs");
    }
    return self;
}
@end