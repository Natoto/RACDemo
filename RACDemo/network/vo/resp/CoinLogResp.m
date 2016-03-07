//  
//  此文件请勿修改，如需扩展请在外部实现

//  
//  CoinLogResp.m
//  PENG
//
//  此文件请勿修改，如需扩展请在外部实现.
//  Copyright (c) 2015年 星盛. All rights reserved.
//

#import "CoinLogResp.h"
#import "CoinLog.h"

@implementation CoinLogResp
-(id)init
{
    self = [super init];
    if (self) {
		HBOBJ_SETVALUE_FORPATH(self, @"CoinLog", @"logs");
    }
    return self;
}
@end