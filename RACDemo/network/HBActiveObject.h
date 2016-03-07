#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>

@interface ArchiveObject : NSObject <NSCoding>

@end

#pragma mark - 这个是基类，用于归档 打印 校验
//如 HBOBJ_SETVALUE_FORPATH(self, @"UserInfo", @"infos");
#define HBOBJ_SETVALUE_FORPATH(OBJ,VALUE,PATH) [OBJ setValue:VALUE forKeyPath:[NSString stringWithFormat:@"propertyArrayMap.%@",PATH]];

@interface HBActiveObject : ArchiveObject
- (BOOL)validate;
@end