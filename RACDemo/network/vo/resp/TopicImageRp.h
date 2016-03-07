//  
//  此文件请勿修改，如需扩展请在外部实现

//  
//  TopicImageRp.h
//  PENG
//
//  此文件请勿修改，如需扩展请在外部实现.
//  Copyright (c) 2015年 星盛. All rights reserved.
//


#import <Foundation/Foundation.h>
#import "Resp.h"

@interface TopicImageRp : Resp

//(必填) 
@property(nonatomic,strong) NSString * img;

//(必填) 
@property(nonatomic,strong) NSString * tips;

//(必填) 
@property(nonatomic,strong) NSString * marks;

@end