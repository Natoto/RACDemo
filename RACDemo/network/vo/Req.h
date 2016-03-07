//
//  Req.h
//  PENG
//
//  Created by mcintype ren on 15/5/16.
//  Copyright (c) 2015年 pengpeng. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "HBActiveObject.h"
@interface Req : HBActiveObject

//协议标识
@property(nonatomic,strong) NSString * msgType;

//sessionId
@property(nonatomic,strong) NSString * sessionId;

//用户id
@property(nonatomic,strong) NSNumber * uid;

//请求id
@property(nonatomic,strong) NSString * rid;

@end
