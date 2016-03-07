//  
//  此文件请勿修改，如需扩展请在外部实现

//  
//  PmsgItem.h
//  PENG
//
//  此文件请勿修改，如需扩展请在外部实现.
//  Copyright (c) 2015年 星盛. All rights reserved.
//
//所属模块：消息
//说明：
/******************
消息条目 
*******************/
#import <Foundation/Foundation.h>
#import "Resp.h"

@interface PmsgItem : Resp

//流水号(必填) 
@property(nonatomic,strong) NSNumber * pid;

//类型，0-评论消息(必填) 
@property(nonatomic,strong) NSNumber * type;

//消息对应的帖子id(必填) 
@property(nonatomic,strong) NSNumber * topicId;

//评论类型消息-对应帖子的楼层(必填) 
@property(nonatomic,strong) NSNumber * cmdFloor;

//消息-状态：0-新增 1-已删(必填) 
@property(nonatomic,strong) NSNumber * cmdStatu;

//记录最后修改时间，如果是创建则为创建时间，如果创建后删除则为删除时间(必填) 
@property(nonatomic,strong) NSNumber * modTime;

//是否已读：0-未读 1-已读 。 如果客户端反馈已读的话，这里标识为1(必填) 
@property(nonatomic,strong) NSNumber * isRead;

//碰的封面图(必填) 
@property(nonatomic,strong) NSString * topicCover;

//评论者id(必填) 
@property(nonatomic,strong) NSNumber * evaler;

//评论者昵称(必填) 
@property(nonatomic,strong) NSString * evalerNick;

//评论者的头像(必填) 
@property(nonatomic,strong) NSString * evalerPortraint;

//评论信息(必填) 
@property(nonatomic,strong) NSString * cmdMsg;

//评论为回复评论类型时，此处不为空。表示回复的评论的用户的昵称。。 -_-b 好费省喔～～(必填) 
@property(nonatomic,strong) NSString * attachUserNick;

//点赞者id(必填) 
@property(nonatomic,strong) NSNumber * zaner;

//点赞者昵称(必填) 
@property(nonatomic,strong) NSString * zanerNick;

//点赞者的头像(必填) 
@property(nonatomic,strong) NSString * zanerPortraint;

@end