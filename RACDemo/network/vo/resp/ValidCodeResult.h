//  
//  此文件请勿修改，如需扩展请在外部实现

//  
//  ValidCodeResult.h
//  PENG
//
//  此文件请勿修改，如需扩展请在外部实现.
//  Copyright (c) 2015年 星盛. All rights reserved.
//


#import <Foundation/Foundation.h>
#import "Resp.h"

/*  */
//extern int const ErrorCode_Success;//0

/*  */
//extern int const ErrorCode_Fail;//-1

@interface ValidCodeResult : Resp

//(必填) 
@property(nonatomic,strong) NSNumber * errorCode;

//(必填) 
@property(nonatomic,strong) NSNumber * validCode;

@end