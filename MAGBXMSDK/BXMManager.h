//
//  BXMPubConfiguration.h
//  BXMSDKDemo
//
//  Created by Mac on 2019/12/30.
//  Copyright © 2019 Mac. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface BXMManager : NSObject

//单利
+ (instancetype)shareManager;

/// SDK版本号
+(NSString *)sdkVersion;

@end

NS_ASSUME_NONNULL_END
