//  
//  此文件请勿修改，如需扩展请在外部实现

//  
//  SocketBindResp.h
//  PENG
//
//  此文件请勿修改，如需扩展请在外部实现.
//  Copyright (c) 2015年 星盛. All rights reserved.
//
//所属模块：帐号
//说明：
/******************
建立Socket连接返回，如果失败的话，服务端会把连接断掉，客户端也应该断掉 
*******************/
#import <Foundation/Foundation.h>
#import "Resp.h"

/* 成功 */
//extern int const ErrorCode_Success;//0

/* 失败 */
//extern int const ErrorCode_Fail;//-1

@interface SocketBindResp : Resp

//返回码 默认：-1 (必填) 
@property(nonatomic,strong) NSNumber * errorCode;

@end