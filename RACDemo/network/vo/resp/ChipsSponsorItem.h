//  
//  此文件请勿修改，如需扩展请在外部实现

//  
//  ChipsSponsorItem.h
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

@interface ChipsSponsorItem : Resp

//id(必填) 
@property(nonatomic,strong) NSNumber * id;

//众筹id(必填) 
@property(nonatomic,strong) NSNumber * chipsId;

//发起人名称(必填) 
@property(nonatomic,strong) NSString * userName;

//发起人简介(必填) 
@property(nonatomic,strong) NSString * intro;

//发起人头像(必填) 
@property(nonatomic,strong) NSString * avatar;

//发起人封面图(必填) 
@property(nonatomic,strong) NSString * cover;

//发起方微博地址(必填) 
@property(nonatomic,strong) NSString * weibo;

//发起方客服(必填) 
@property(nonatomic,strong) NSString * customService;

//联系方式(必填) 
@property(nonatomic,strong) NSString * contact;

@end