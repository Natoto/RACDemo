//  
//  此文件请勿修改，如需扩展请在外部实现

//  
//  CrowdReceiverInfoSetupResp.h
//  PENG
//
//  此文件请勿修改，如需扩展请在外部实现.
//  Copyright (c) 2015年 星盛. All rights reserved.
//
//所属模块：众筹
//说明：
/******************
设置众筹收货人信息返回 
*******************/
#import <Foundation/Foundation.h>
#import "Resp.h"

/*  */
//extern int const RtnCode_Success;//1

/*  */
//extern int const RtnCode_Fail;//0

@interface CrowdReceiverInfoSetupResp : Resp

//返回码 1:成功 0：失败，当返回为失败时，其它属性字段无效(必填) 
@property(nonatomic,strong) NSNumber * rtnCode;

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