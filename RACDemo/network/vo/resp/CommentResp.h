//  
//  此文件请勿修改，如需扩展请在外部实现

//  
//  CommentResp.h
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
#import "Resp.h"

/*  */
//extern int const retCode_success;//1

/*  */
//extern int const retCode_success_no_data;//2

/*  */
//extern int const retCode_error;//0

@interface CommentResp : Resp

//评论id(必填) 
@property(nonatomic,strong) NSNumber * cid;

//对象id(必填) 
@property(nonatomic,strong) NSNumber * oid;

//类型:(5:电影;6:音乐;7:活动;8:八卦;9:潮品)(必填) 
@property(nonatomic,strong) NSNumber * type;

//楼层(必填) 
@property(nonatomic,strong) NSNumber * floor;

//评论引用楼层(默认:不引用 -1)(必填) 
@property(nonatomic,strong) NSNumber * focusFloor;

//返回码(必填) 
@property(nonatomic,strong) NSNumber * retCode;

@end