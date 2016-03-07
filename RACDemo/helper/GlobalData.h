//
//  GlobleData.h
//  samurai-peng
//
//  Created by BooB on 16/3/6.
//  Copyright © 2016年 peng. All rights reserved.
//
#import "SMSLoginResp2.h"
#import <Foundation/Foundation.h>
@interface GlobalData : NSObject
+(instancetype)sharedInstance;
@property(nonatomic,retain) SMSLoginResp2 * m_loginResp;//新登陆请求
//@property(nonatomic,retain) PengLoginResp * m_loginResp;//旧登陆请求
@property(nonatomic,retain) NSString * m_relativeReqId;//a9dp8000 test1 123456
@property(nonatomic,retain) NSString * m_nickname;
@property(nonatomic,retain) NSString * m_uid;
@property(nonatomic,retain) NSString * m_mobile;
@property(nonatomic,retain) NSString * m_email;
@property(nonatomic,retain) NSString * m_CFemail;
@property(nonatomic,retain) NSString * m_sessionId;
@property(nonatomic,retain) NSString * m_password;
@property(nonatomic,retain) NSString * m_CFpassword;
@property(nonatomic,retain) NSString * m_passport;
@property(nonatomic,retain) NSString * m_deviceToken;
@property(nonatomic,retain) NSString * m_hxPasw;
//@property(nonatomic,retain) NSString * m_isBindingPeng;//是否绑定碰碰网@"1"为已绑定，@"0"为未绑定
@property(nonatomic,retain) NSString * m_pengWebUid;//碰碰网ID,不为空则为绑定，否则为没有绑定
@property(nonatomic,retain) NSString * m_pengWebNickname;//碰碰网昵称
@property(nonatomic,retain) NSString * m_pengWebAvatar;//碰碰网头像
@property(nonatomic,retain) NSString * m_pengUserAvatar;//碰用户头像

#pragma mark - 系统变量
@property(nonatomic,retain) NSString * m_PengResourceServiceDNS;
@property(nonatomic,retain) NSString * m_hostname;
@property(nonatomic,retain) NSString * m_resource_hostname;
@property(nonatomic,retain) NSString * m_picture_hostfolder;
@property(nonatomic,retain) NSString * m_isAutoSaveToLocal;//是否自动保存到本地，@"1"是，@"0"否
/**
 *  图片上传的IP和地址 如121.40.75108:9444
 */
@property(nonatomic,retain) NSString * m_videoUploadIpAndPort;
/**
 *   视频播放路径
 */
@property(nonatomic,retain) NSString * m_videoAccessUrl;
//地理位置
@property(nonatomic,retain) NSString * m_locationdesc;
@property(nonatomic,retain) NSString * m_latitude;
@property(nonatomic,retain) NSString * m_longitude;

/**
 *  四位邀请码 可以任意输入短信验证码
 */
@property(nonatomic,retain,readonly) NSString * m_invitacode;

@end


@interface NSObject(pengresource)
//peng 各种网络图片路径
/**
 *  获得众筹详情的URL
 *
 *  @param cid 众筹ID
 *
 *  @return 返回众筹详情网页URL
 */
-(NSString * )pengCFinfoUrlWithCid:(NSNumber *)cid;


/**
 *  查询服务器原图URL
 *
 *  @param imgname 服务器返回的名字
 *
 *  @return 完整的URL
 */
-(NSString *)pengResDataimageurl:(NSString *)imgname;
/**
 *  查询服务器缩略图URL
 *
 *  @param imgname 服务器返回的名字
 *
 *  @return 完整的URL
 */
-(NSString *)pengResDataThumbimageurl:(NSString *)imgname;

/**
 *  查询服务器原视频URL
 *
 *  @param imgname 服务器返回的名字
 *
 *  @return 完整的URL
 */
-(NSString *)pengVideoAccessUrl:(NSString *)videoname;

/**
 * 获取网络图片的SIZE
 * 有保留图片尺寸的imagename 会含有 _宽×高.jpg字样
 */
-(CGSize)sizeOfResDataimageurl:(NSString *)imgname;
@end
