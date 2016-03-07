//
//  SigninModel.h
//  samurai-peng
//
//  Created by BooB on 16/3/6.
//  Copyright © 2016年 peng. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "PENGClient.h"

#import "SMSLoginResp2.h"
#import "PassportLoginResp.h"

@interface SigninModel : BaseModel
AS_SINGLETON(SigninModel)

- (void)req_SMSLoginReq2WithPhone:(NSString *)phone
                         password:(NSString *)password
                         response:(void (^)(SMSLoginResp2 * response))response
                     errorHandler:(void (^)(NSError * error))err;

-(void)req_PassportLoginWithMobile:(NSString *)mobile
                          passport:(NSString *)passport
                          response:(void (^)(PassportLoginResp * response))response
                      errorHandler:(void (^)(NSError * error))err;
@end
