//
//  DiscoveryTopicPageModel.m
//  samurai-peng
//
//  Created by BooB on 16/3/6.
//  Copyright © 2016年 peng. All rights reserved.
//
#import "DiscoveryTopicPageModel.h" 
@implementation DiscoveryTopicPageModel

//@def_prop_strong( NSMutableArray *,		items)
////@def_prop_strong(DiscoveryTopicPageResult *,		resp)
//@def_signal( eventLoading )
//@def_signal( eventLoaded )
//@def_signal( eventError )

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


- (void)modelClear
{
}

#pragma mark -
-(void)req_DiscoveryTopicPageReqWithFromTopicId:(NSNumber *)fromTopicid
                                       response:(void (^)(DiscoveryTopicPageResult * response))response
                                   errorHandler:(void (^)(NSError * error))err
{
 
    PENGClient *manager = [PENGClient sharedClient];
    DiscoveryTopicPageReq * req = [[DiscoveryTopicPageReq alloc] init];
    req.fromTopicId = fromTopicid;
    req.v = @2;
    req.type = @2;
    [self setReq:req];
    NSDictionary * dic = [req objectDictionary];
    
    [manager POST:PENGAPIBaseURLString parameters:dic success:^(AFHTTPRequestOperation *operation, id responseObject) {
        
        NSString *responsejson = [[NSString alloc] initWithData:responseObject encoding:NSUTF8StringEncoding];
        DiscoveryTopicPageResult *resp = [[DiscoveryTopicPageResult alloc] initWithJSONData:[responsejson dataUsingEncoding:NSUTF8StringEncoding]];
        if (self.fromTopicId.integerValue != -1) {
            self.fromTopicId = resp.lastId;
            [self.items addObjectsFromArray:resp.list];
        }
        else
        {
            self.fromTopicId = resp.lastId;
            self.items = [NSMutableArray arrayWithArray:resp.list];
        }
        [self modelSave];
        response(resp);
        NSLog(@"%@", responsejson);
    } failure:^(AFHTTPRequestOperation *operation, NSError *error) {
        err(error);
    }];
}


-(NSNumber *)fromTopicId
{
    if (!_fromTopicId) {
        _fromTopicId = @-1;
    }
    return _fromTopicId;
}


@end
