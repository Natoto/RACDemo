//  
//  此文件请勿修改，如需扩展请在外部实现

//  
//  UserImageReq.h
//  PENG
//
//  此文件请勿修改，如需扩展请在外部实现.
//  Copyright (c) 2015年 星盛. All rights reserved.
//
//所属模块：用户信息
//说明：
/******************
用户图片列表 
*******************/
#import <Foundation/Foundation.h>
#import "Req.h"

@interface UserImageReq : Req

//当前用户(必填) 
@property(nonatomic,strong) NSNumber * userId;
//默认0 请求id(必填) 
@property(nonatomic,strong) NSNumber * fromId;
//查询数据类型（1：图片；2:收藏；3：被赞）(必填) 
@property(nonatomic,strong) NSNumber * type;
@end