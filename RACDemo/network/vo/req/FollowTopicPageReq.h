//  
//  此文件请勿修改，如需扩展请在外部实现

//  
//  FollowTopicPageReq.h
//  PENG
//
//  此文件请勿修改，如需扩展请在外部实现.
//  Copyright (c) 2015年 星盛. All rights reserved.
//
//所属模块：碰
//说明：
/******************
请求关注频道的碰 
*******************/
#import <Foundation/Foundation.h>
#import "Req.h"

@interface FollowTopicPageReq : Req

//碰边界值Tid,当向上拉时，边界值为客户端时间最大的碰的Tid；向下拉时，边界值为客户端时间最小的碰的Tid 默认：-1 (必填) 
@property(nonatomic,strong) NSNumber * fromTopicId;
@end