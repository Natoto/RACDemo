//  
//  此文件请勿修改，如需扩展请在外部实现

//  
//  MainGallery.h
//  PENG
//
//  此文件请勿修改，如需扩展请在外部实现.
//  Copyright (c) 2015年 星盛. All rights reserved.
//
//所属模块：广告
//说明：
/******************
主界面的画廊，6个图片运营位 
*******************/
#import <Foundation/Foundation.h>
#import "Resp.h"

@interface MainGallery : Resp

//最大那张图片(必填) 
@property(nonatomic,strong) NSString * big;

//按顺序，第1张小图(必填) 
@property(nonatomic,strong) NSString * p1;

//按顺序，第2张小图(必填) 
@property(nonatomic,strong) NSString * p2;

//按顺序，第3张小图(必填) 
@property(nonatomic,strong) NSString * p3;

//按顺序，第4张小图(必填) 
@property(nonatomic,strong) NSString * p4;

//按顺序，第5张小图(必填) 
@property(nonatomic,strong) NSString * p5;

@end