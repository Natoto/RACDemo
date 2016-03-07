//  
//  此文件请勿修改，如需扩展请在外部实现

//  
//  TaglibInfo.h
//  PENG
//
//  此文件请勿修改，如需扩展请在外部实现.
//  Copyright (c) 2015年 星盛. All rights reserved.
//


#import <Foundation/Foundation.h>
#import "Resp.h"

@interface TaglibInfo : Resp

//标签id(必填) 
@property(nonatomic,strong) NSNumber * tid;

//标签标题(必填) 
@property(nonatomic,strong) NSString * title;

//图片的数量(必填) 
@property(nonatomic,strong) NSNumber * imgCnt;

//碰的数量(必填) 
@property(nonatomic,strong) NSNumber * pengCnt;

@end