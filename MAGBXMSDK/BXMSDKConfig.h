//
//  BXMSDKConfig.h
//  BXMSDKDemo
//
//  Created by 侯亚迪 on 2020/3/20.
//  Copyright © 2020 Mac. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface BXMSDKConfig : NSObject


/**
    变现猫初始化
 @param appId  应用Id
 */
+(void)bxmConfigManagerAppId:(NSString *)appId;


/***
    获取sdk版本号
 */
+ (NSString *)sdkVersion;




@end

NS_ASSUME_NONNULL_END
