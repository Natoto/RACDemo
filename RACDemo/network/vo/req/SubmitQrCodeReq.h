//  
//  此文件请勿修改，如需扩展请在外部实现

//  
//  SubmitQrCodeReq.h
//  PENG
//
//  此文件请勿修改，如需扩展请在外部实现.
//  Copyright (c) 2015年 星盛. All rights reserved.
//
//所属模块：登录
//说明：
/******************
提交二维码描述数据，用于碰碰网站登录 
*******************/
#import <Foundation/Foundation.h>
#import "Req.h"

@interface SubmitQrCodeReq : Req

//二维码内容(必填) 
@property(nonatomic,strong) NSString * qrText;
@end