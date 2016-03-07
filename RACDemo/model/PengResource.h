//
//  PengResource.h
//  PENG
//
//  Created by hb on 15/5/20.
//  Copyright (c) 2015年 pengpeng. All rights reserved.
//

#import <Foundation/Foundation.h>
/*
 :(NSString *)pengpeng
 versionName:(NSString *)versionName
 versionCode:(NSString *)versionCode
 deviceSystem:(NSString *)deviceSystem
 */
@interface PengResource : NSObject
@property(nonatomic,retain) NSString * chanel;
@property(nonatomic,retain) NSString * versionName;
@property(nonatomic,retain) NSString * versionCode;
@property(nonatomic,retain) NSString * deviceSystem;
@end
