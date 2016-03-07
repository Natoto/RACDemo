//  
//  此文件请勿修改，如需扩展请在外部实现

//  
//  CrowdReceiverInfoResp.h
//  PENG
//
//  此文件请勿修改，如需扩展请在外部实现.
//  Copyright (c) 2015年 星盛. All rights reserved.
//
//所属模块：众筹
//说明：
/******************
用户对应的众筹收货人信息 
*******************/
#import <Foundation/Foundation.h>
#import "Resp.h"

@interface CrowdReceiverInfoResp : Resp

//是否存在 0:不存在，1，存在；不存在时，其它属性字段无意义(必填) 
@property(nonatomic,strong) NSNumber * existed;

//所属用户id(必填) 
@property(nonatomic,strong) NSNumber * uid;

//对应的众筹平台的用户id(必填) 
@property(nonatomic,strong) NSString * pfid;

//收货人姓名(必填) 
@property(nonatomic,strong) NSString * receiverName;

//收货人手机(必填) 
@property(nonatomic,strong) NSString * receiverMobile;

//所在区域(必填) 
@property(nonatomic,strong) NSString * receiverRegion;

//详细地址(必填) 
@property(nonatomic,strong) NSString * receiverPlaceDetail;

//备注信息(必填) 
@property(nonatomic,strong) NSString * receiverMemo;

@end