//
//  SigninModel.m
//  samurai-peng
//
//  Created by BooB on 16/3/6.
//  Copyright © 2016年 peng. All rights reserved.
//

#import "SigninModel.h"
#import "PENGClient.h"
#import "SMSLoginReq2.h"
#import "GlobalData.h"
#import "PassportLoginReq.h"

@interface SigninModel ()
@end
@implementation SigninModel 
DEF_SINGLETON(SigninModel)
- (id)init
{
    self = [super init];
    if ( self )
    {
    }
    return self;
}

- (void)dealloc
{
}

#pragma mark -

- (void)modelLoad
{
}

- (void)modelSave
{
}

-(void)setSMSLoginResp:(SMSLoginResp2 *)resp mobile:(NSString *)mobile deviceToken:(NSString *)deviceToken
{
    if (1 == resp.rtnCode.integerValue) {
        [GlobalData sharedInstance].m_loginResp = resp;
        [GlobalData sharedInstance].m_relativeReqId = resp.relativeReqId;
        [GlobalData sharedInstance].m_mobile = mobile;
        [GlobalData sharedInstance].m_passport = resp.userInfo.passport;
        [GlobalData sharedInstance].m_deviceToken= deviceToken;
        [GlobalData sharedInstance].m_hxPasw= resp.userInfo.hxPasw;
        [GlobalData sharedInstance].m_uid = [NSString stringWithFormat:@"%@",resp.userInfo.uid];
        [GlobalData sharedInstance].m_sessionId = [NSString stringWithFormat:@"%@",resp.userInfo.sessionId];
        [GlobalData sharedInstance].m_nickname = resp.userInfo.nickname;
        if (resp.userInfo.pengWebBindInfo)
        {
            [GlobalData sharedInstance].m_pengWebUid = resp.userInfo.pengWebBindInfo.pengWebUid;
            [GlobalData sharedInstance].m_pengWebNickname = resp.userInfo.pengWebBindInfo.pengWebNickname;
            [GlobalData sharedInstance].m_pengWebAvatar = resp.userInfo.pengWebBindInfo.pengWebAvatar;
        }
        else
        {
            [GlobalData sharedInstance].m_pengWebUid = nil;
            [GlobalData sharedInstance].m_pengWebNickname = nil;
            [GlobalData sharedInstance].m_pengWebAvatar = nil;
        }
    }
}

- (void)modelClear
{
}

#pragma mark -

- (void)req_SMSLoginReq2WithPhone:(NSString *)phone password:(NSString *)password
                         response:(void (^)(SMSLoginResp2 * response))response
                     errorHandler:(void (^)(NSError * error))err
{
    PENGClient *manager = [PENGClient sharedClient];
    SMSLoginReq2 * req = [[SMSLoginReq2 alloc] init];
    req.deviceOS = @"ios";
    req.mobile = phone;
    req.deviceToken = @"pengpengDeviceToken";
    req.regCode = password;
    req.msgType = NSStringFromClass([SMSLoginReq2 class]);
    NSDictionary * dic = [req objectDictionary];
    
    [manager POST:PENGAPIBaseURLString parameters:dic success:^(AFHTTPRequestOperation *operation, id responseObject) {
        
        NSString *responsejson = [[NSString alloc] initWithData:responseObject encoding:NSUTF8StringEncoding];
        SMSLoginResp2 *resp = [[SMSLoginResp2 alloc] initWithJSONData:[responsejson dataUsingEncoding:NSUTF8StringEncoding]];
        [self setSMSLoginResp:resp mobile:phone deviceToken:@""];
        response(resp);
        NSLog(@"%@", responsejson);
    } failure:^(AFHTTPRequestOperation *operation, NSError *error) {
        err(error);
    }];
}


#pragma -mark 通行证登陆（新）
-(void)req_PassportLoginWithMobile:(NSString *)mobile
                          passport:(NSString *)passport
                          response:(void (^)(PassportLoginResp * response))response
                      errorHandler:(void (^)(NSError * error))err
{
    PassportLoginReq * req = [[PassportLoginReq alloc] init];
    req.deviceToken = @"pengpengDeviceToken";
    req.mobile = mobile;
    req.passport = passport;
    req.msgType = @"PassportLoginReq";
    NSDictionary * dic = [req objectDictionary];
    
    PENGClient *manager = [PENGClient sharedClient];
    [manager POST:PENGAPIBaseURLString parameters:dic success:^(AFHTTPRequestOperation *operation, id responseObject) {
        NSString *responsejson = [[NSString alloc] initWithData:responseObject encoding:NSUTF8StringEncoding];
          PassportLoginResp * resp =  [[PassportLoginResp alloc] initWithJSONData:[responsejson dataUsingEncoding:NSUTF8StringEncoding]];
        
        if (1 == resp.rtnCode.integerValue)
        {
            [GlobalData sharedInstance].m_loginResp.userInfo = resp.userInfo;
            [GlobalData sharedInstance].m_uid = [NSString stringWithFormat:@"%@",resp.userInfo.uid];
            [GlobalData sharedInstance].m_sessionId = [NSString stringWithFormat:@"%@",resp.userInfo.sessionId];
            [GlobalData sharedInstance].m_pengUserAvatar = [NSString stringWithFormat:@"%@",resp.userInfo.avatar];
        }
        response(resp);
    } failure:^(AFHTTPRequestOperation *operation, NSError *error) {
        err(error);
    }];
}

@end
