//  
//  此文件请勿修改，如需扩展请在外部实现

//  
//  VideoItem.h
//  PENG
//
//  此文件请勿修改，如需扩展请在外部实现.
//  Copyright (c) 2015年 星盛. All rights reserved.
//
//所属模块：帖子
//说明：
/******************
视频信息 
*******************/
#import <Foundation/Foundation.h>
#import "Resp.h"

@interface VideoItem : Resp

//vid(必填) 
@property(nonatomic,strong) NSNumber * vid;

//发布人id(必填) 
@property(nonatomic,strong) NSNumber * publisher;

//发布时间(必填) 
@property(nonatomic,strong) NSNumber * publishTime;

//视频文件大小(必填) 
@property(nonatomic,strong) NSNumber * size;

//视频封面桢(必填) 
@property(nonatomic,strong) NSString * cover;

//文件相对路径(必填) 
@property(nonatomic,strong) NSString * srvFile;

@end