//
//     ____    _                        __     _      _____
//    / ___\  /_\     /\/\    /\ /\    /__\   /_\     \_   \
//    \ \    //_\\   /    \  / / \ \  / \//  //_\\     / /\/
//  /\_\ \  /  _  \ / /\/\ \ \ \_/ / / _  \ /  _  \ /\/ /_
//  \____/  \_/ \_/ \/    \/  \___/  \/ \_/ \_/ \_/ \____/
//
//	Copyright Samurai development team and other contributors
//
//	http://www.samurai-framework.com
//
//	Permission is hereby granted, free of charge, to any person obtaining a copy
//	of this software and associated documentation files (the "Software"), to deal
//	in the Software without restriction, including without limitation the rights
//	to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
//	copies of the Software, and to permit persons to whom the Software is
//	furnished to do so, subject to the following conditions:
//
//	The above copyright notice and this permission notice shall be included in
//	all copies or substantial portions of the Software.
//
//	THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
//	IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
//	FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
//	AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
//	LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
//	OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
//	THE SOFTWARE.
//

#import "PengResource.h"
#import "PENGClient.h"
//#import "NSDate+Extension.h"
#import "GlobalData.h"

//static NSString * const DribbbleAuthURLString = @"https://dribbble.com/oauth/";
//static NSString * const DribbbleAuthorizationToken = @"5354c746b236110c767ef7e3c0cc6b76069fa27e5eb1df982636d90a3d057358";

#pragma mark - API
@interface PENGClient()

@end

@implementation PENGClient


+ (instancetype)sharedClient {
    static PENGClient *_sharedClient = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        _sharedClient = [PENGClient manager]; // [[PENGClient alloc] initWithBaseURL:[NSURL URLWithString:PENGAPIBaseURLString]];
        _sharedClient.securityPolicy = [AFSecurityPolicy defaultPolicy];
        _sharedClient.reachabilityManager = [AFNetworkReachabilityManager sharedManager];
        _sharedClient.operationQueue = [[NSOperationQueue alloc] init];
        _sharedClient.shouldUseCredentialStorage = YES;
        // 设置请求格式
        _sharedClient.requestSerializer = [AFJSONRequestSerializer serializer];
        // 设置返回格式
        _sharedClient.responseSerializer = [AFHTTPResponseSerializer serializer];
        
    });
    return _sharedClient;
}
static AFHTTPRequestOperationManager * maneger;
+(void)fetch_PengResourceService:(void (^)(NSString * response))response
                              errorHandler:(void (^)(NSError * err))err
{
    PengResource * peng = [[PengResource alloc] init];
    peng.chanel = @"pengpeng";
    peng.versionName = [NSString stringWithFormat:@"%@",@"1.5.1"]; //@"1.02";
    peng.versionCode = @"110";
    peng.deviceSystem = @"ios";
    NSDictionary * params = [peng objectDictionary];
    
    maneger = [AFHTTPRequestOperationManager manager];
    maneger.securityPolicy = [AFSecurityPolicy defaultPolicy];
    maneger.responseSerializer = [AFHTTPResponseSerializer serializer];
    

    [maneger GET:@"http://121.199.49.104:8080/PengResourceService/PengDNSv2" parameters:params success:^(AFHTTPRequestOperation *operation, id responseObject) {
        
        NSString *responestring = [[NSString alloc] initWithData:responseObject encoding:NSUTF8StringEncoding];
        NSLog(@"%@",responestring);
        NSArray * array = [responestring componentsSeparatedByString:@";"];
        if (array.count >= 3) {
            NSString * hostname = array[0];
            NSString * m_resource_hostname= array[1];
            NSString * host = hostname;
#warning 注意:先要有hostname才能初始化httpsengine
            [GlobalData sharedInstance].m_hostname = host;
            [GlobalData sharedInstance].m_resource_hostname = m_resource_hostname;
            [GlobalData sharedInstance].m_picture_hostfolder = array[2];
            if(array.count >= 4)
            {
                [GlobalData sharedInstance].m_videoUploadIpAndPort = array[3];
                [GlobalData sharedInstance].m_videoAccessUrl = array[4];
            }
        }
    } failure:^(AFHTTPRequestOperation *operation, NSError *error) {
        NSLog(@"%@",err);
    }];
}

@end
 
@implementation BaseModel

-(NSString *)deviceToken
{
    return @"abcddfafdasf";
}

-(NSString *)deviceOS
{
    return @"ios";
}

-(NSString *)chanel
{
    return @"appstore";
}

-(NSString *)rid
{
    return @"a9dp8000";
}

-(NSString *)sessionId
{
    return [GlobalData sharedInstance].m_loginResp.userInfo.sessionId;
}

-(NSNumber *)uid
{
    return [GlobalData sharedInstance].m_loginResp.userInfo.uid;
}


-(void)setReq:(Req *)req
{
    req.msgType = NSStringFromClass([req class]);
    req.sessionId = [self sessionId];
    req.uid = [self uid];
    req.rid = [self rid];
}

@end