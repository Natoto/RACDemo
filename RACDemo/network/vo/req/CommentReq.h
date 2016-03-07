//  
//  此文件请勿修改，如需扩展请在外部实现

//  
//  CommentReq.h
//  PENG
//
//  此文件请勿修改，如需扩展请在外部实现.
//  Copyright (c) 2015年 星盛. All rights reserved.
//
//所属模块：评论
//说明：
/******************
发表评论 
*******************/
#import <Foundation/Foundation.h>
#import "Req.h"

@interface CommentReq : Req

//对象id(必填) (内容需转义!!) 
@property(nonatomic,strong) NSNumber * oid;
//类型()(必填) (内容需转义!!) 
@property(nonatomic,strong) NSNumber * type;
//评论引用帖(评论id 默认:不引用 -1)(必填) 
@property(nonatomic,strong) NSNumber * attach;
//评论内容(必填) (内容需转义!!) 
@property(nonatomic,strong) NSString * msg;
@end