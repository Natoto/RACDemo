//  
//  此文件请勿修改，如需扩展请在外部实现

//  
//  ChipsSponsorInfo.h
//  PENG
//
//  此文件请勿修改，如需扩展请在外部实现.
//  Copyright (c) 2015年 星盛. All rights reserved.
//
//所属模块：众筹
//说明：
/******************
众筹发起人信息 
*******************/
#import <Foundation/Foundation.h>
#import "Resp.h"
#import "WebUserInfo.h"

@interface ChipsSponsorInfo : Resp

//id(必填) 
@property(nonatomic,strong) NSNumber * id;

//众筹id(必填) 
@property(nonatomic,strong) NSNumber * chipsId;

//众筹封面图(必填) 
@property(nonatomic,strong) NSString * chipsCover;

//发起人信息(必填) 
@property(nonatomic,strong) WebUserInfo * webUserInfo;

//发起的项目(必填) 
@property(nonatomic,strong) NSMutableArray* funChipsList;//存储对象：ChipsItem

@end