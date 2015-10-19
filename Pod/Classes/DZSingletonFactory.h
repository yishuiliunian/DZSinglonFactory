//
//  DZSingletonFactory.h
//  TimeUI
//
//  Created by Stone Dong on 13-12-12.
//  Copyright (c) 2013年 Stone Dong. All rights reserved.
//

#import <Foundation/Foundation.h>

#define DZShareSingleFactory [DZSingletonFactory shareFactory]

#ifdef __cplusplus
extern "C" {
#endif
    id  DZSingleForClass(Class a);
#ifdef __cplusplus
}
#endif

#define IMP_SINGLONTON_SHARE_MANAGER(cla) +(cla *) shareManager \
{ return DZSingleForClass([self class]); }

#define DEFINE_SINGLONTON_SHARE_MANAGER(cla) +(cla *) shareManager;

@interface DZSingletonFactory : NSObject

+ (DZSingletonFactory*) shareFactory;

- (id) shareInstanceFor:(Class)aclass;
- (id) shareInstanceFor:(Class)aclass category:(NSString*)key;
@end
