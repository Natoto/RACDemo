//  
//  此文件请勿修改，如需扩展请在外部实现

//  
//  ActorItem.h
//  PENG
//
//  此文件请勿修改，如需扩展请在外部实现.
//  Copyright (c) 2015年 星盛. All rights reserved.
//
//所属模块：艺人
//说明：
/******************
艺人信息 
*******************/
#import <Foundation/Foundation.h>
#import "Resp.h"

@interface ActorItem : Resp

//艺人aid(必填) 
@property(nonatomic,strong) NSNumber * aid;

//艺人名称 (必填) 
@property(nonatomic,strong) NSString * name;

//艺人头像 (必填) 
@property(nonatomic,strong) NSString * avatar;

//艺人类型编码(必填) 
@property(nonatomic,strong) NSNumber * type;

//艺人类型Str(必填) 
@property(nonatomic,strong) NSString * typeStr;

@end