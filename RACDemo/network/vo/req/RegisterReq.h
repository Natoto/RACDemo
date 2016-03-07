//  
//  此文件请勿修改，如需扩展请在外部实现

//  
//  RegisterReq.h
//  PENG
//
//  此文件请勿修改，如需扩展请在外部实现.
//  Copyright (c) 2015年 星盛. All rights reserved.
//
//所属模块：帐号
//说明：
/******************
帐号注册 
*******************/
#import <Foundation/Foundation.h>
#import "Req.h"

@interface RegisterReq : Req

//设备唯一标识(必填) 
@property(nonatomic,strong) NSString * deviceToken;
//操作系统，android/ios 默认：ios (必填) 
@property(nonatomic,strong) NSString * deviceOS;
//渠道号 默认：pengpeng (可选) 
@property(nonatomic,strong) NSString * chanel;
//国家代号，如86表示中国(必填) (内容需转义!!) 
@property(nonatomic,strong) NSString * country;
//手机号码(必填) (内容需转义!!) 
@property(nonatomic,strong) NSString * phone;
//密码(必填) 
@property(nonatomic,strong) NSString * pasw;
@end