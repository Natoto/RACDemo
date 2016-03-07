//  
//  此文件请勿修改，如需扩展请在外部实现

//  
//  CommentPageReq.h
//  PENG
//
//  此文件请勿修改，如需扩展请在外部实现.
//  Copyright (c) 2015年 星盛. All rights reserved.
//
//所属模块：评论
//说明：
/******************
获取评论列表 
*******************/
#import <Foundation/Foundation.h>
#import "Req.h"

@interface CommentPageReq : Req

//对象id(必填) 
@property(nonatomic,strong) NSNumber * oid;
//类型:(5:电影;6:音乐;7:活动;8:八卦;9:潮品)(必填) 
@property(nonatomic,strong) NSNumber * type;
//边界值id, 默认:-1(必填) 
@property(nonatomic,strong) NSNumber * fromId;
//获取数据记录条数 默认：20(必填) 
@property(nonatomic,strong) NSNumber * pageSize;
@end