//
//  CacheCenter.m
//  JXL
//
//  Created by BooB on 15-4-20.
//  Copyright (c) 2015年 BooB. All rights reserved.
//

#import "CacheCenter.h"

@interface CacheCenter()
@property(nonatomic,retain) NSMutableArray * signalNames;
@property(nonatomic,retain) YTKKeyValueStore *store;
@end

@implementation CacheCenter
//DEF_SINGLETON(TopicCacheCenter)
DEF_SINGLETON(CacheCenter)
-(YTKKeyValueStore *)store
{
    if (!_store) {
        YTKKeyValueStore *store = [[YTKKeyValueStore alloc] initDBWithName:@"pengjson.db"];
        _store = store;
    }
    return _store;
}
/**
 *  保存JSON到数据库
 *
 *  @param jsonstring json串
 *  @param tableName  数据库表名
 *  @param key        表中的字段
 */
-(void)saveJSON:(NSString *)jsonstring ForTableName:(NSString *)tableName Key:(NSString *)key
{
    [self.store createTableWithName:tableName];
    [self.store putString:jsonstring withId:key intoTable:tableName];
}

-(NSString *)getJSONForTableName:(NSString *)tableName key:(NSString *)key
{
    NSString * jsonstring = [self.store getStringById:key fromTable:tableName];
    return  jsonstring;
}

-(id)readNSUserDefaultObjectForKey:(NSString *)key
{
    id object = [[NSUserDefaults standardUserDefaults] objectForKey:key];
    return object;
}

-(void)setNSUserDefaultObject:(id)object forKey:(NSString *)key
{
    if (object)
    {
        [[NSUserDefaults standardUserDefaults]  setObject:object forKey:key];
        [[NSUserDefaults standardUserDefaults] synchronize];
    }
    if (object && ![self.signalNames containsObject:key])
    {
        [self.signalNames addObject:key];
        [[NSUserDefaults standardUserDefaults] setObject:self.signalNames forKey:@"signalNames"];
        [[NSUserDefaults standardUserDefaults] synchronize];
    }
    if (!object)
    {//为空就移除
        [[NSUserDefaults standardUserDefaults]  removeObjectForKey:key];
        [[NSUserDefaults standardUserDefaults]  synchronize];
         if ([self.signalNames containsObject:key])
         {
             [self.signalNames removeObject:key];
             [[NSUserDefaults standardUserDefaults] setObject:self.signalNames forKey:@"signalNames"];
             [[NSUserDefaults standardUserDefaults] synchronize];
         }
    }
}

#warning 废弃
-(id)readObject:(NSString *)key
{
    key = [CacheCenter fullKey:key fixkey:[CacheCenter curpostfix]];
    NSData *myEncodedObject = [[NSUserDefaults standardUserDefaults] objectForKey:key];
    id object = [NSKeyedUnarchiver unarchiveObjectWithData: myEncodedObject];
    return object;
//    return nil;
}
#warning 存在内测问题 废弃
-(void)saveObject:(id)object forkey:(NSString *)key
{
    if(!key) return;
    key = [CacheCenter fullKey:key fixkey:[CacheCenter curpostfix]];
    if (object && key) {
        NSData *archiveCarPriceData = [NSKeyedArchiver archivedDataWithRootObject:object];
        [[NSUserDefaults standardUserDefaults] setObject:archiveCarPriceData forKey:key];
        [[NSUserDefaults standardUserDefaults] synchronize];
    }
    if (![self.signalNames containsObject:key]) {
        if(!key) return;
        [self.signalNames addObject:key];
        [[NSUserDefaults standardUserDefaults] setObject:self.signalNames forKey:@"signalNames"];
        [[NSUserDefaults standardUserDefaults] synchronize];
    }
    if (!object && key) {//为空就移除
        [[NSUserDefaults standardUserDefaults] removeObjectForKey:key];
        if ([self.signalNames containsObject:key]) {
            [self.signalNames removeObject:key];
            [[NSUserDefaults standardUserDefaults] setObject:self.signalNames forKey:@"signalNames"];
            [[NSUserDefaults standardUserDefaults] synchronize];
        }
    }
    
}
-(void)removeObjectForKey:(NSString *)key
{
//    [self removeObject:key postfix:[CacheCenter curpostfix]];
}

-(void)removeObject:(NSString *)key postfix:(NSString *)postfix
{
    key = [CacheCenter fullKey:key fixkey:postfix];
    [[NSUserDefaults standardUserDefaults] removeObjectForKey:key];
    [[NSUserDefaults standardUserDefaults] synchronize];
}

+(NSString *)fullKey:(NSString *)key fixkey:(NSString *)fixkey
{
    NSString * allkey  = nil;
    if (fixkey) {
        allkey = [NSString stringWithFormat:@"%@_%@",key,fixkey];
    }
    else
        allkey = key;
    
    return allkey;
}

+(NSString *)curpostfix
{
    return @"_peng_";
}

//发送清除历史缓存通知
-(void)removePreUserData:(NSString *)username
{
    if (!username || ![username isEqualToString:[CacheCenter curpostfix]])
    {//切换账号的时候清除所有的用户消息
        if (!self.signalNames.count)
        {
            self.signalNames = [NSMutableArray arrayWithArray:[[NSUserDefaults standardUserDefaults] objectForKey:@"signalNames"]];
        }
        [self.signalNames enumerateObjectsUsingBlock:^(NSString * obj, NSUInteger idx, BOOL *stop){
            [self removeObject:obj postfix:username];
        }];
    }
}
@end
