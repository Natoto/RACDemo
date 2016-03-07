//  
//  此文件请勿修改，如需扩展请在外部实现

//  
//  ChipsItem.h
//  PENG
//
//  此文件请勿修改，如需扩展请在外部实现.
//  Copyright (c) 2015年 星盛. All rights reserved.
//
//所属模块：众筹
//说明：
/******************
众筹基本信息 
*******************/
#import <Foundation/Foundation.h>
#import "Resp.h"

/* 未启动 */
//extern int const FUNC_NO_ACTIVE;//2

/* 待预热中 */
//extern int const FUNC_NO_PRETHEATING;//3

/* 预热中 */
//extern int const FUNC_PRETHEATING;//4

/* 众筹中 */
//extern int const FUNC_CHIPSING;//0

/* 众筹成功 */
//extern int const FUNC_SUCCESS_CHIPS;//1

/* 关闭 */
//extern int const FUNC_CLOSE_CHIPS;//-1

/* 提前终止 */
//extern int const FAN_CLOSE_AHEAD;//-1

/* 代表众筹中 */
//extern int const FAN_CHIPSING;//0

/* 代表如愿达成 */
//extern int const FAN_SUCCESS;//1

@interface ChipsItem : Resp

//众筹id(必填) 
@property(nonatomic,strong) NSNumber * chipsId;

//众筹类型(1.娱乐众筹 2.粉丝应援众筹)(必填) 
@property(nonatomic,strong) NSNumber * type;

//众筹标题(必填) 
@property(nonatomic,strong) NSString * title;

//标签(必填) 
@property(nonatomic,strong) NSString * tags;

//众筹总金额(必填) 
@property(nonatomic,strong) NSNumber * chipsTotal;

//已经完成的众筹总金额(必填) 
@property(nonatomic,strong) NSNumber * finishedTotal;

//已达(必填) 
@property(nonatomic,strong) NSNumber * isFinished;

//首屏图片路径(必填) 
@property(nonatomic,strong) NSString * screenPath;

//缩略图路径(必填) 
@property(nonatomic,strong) NSString * thumbnailPath;

//内容描述(必填) 
@property(nonatomic,strong) NSString * content;

//已经参与的众筹总人数(必填) 
@property(nonatomic,strong) NSNumber * humanTotal;

//收藏(必填) 
@property(nonatomic,strong) NSNumber * favTotal;

//评价(必填) 
@property(nonatomic,strong) NSNumber * disTotal;

//赞美(必填) 
@property(nonatomic,strong) NSNumber * laudTotal;

//众筹的开始时间(必填) 
@property(nonatomic,strong) NSString * startTime;

//众筹的结束时间(必填) 
@property(nonatomic,strong) NSString * endTime;

//众筹的剩余时间(必填) 
@property(nonatomic,strong) NSNumber * remainingTime;

//创建者ID(必填) 
@property(nonatomic,strong) NSNumber * userId;

//话题微博(必填) 
@property(nonatomic,strong) NSString * weibo;

//进度状态，娱乐众筹（-1：关闭 0：众筹中 1：众筹成功 2:未启动 3:待预热中 4:预热中） 粉丝众筹（-1:提前终止；0：代表众筹中；1：代表如愿达成)）(必填) 
@property(nonatomic,strong) NSNumber * progress;

//众筹发起人头像(必填) 
@property(nonatomic,strong) NSString * avatar;

@end