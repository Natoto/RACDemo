//  
//  此文件请勿修改，如需扩展请在外部实现

//  
//  WebUserInfo.h
//  PENG
//
//  此文件请勿修改，如需扩展请在外部实现.
//  Copyright (c) 2015年 星盛. All rights reserved.
//
//所属模块：帐号
//说明：
/******************
用户信息 
*******************/
#import <Foundation/Foundation.h>
#import "Resp.h"

@interface WebUserInfo : Resp

//用户id(必填) 
@property(nonatomic,strong) NSNumber * userId;

//碰用户id(0:表示当前网站用户没有关联碰账号)(必填) 
@property(nonatomic,strong) NSNumber * pengId;

//众筹id(必填) 
@property(nonatomic,strong) NSNumber * chipsId;

//姓名(必填) 
@property(nonatomic,strong) NSString * userName;

//头像(必填) 
@property(nonatomic,strong) NSString * avatar;

//个性签名(必填) 
@property(nonatomic,strong) NSString * userSignature;

//发起人简介(必填) 
@property(nonatomic,strong) NSString * intro;

//支持金额(必填) 
@property(nonatomic,strong) NSNumber * chipsTotal;

//等级(1：皇冠 1：银 2：铜)(必填) 
@property(nonatomic,strong) NSNumber * level;

//金额(必填) 
@property(nonatomic,strong) NSNumber * amount;

//发起人封面图(必填) 
@property(nonatomic,strong) NSString * cover;

//发起方微博地址(必填) 
@property(nonatomic,strong) NSString * weibo;

//发起方客服(必填) 
@property(nonatomic,strong) NSString * customService;

//联系方式(必填) 
@property(nonatomic,strong) NSString * contact;

@end