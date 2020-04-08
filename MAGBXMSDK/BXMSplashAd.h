//
//  BXMSplshAd.h
//  BXMSDK
//
//  Created by Mac on 2020/1/2.
//  Copyright © 2020 Mac. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@protocol BXMSplshAdDelegate <NSObject>

@optional

/**
 *  开屏加载成功
 */
-(void)bxmSplashAdLoadSuccess;


/**
 *  开屏 加载失败
 */
-(void)bxmSplashAdloadFailure:(NSError *)error;


/**
 *  开屏广告点击
 */
- (void)bxmSplashAdClick;

/**
 *        关闭开屏广告
 */
- (void)bxmSplashAdClose;

@end


@interface BXMSplashAd : NSObject

@property(nonatomic,weak)id <BXMSplshAdDelegate> delegate;

/**
       设置拉取广告超时时间，
        详解：拉取广告超时时间，开发者调用loadAd方法以后会立即展示backgroundImage，然后在该超时时间内，如果广告拉
 *   取成功，则立马展示开屏广告，否则放弃此次广告展示机会。
*/
@property (nonatomic, assign) NSInteger fetchDelay;

/// 初始化
/// @param adId  // 广告位Id
- (instancetype)initWithAdId:(NSString *)adId;

/// 展示开屏
/// @param window w indow
-(void)splashShowWindow:(UIWindow *)window;

@end


