//  
//  此文件请勿修改，如需扩展请在外部实现

//  
//  ChipsAdvertiseItem.h
//  PENG
//
//  此文件请勿修改，如需扩展请在外部实现.
//  Copyright (c) 2015年 星盛. All rights reserved.
//
//所属模块：众筹
//说明：
/******************
众筹信息（运营位） 
*******************/
#import <Foundation/Foundation.h>
#import "Resp.h"

@interface ChipsAdvertiseItem : Resp

//众筹id(必填) 
@property(nonatomic,strong) NSNumber * chipsId;

//众筹类型(1.娱乐众筹 2.粉丝应援众筹)(必填) 
@property(nonatomic,strong) NSNumber * type;

//首屏图片路径(必填) 
@property(nonatomic,strong) NSString * screenPath;

@end