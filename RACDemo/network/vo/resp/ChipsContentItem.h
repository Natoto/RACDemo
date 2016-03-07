//  
//  此文件请勿修改，如需扩展请在外部实现

//  
//  ChipsContentItem.h
//  PENG
//
//  此文件请勿修改，如需扩展请在外部实现.
//  Copyright (c) 2015年 星盛. All rights reserved.
//
//所属模块：众筹
//说明：
/******************
众筹图文信息 
*******************/
#import <Foundation/Foundation.h>
#import "Resp.h"

@interface ChipsContentItem : Resp

//标题(必填) 
@property(nonatomic,strong) NSString * title;

//图片(必填) 
@property(nonatomic,strong) NSString * mageUrl;

//描述(必填) 
@property(nonatomic,strong) NSString * content;

@end