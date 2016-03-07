//  
//  此文件请勿修改，如需扩展请在外部实现

//  
//  CrowdReceiverInfoSetupReq.h
//  PENG
//
//  此文件请勿修改，如需扩展请在外部实现.
//  Copyright (c) 2015年 星盛. All rights reserved.
//
//所属模块：众筹
//说明：
/******************
设置众筹收货人信息 
*******************/
#import <Foundation/Foundation.h>
#import "Req.h"

@interface CrowdReceiverInfoSetupReq : Req

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