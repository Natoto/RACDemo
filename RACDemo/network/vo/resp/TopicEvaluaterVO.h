//  
//  此文件请勿修改，如需扩展请在外部实现

//  
//  TopicEvaluaterVO.h
//  PENG
//
//  此文件请勿修改，如需扩展请在外部实现.
//  Copyright (c) 2015年 星盛. All rights reserved.
//


#import <Foundation/Foundation.h>
#import "Resp.h"

@interface TopicEvaluaterVO : Resp

//(必填) 
@property(nonatomic,strong) NSNumber * floor;

//(必填) 
@property(nonatomic,strong) NSString * portrait;

//(必填) 
@property(nonatomic,strong) NSString * username;

//(必填) 
@property(nonatomic,strong) NSNumber * userVipLevel;

//(必填) 
@property(nonatomic,strong) NSString * nick;

//(必填) 
@property(nonatomic,strong) NSNumber * attachFloor;

//(必填) 
@property(nonatomic,strong) NSString * attachEvaluate;

//(必填) 
@property(nonatomic,strong) NSNumber * zanCnt;

//(必填) 
@property(nonatomic,strong) NSString * msg;

//(必填) 
@property(nonatomic,strong) NSNumber * evalTime;

@end