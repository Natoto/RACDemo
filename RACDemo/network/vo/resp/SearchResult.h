//  
//  此文件请勿修改，如需扩展请在外部实现

//  
//  SearchResult.h
//  PENG
//
//  此文件请勿修改，如需扩展请在外部实现.
//  Copyright (c) 2015年 星盛. All rights reserved.
//
//所属模块：标签
//说明：
/******************
标签搜索 
*******************/
#import <Foundation/Foundation.h>
#import "Resp.h"

/*  */
//extern int const ErrorCode_Success;//0

/*  */
//extern int const ErrorCode_Fail;//-1

@interface SearchResult : Resp

//返回码(必填) 
@property(nonatomic,strong) NSNumber * errorCode;

//标签信息(必填) 
@property(nonatomic,strong) NSMutableArray* list;//存储对象：TaglibInfo

@end