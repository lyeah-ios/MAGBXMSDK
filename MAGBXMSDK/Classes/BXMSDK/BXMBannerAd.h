//
//  BXMBannerAd.h
//  BXMSDKDemo
//
//  Created by Mac on 2020/1/6.
//  Copyright © 2020 Mac. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "BXMEnumFile.h"


@protocol BXMBannerAdDelegate <NSObject>

@optional


/**
         数据加载成功
 */
-(void)bxmBannerAdDataLoadSucess;
/**
        视图加载成功
 */
-(void)bxmBannerShowSucess;
/**
     视图加载失败
 */
-(void)bxmBannerShowFailure:(NSError *_Nullable)error;
/**
     视图点击
 */
-(void)bxmBannerClik;

/***
     视图关闭
 */
-(void)bxmBannerClose;



@end

NS_ASSUME_NONNULL_BEGIN

@interface BXMBannerAd : NSObject
@property(nonatomic,weak)id < BXMBannerAdDelegate > delegate;
/**
        初始化Banner
        adId    广告ID
         imageSize:图片大小
        frame    banner 位置   frame 的 height设置为 建议设置跟imageSize 的大小差不多，系统将自适应大小
       rootController 设置跟控制器
 */
- (instancetype)initWithAdId:(NSString *)adId
                   imageSize:(BXMAdImageSize )imageSize
                 bannerFrame:(CGRect )frame
               rootContrller:(UIViewController *)rootController;

//显示 BannerView
-(void)bannerShowView:(UIView *)showView;
/**
       移除Banner
 */
-(void)removeBanner;
              
@end

NS_ASSUME_NONNULL_END
