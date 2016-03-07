//  
//  此文件请勿修改，如需扩展请在外部实现

//  
//  PiazzaItem.h
//  PENG
//
//  此文件请勿修改，如需扩展请在外部实现.
//  Copyright (c) 2015年 星盛. All rights reserved.
//
//所属模块：广场
//说明：
/******************
广场信息 
*******************/
#import <Foundation/Foundation.h>
#import "Resp.h"

@interface PiazzaItem : Resp

//对象id(必填) 
@property(nonatomic,strong) NSNumber * oid;

//名称(必填) 
@property(nonatomic,strong) NSString * name;

//类型(5:电影;6:音乐;7:活动;8:八卦;9:潮品)(必填) 
@property(nonatomic,strong) NSNumber * type;

//海报 (必填) 
@property(nonatomic,strong) NSString * img;

//简介 (必填) 
@property(nonatomic,strong) NSString * intro;

//出处，来源 (必填) 
@property(nonatomic,strong) NSString * source;

//创建时间(必填) 
@property(nonatomic,strong) NSNumber * createTime;

@end