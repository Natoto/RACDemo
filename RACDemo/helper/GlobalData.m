//
//  GlobleData.m
//  samurai-peng
//
//  Created by BooB on 16/3/6.
//  Copyright © 2016年 peng. All rights reserved.
//

#import "GlobalData.h"
#import "CacheCenter.h"

//持久化存储数据
#define GLOBAL_SET_OBJ_FORKEY(OBJ) -(void)setM_##OBJ:(NSString *)m_##OBJ\
{\
_m_##OBJ = m_##OBJ;\
{SET_OBJECT_OF_USERDEFAULT(m_##OBJ, @#OBJ);}\
[self syn:m_##OBJ];\
}

//_m_##OBJ = m_##OBJ;\
//if(_m_##OBJ)\
//{SET_OBJECT_OF_USERDEFAULT(m_##OBJ, @#OBJ);}\
//else\
//{SET_OBJECT_OF_USERDEFAULT(@"", @#OBJ);}\
//[self syn:m_##OBJ];\

//根据KEY获得持久化数据
#define GLOBAL_GET_OBJ_FORKEY(OBJ)\
-(NSString *)m_##OBJ\
{\
return _m_##OBJ = GET_OBJECT_OF_USERDEFAULT(@#OBJ);\
}

//{\
//    if (!_m_##OBJ) {\
//        _m_##OBJ = GET_OBJECT_OF_USERDEFAULT(@#OBJ);\
//    }\
//    return _m_##OBJ;\
//}


@implementation GlobalData

+(instancetype)sharedInstance {
    static GlobalData *_sharedClient = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        _sharedClient = [[GlobalData alloc] init];
    });
    return _sharedClient;
}

@synthesize m_hostname = _m_hostname;
@synthesize m_resource_hostname = _m_resource_hostname;
@synthesize m_picture_hostfolder = _m_picture_hostfolder;
@synthesize m_uid = _m_uid;
@synthesize m_nickname = _m_nickname;
@synthesize m_password = _m_password;
@synthesize m_relativeReqId = _m_relativeReqId;
@synthesize m_mobile = _m_mobile;
@synthesize m_sessionId = _m_sessionId;
@synthesize m_loginResp = _m_loginResp;
@synthesize m_invitacode = _m_invitacode;
@synthesize m_passport = _m_passport;
@synthesize m_deviceToken = _m_deviceToken;
@synthesize m_hxPasw = _m_hxPasw;
@synthesize m_CFemail = _m_CFemail;
@synthesize m_CFpassword = _m_CFpassword;
//@synthesize m_isBindingPeng = _m_isBindingPeng;
@synthesize m_pengWebUid = _m_pengWebUid;
@synthesize m_pengWebNickname = _m_pengWebNickname;
@synthesize m_pengWebAvatar = _m_pengWebAvatar;
@synthesize m_isAutoSaveToLocal = _m_isAutoSaveToLocal;
@synthesize m_videoAccessUrl = _m_videoAccessUrl;
@synthesize m_videoUploadIpAndPort = _m_videoUploadIpAndPort;


-(void)syn:(NSString *)string
{
    NSLog(@"%@",string);
}

//GLOBAL_SET_OBJ_FORKEY(isBindingPeng)
//GLOBAL_GET_OBJ_FORKEY(isBindingPeng)

GLOBAL_SET_OBJ_FORKEY(passport)
GLOBAL_GET_OBJ_FORKEY(passport)

GLOBAL_SET_OBJ_FORKEY(deviceToken)
GLOBAL_GET_OBJ_FORKEY(deviceToken)

GLOBAL_SET_OBJ_FORKEY(hxPasw)
GLOBAL_GET_OBJ_FORKEY(hxPasw)

GLOBAL_SET_OBJ_FORKEY(sessionId)
GLOBAL_GET_OBJ_FORKEY(sessionId)

GLOBAL_SET_OBJ_FORKEY(relativeReqId)
GLOBAL_GET_OBJ_FORKEY(relativeReqId)

GLOBAL_SET_OBJ_FORKEY(mobile)
GLOBAL_GET_OBJ_FORKEY(mobile)

GLOBAL_SET_OBJ_FORKEY(password)
GLOBAL_GET_OBJ_FORKEY(password)

GLOBAL_SET_OBJ_FORKEY(nickname)
GLOBAL_GET_OBJ_FORKEY(nickname)

GLOBAL_SET_OBJ_FORKEY(uid)
GLOBAL_GET_OBJ_FORKEY(uid)


GLOBAL_SET_OBJ_FORKEY(hostname)
GLOBAL_GET_OBJ_FORKEY(hostname)

GLOBAL_SET_OBJ_FORKEY(resource_hostname)
GLOBAL_GET_OBJ_FORKEY(resource_hostname)

GLOBAL_SET_OBJ_FORKEY(picture_hostfolder)
GLOBAL_GET_OBJ_FORKEY(picture_hostfolder)

GLOBAL_SET_OBJ_FORKEY(videoUploadIpAndPort)
GLOBAL_GET_OBJ_FORKEY(videoUploadIpAndPort)


GLOBAL_SET_OBJ_FORKEY(videoAccessUrl)
GLOBAL_GET_OBJ_FORKEY(videoAccessUrl)


-(void)setM_loginResp:(SMSLoginResp2 *)m_loginResp
{
    _m_loginResp = m_loginResp;
    [[CacheCenter sharedInstance] saveObject:m_loginResp forkey:@"loginresp"];
}

-(SMSLoginResp2 *)m_loginResp
{
    if (!_m_loginResp) {
        _m_loginResp = [[CacheCenter sharedInstance] readObject:@"loginresp"];
    }
    return _m_loginResp;
}

@end

@implementation NSObject(pengresource)


/**
 *  获得众筹详情的URL
 *
 *  @param cid 众筹ID
 *
 *  @return 返回众筹详情网页URL
 */
-(NSString * )pengCFinfoUrlWithCid:(NSNumber *)cid
{
    //http://ent.pengpeng.com/peng/chips/众筹id.html
    return [NSString stringWithFormat:@"http:////ent.pengpeng.com//peng//chips//%@.html",cid];
}

/**
 *  查询服务器原图URL
 *
 *  @param imgname 服务器返回的名字
 *
 *  @return 完整的URL
 */
-(NSString *)pengResDataimageurl:(NSString *)imgname
{
    NSString * string = [NSString stringWithFormat:@"%@/%@.jpg",[GlobalData sharedInstance].m_picture_hostfolder,imgname];
    string =  [string stringByAddingPercentEscapesUsingEncoding:NSUTF8StringEncoding];
    return string;
}

/**
 *  查询服务器原视频URL
 *
 *  @param imgname 服务器返回的名字
 *
 *  @return 完整的URL
 */
-(NSString *)pengVideoAccessUrl:(NSString *)videoname
{
    NSString * string = [NSString stringWithFormat:@"%@/%@",[GlobalData sharedInstance].m_videoAccessUrl,videoname];
    string =  [string stringByAddingPercentEscapesUsingEncoding:NSUTF8StringEncoding];
    return string;
}
/**
 * 获取网络图片的SIZE
 * 有保留图片尺寸的imagename 会含有 _宽 x(英文小写)高.jpg字样//注意 ×(中文的乘) X(英文的X大写)
 */
-(CGSize)sizeOfResDataimageurl:(NSString *)imgname
{
    CGSize imagesize = CGSizeZero;
    if ([imgname hasSuffix:@".jpg"]) {
        imgname = [imgname stringByReplacingOccurrencesOfString:@".jpg" withString:@""];
    }
    NSArray * compant = [imgname componentsSeparatedByString:@"_"];
    if (compant.count>=2) {
        NSString * sizestring = compant[1];
        NSLog(@"sizestring = %@",sizestring);
        NSArray * sizecompants = [sizestring componentsSeparatedByString:@"x"];
        if (sizecompants.count == 2) {
            NSString * sizewidthstring = sizecompants[0];
            NSString * sizeheightstring = sizecompants[1];
            imagesize.width = sizewidthstring.floatValue;
            imagesize.height = sizeheightstring.floatValue;
        }
    }
    return imagesize;
}
/**
 *  查询服务器缩略图URL
 *
 *  @param imgname 服务器返回的名字
 *
 *  @return 完整的URL
 */
-(NSString *)pengResDataThumbimageurl:(NSString *)imgname
{
    NSString * string = [NSString stringWithFormat:@"%@/%@_mini.jpg",[GlobalData sharedInstance].m_picture_hostfolder,imgname];
    string =  [string stringByAddingPercentEscapesUsingEncoding:NSUTF8StringEncoding];
    return string;
}


@end