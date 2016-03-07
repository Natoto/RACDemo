//  
//  此文件请勿修改，如需扩展请在外部实现

//  
//  RelationAccountReq.h
//  PENG
//
//  此文件请勿修改，如需扩展请在外部实现.
//  Copyright (c) 2015年 星盛. All rights reserved.
//
//所属模块：用户
//说明：
/******************
账号关联 
*******************/
#import <Foundation/Foundation.h>
#import "Req.h"

@interface RelationAccountReq : Req

//用户网站账号（会员呢称/邮箱/手机号码）(必填) 
@property(nonatomic,strong) NSString * account;
//用户网站密码(必填) 
@property(nonatomic,strong) NSString * password;
//账号类型( 1：碰碰网、2：QQ、3：微博、4：微信）(必填) 
@property(nonatomic,strong) NSNumber * type;
@end