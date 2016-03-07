//  
//  此文件请勿修改，如需扩展请在外部实现

//  
//  FilmDetailReq.h
//  PENG
//
//  此文件请勿修改，如需扩展请在外部实现.
//  Copyright (c) 2015年 星盛. All rights reserved.
//
//所属模块：电影
//说明：
/******************
电影详细信息 
*******************/
#import <Foundation/Foundation.h>
#import "Req.h"

@interface FilmDetailReq : Req

//电影id(必填) 
@property(nonatomic,strong) NSNumber * fid;
@end