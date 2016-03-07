//  
//  此文件请勿修改，如需扩展请在外部实现

//  
//  PCoinDetailResp.h
//  PENG
//
//  此文件请勿修改，如需扩展请在外部实现.
//  Copyright (c) 2015年 星盛. All rights reserved.
//
//所属模块：p币
//说明：
/******************
p币详情请求回复 
*******************/
#import <Foundation/Foundation.h>
#import "Resp.h"

@interface PCoinDetailResp : Resp

//金币数量(必填) 
@property(nonatomic,strong) NSNumber * coin;

//连续签到的日数(必填) 
@property(nonatomic,strong) NSNumber * continuousSignInDays;

//连续签到的日数,1代表今天已经签到，0代表未签到(必填) 
@property(nonatomic,strong) NSNumber * todayIsSignIn;

//今天如果已经签到了，这个是今天签到已奖励的金币数(必填) 
@property(nonatomic,strong) NSNumber * todaySignInAddCoin;

//当前月份字符串，yyyy-MM格式，即使手机的年月时间设置不正确，也能正常显示(必填) 
@property(nonatomic,strong) NSString * monthStr;

//月签到数据，二进制表示，0代表未签到，1代码已签到(必填) 
@property(nonatomic,strong) NSString * monthlySignInData;

//当前日字符串，yyyy-MM-dd格式，即使手机的年月时间设置不正确，也能正常显示(必填) 
@property(nonatomic,strong) NSString * todayStr;

//今天通过发布碰获得的金币奖励数量(必填) 
@property(nonatomic,strong) NSNumber * todayTweetAwardCoin;

//今天通过点赞获得的金币奖励数量(必填) 
@property(nonatomic,strong) NSNumber * todayZanAwardCoin;

//今天通过评论获得的金币奖励数量(必填) 
@property(nonatomic,strong) NSNumber * todayEvalAwardCoin;

@end