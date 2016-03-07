//  
//  此文件请勿修改，如需扩展请在外部实现

//  
//  PengActivity.h
//  PENG
//
//  此文件请勿修改，如需扩展请在外部实现.
//  Copyright (c) 2015年 星盛. All rights reserved.
//
//所属模块：活动
//说明：
/******************
活动数据 
*******************/
#import <Foundation/Foundation.h>
#import "Resp.h"

@interface PengActivity : Resp

//活动id(必填) 
@property(nonatomic,strong) NSNumber * aid;

//活动标题(必填) 
@property(nonatomic,strong) NSString * name;

//活动地点(必填) 
@property(nonatomic,strong) NSString * place;

//活动时间(必填) 
@property(nonatomic,strong) NSString * time;

//活动海报,文件服务的相对Url(必填) 
@property(nonatomic,strong) NSString * picture;

//对应后台页面url(必填) 
@property(nonatomic,strong) NSString * web_url;

@end