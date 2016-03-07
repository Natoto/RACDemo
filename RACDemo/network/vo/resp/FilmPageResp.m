//  
//  此文件请勿修改，如需扩展请在外部实现

//  
//  FilmPageResp.m
//  PENG
//
//  此文件请勿修改，如需扩展请在外部实现.
//  Copyright (c) 2015年 星盛. All rights reserved.
//

#import "FilmPageResp.h"
#import "FilmItem.h"

//static int const retCode_success = 1;
//static int const retCode_success_no_data = 2;
//static int const retCode_topic_not_found = 3;
//static int const retCode_error = 0;
@implementation FilmPageResp
-(id)init
{
    self = [super init];
    if (self) {
		HBOBJ_SETVALUE_FORPATH(self, @"FilmItem", @"list");
    }
    return self;
}
@end