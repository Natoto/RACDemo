//  
//  此文件请勿修改，如需扩展请在外部实现

//  
//  PiazzaPageReq.h
//  PENG
//
//  此文件请勿修改，如需扩展请在外部实现.
//  Copyright (c) 2015年 星盛. All rights reserved.
//
//所属模块：广场
//说明：
/******************
广场列表（分页） 
*******************/
#import <Foundation/Foundation.h>
#import "Req.h"

@interface PiazzaPageReq : Req

//边界值id, 默认:-1(必填) 
@property(nonatomic,strong) NSNumber * fromId;
//类型(5:电影;6:音乐;7:活动;8:八卦;9:潮品)(必填) 
@property(nonatomic,strong) NSNumber * type;
//获取数据记录条数 默认：20(必填) 
@property(nonatomic,strong) NSNumber * size;
@end