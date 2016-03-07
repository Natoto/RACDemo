//  
//  此文件请勿修改，如需扩展请在外部实现

//  
//  UserSettingInfo.h
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

@interface UserSettingInfo : Resp

//用户id(必填) 
@property(nonatomic,strong) NSNumber * userId;

//被关注消息(必填) 
@property(nonatomic,strong) NSNumber * attentionedMsg;

//被评论消息(必填) 
@property(nonatomic,strong) NSNumber * commentedMsg;

//被戳消息推送(必填) 
@property(nonatomic,strong) NSNumber * atedPush;

//系统推送(必填) 
@property(nonatomic,strong) NSNumber * systemPush;

@end