//
//  BADBuoyageAd.h
//  BXMAdSDK
//
//  Created by PHX on 2020/2/11.
//  Copyright © 2020 nameless. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@protocol BADBuoyageAdDelagate <NSObject>
@optional
/**
        浮标加载数据成功
 */
-(void)badBuoyageLoadDataSuccess;
/**
 浮标展示成功
 */
-(void)badBuoyageShowSuccess;

/**
          浮标加载失败
 */
-(void)badBuoyageloadFailure:(NSError *)error;

/**
          浮标点点击
 */
-(void)badBuoyageClick;



@end

@interface BADBuoyageAd : NSObject

@property(nonatomic,weak)id <BADBuoyageAdDelagate > delegate;

/**
      浮标初始化
    adId:广告位Id
    frame:浮标frame
    controller:当前控制器
 */
- (instancetype)initWithAdId:(NSString *)adId
                       frame:(CGRect )frame
                  controller:(UIViewController *)controller;
/**
            加载浮标
 */
-(void)bad_loadBuoyage;
/**
        展示浮标
 */
-(void)bad_buoyageShowView:(UIView *)view;
@end

NS_ASSUME_NONNULL_END
