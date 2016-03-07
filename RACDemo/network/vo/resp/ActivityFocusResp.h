//  
//  此文件请勿修改，如需扩展请在外部实现

//  
//  ActivityFocusResp.h
//  PENG
//
//  此文件请勿修改，如需扩展请在外部实现.
//  Copyright (c) 2015年 星盛. All rights reserved.
//
//所属模块：Follow
//说明：
/******************
关注结果 
*******************/
#import <Foundation/Foundation.h>
#import "Resp.h"

/* 返回码，活动不存在，id错误 */
//extern int const RetCode_Activity_Not_Existed;//-1

/* 返回码，活动已下架 */
//extern int const RetCode_Activity_Deprecated;//-2

/* 返回码，操作成功，服务当前状态见status属性字段 */
//extern int const RetCode_Success;//0

/* 感兴趣状态，已经对此活动表示为感兴趣 */
//extern int const STATUS_FOCUZ;//0

/* 感兴趣状态，表示为不感兴趣 */
//extern int const STATUS_UNFOCUZ;//1

@interface ActivityFocusResp : Resp

//返回码(必填) 
@property(nonatomic,strong) NSNumber * retCode;

//活动id(必填) 
@property(nonatomic,strong) NSNumber * aid;

//是否为关注状态 (1:是; 0：否)(必填) 
@property(nonatomic,strong) NSNumber * status;

//是否触发WebView重刷新(1:是; 0：否)(必填) 
@property(nonatomic,strong) NSNumber * reflush;

//弹屏提示字符串，如果非空则弹出一句提示(必填) 
@property(nonatomic,strong) NSString * toast;

@end