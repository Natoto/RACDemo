//
//  Resp.h
//  PENG
//
//  Created by mcintype ren on 15/5/16.
//  Copyright (c) 2015年 pengpeng. All rights reserved.
//
#import "HBActiveObject.h"
#import <Foundation/Foundation.h>

/*  */
//extern int const errCode_success;
//
///*  */
//extern int const errCode_avatar_not_found;
//
///*  */
//extern int const errCode_unkown_error;

//int const errCode_success = 0;
//
//int const errCode_avatar_not_found = 1;
//
//int const errCode_unkown_error = 9;


//int const ErrCode_Success = 0;
//
//int const ErrCode_CheckError = 1;
//
//int const ErrorCode_Content_Exception = -2;

@interface Resp : HBActiveObject

@property(nonatomic,strong) NSString * msgType;
//协议标识
@property(nonatomic,strong) NSString * relativeReqId;

@end
