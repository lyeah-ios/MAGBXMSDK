//
//  BXMButtonAd.h
//  BXMSDKDemo
//
//  Created by weicai on 2020/5/19.
//  Copyright © 2020 Mac. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
@class BXMButtonAd;
NS_ASSUME_NONNULL_BEGIN

@protocol  BXMButtonAdDelagate <NSObject>
@optional
/**
             按钮据加载成功
 */
-(void)bxmButtonloadDataSuccess:(BXMButtonAd *)buttonAd  buttonView:(UIView *)buttonView;
/**
    按钮成功展示
 */
-(void)bxmButtonShowSuccess:(BXMButtonAd *)buttonAd  buttonView:(UIView *)buttonView;
/**

            按钮加载失败
 */
-(void)bxmButtonloadFaliure:(NSError *)error buttonAd:(BXMButtonAd *)buttonAd  buttonView:(UIView *)buttonView;
/**
    按钮点击
 */
-(void)bxmBurttonClick:(BXMButtonAd *)buttonAd  buttonView:(UIView *)buttonView;

@end

@interface BXMButtonAd : NSObject

@property(nonatomic,weak)id <BXMButtonAdDelagate> delegate;

/**
        初始化按钮
 */
-(instancetype)initWithAdId:(NSString *)adId
                buttonFrame:(CGRect )frame
                 controller:(UIViewController *)controller;
/**
        加载按钮数据
 */
-(void)bxm_loadButton;

/**
        button 显示
 */
-(void)bxm_buttonShowView:(UIView *)view;
@end

NS_ASSUME_NONNULL_END
