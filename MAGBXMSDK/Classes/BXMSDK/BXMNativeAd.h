//
//  BXMNativeAd.h
//  BXMSDK
//
//  Created by 侯亚迪 on 2020/1/8.
//  Copyright © 2020 Mac. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "BXMNativeAdDataObject.h"

NS_ASSUME_NONNULL_BEGIN

@protocol BXMNativeAdDelegate <NSObject>

@optional

/// 广告加载成功
/// @param nativeAdDataArray 广告数据集合
- (void)nativeAdsSuccessToLoad:(NSArray<BXMNativeAdDataObject *> *_Nullable)nativeAdDataArray;

/// 广告加载失败
/// @param error 失败原因
- (void)nativeAdsLoadFailWithError:(NSError *_Nullable)error;

@end


/// 信息流自渲染广告
@interface BXMNativeAd : NSObject

/// 代理
@property (nonatomic, weak) id<BXMNativeAdDelegate> delegate;


/// 初始化广告位
/// @param adId  广告位id
/// @param imageSize  广告图片尺寸
- (instancetype)initWithAdId:(NSString *)adId
                   imageSize:(BXMAdImageSize)imageSize;


/// 加载广告
/// @param count  广告个数（建议不超过3，最大值为10）
- (void)loadAdWithCount:(NSInteger)count;

@end

NS_ASSUME_NONNULL_END
