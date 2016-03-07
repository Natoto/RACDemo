//  
//  此文件请勿修改，如需扩展请在外部实现

//  
//  MainfeaturedItem.h
//  PENG
//
//  此文件请勿修改，如需扩展请在外部实现.
//  Copyright (c) 2015年 星盛. All rights reserved.
//
//所属模块：首页运营位
//说明：
/******************
首页运营位 
*******************/
#import <Foundation/Foundation.h>
#import "Resp.h"

@interface MainfeaturedItem : Resp

//id(必填) 
@property(nonatomic,strong) NSNumber * mid;

//对象id(相关类型对应id) (必填) 
@property(nonatomic,strong) NSNumber * oid;

//图片 (必填) 
@property(nonatomic,strong) NSString * pic;

//类型:(1:PENG;2:历程;3:娱乐众筹;4:粉丝应援;5:电影;6:音乐;7:活动;8:八卦;9:潮品) (必填) 
@property(nonatomic,strong) NSNumber * type;

//位置类型（1:焦点轮播；2：分类轮播） (必填) 
@property(nonatomic,strong) NSNumber * ptype;

@end