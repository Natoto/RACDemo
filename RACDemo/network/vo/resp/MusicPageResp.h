//  
//  此文件请勿修改，如需扩展请在外部实现

//  
//  MusicPageResp.h
//  PENG
//
//  此文件请勿修改，如需扩展请在外部实现.
//  Copyright (c) 2015年 星盛. All rights reserved.
//
//所属模块：音乐
//说明：
/******************
音乐列表（分页） 
*******************/
#import <Foundation/Foundation.h>
#import "Resp.h"

/*  */
//extern int const retCode_success;//1

/*  */
//extern int const retCode_success_no_data;//2

/*  */
//extern int const retCode_topic_not_found;//3

/*  */
//extern int const retCode_error;//0

@interface MusicPageResp : Resp

//音乐信息(必填) 
@property(nonatomic,strong) NSMutableArray* list;//存储对象：MusicItem

//返回码(必填) 
@property(nonatomic,strong) NSNumber * retCode;

//音乐类型(1:音乐;2:IN乐指数)(必填) 
@property(nonatomic,strong) NSNumber * type;

@end