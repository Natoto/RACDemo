//  
//  此文件请勿修改，如需扩展请在外部实现

//  
//  WelfareItem.h
//  PENG
//
//  此文件请勿修改，如需扩展请在外部实现.
//  Copyright (c) 2015年 星盛. All rights reserved.
//
//所属模块：福利
//说明：
/******************
福利信息 
*******************/
#import <Foundation/Foundation.h>
#import "Resp.h"

@interface WelfareItem : Resp

//wid(必填) 
@property(nonatomic,strong) NSNumber * wid;

//福利类型（1：娱乐众筹；2：粉丝应援；3：活动）(必填) 
@property(nonatomic,strong) NSNumber * type;

//图片信息(必填) 
@property(nonatomic,strong) NSString * pic;

@end