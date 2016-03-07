//  
//  此文件请勿修改，如需扩展请在外部实现

//  
//  ChipsPayInfoResp.h
//  PENG
//
//  此文件请勿修改，如需扩展请在外部实现.
//  Copyright (c) 2015年 星盛. All rights reserved.
//
//所属模块：众筹
//说明：
/******************
众筹支付信息 
*******************/
#import <Foundation/Foundation.h>
#import "Resp.h"

/* 成功 */
//extern int const RetCode_Success;//1

/* 失败 */
//extern int const RetCode_Fail;//0

/*  成功 没有数据 */
//extern int const RetCode_No_Data;//2

@interface ChipsPayInfoResp : Resp

//众筹id(必填) 
@property(nonatomic,strong) NSString * chipsId;

//项目名称(必填) 
@property(nonatomic,strong) NSString * title;

//支持金额(必填) 
@property(nonatomic,strong) NSNumber * amount;

//支付时间(必填) 
@property(nonatomic,strong) NSString * payTime;

//交易号(必填) 
@property(nonatomic,strong) NSString * payOrder;

//备注(必填) 
@property(nonatomic,strong) NSString * note;

//回报内容(必填) 
@property(nonatomic,strong) NSString * repayName;

//运费(必填) 
@property(nonatomic,strong) NSNumber * carriage;

//众筹id(必填) 
@property(nonatomic,strong) NSNumber * sendTime;

//收货人姓名(必填) 
@property(nonatomic,strong) NSString * receiver;

//收货人手机号码(必填) 
@property(nonatomic,strong) NSString * contact;

//所在区域（省）(必填) 
@property(nonatomic,strong) NSString * province;

//所在区域（市）(必填) 
@property(nonatomic,strong) NSString * city;

//所在区域（区）(必填) 
@property(nonatomic,strong) NSString * area;

//所在区域（详细地址）(必填) 
@property(nonatomic,strong) NSString * address;

//返回code (1:成功; 2:成功没有数据 ; 0:失败)(必填) 
@property(nonatomic,strong) NSNumber * retCode;

@end