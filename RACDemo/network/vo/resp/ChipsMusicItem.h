//  
//  此文件请勿修改，如需扩展请在外部实现

//  
//  ChipsMusicItem.h
//  PENG
//
//  此文件请勿修改，如需扩展请在外部实现.
//  Copyright (c) 2015年 星盛. All rights reserved.
//
//所属模块：众筹
//说明：
/******************
众筹音乐信息 
*******************/
#import <Foundation/Foundation.h>
#import "Resp.h"

@interface ChipsMusicItem : Resp

//歌曲名称(必填) 
@property(nonatomic,strong) NSString * title;

//音乐url(必填) 
@property(nonatomic,strong) NSString * url;

//歌手名称(必填) 
@property(nonatomic,strong) NSString * singerName;

//音乐封面图(必填) 
@property(nonatomic,strong) NSString * cover;

@end