//  
//  此文件请勿修改，如需扩展请在外部实现

//  
//  StartPageItem.h
//  PENG
//
//  此文件请勿修改，如需扩展请在外部实现.
//  Copyright (c) 2015年 星盛. All rights reserved.
//
//所属模块：启动页
//说明：
/******************
启动页广告信息 
*******************/
#import <Foundation/Foundation.h>
#import "Resp.h"

@interface StartPageItem : Resp

//对象id(必填) 
@property(nonatomic,strong) NSNumber * oid;

//类型(5:电影;6:音乐;7:活动;8:八卦;9:潮品)(必填) 
@property(nonatomic,strong) NSNumber * type;

//图片(必填) 
@property(nonatomic,strong) NSString * pic;

//外部链接(必填) 
@property(nonatomic,strong) NSString * url;

@end