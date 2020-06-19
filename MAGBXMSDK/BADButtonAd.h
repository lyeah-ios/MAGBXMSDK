//
//  BADButtonAd.h
//  BXMAdSDK
//
//  Created by PHX on 2020/2/10.
//  Copyright © 2020 nameless. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
@class BADButtonAd;
NS_ASSUME_NONNULL_BEGIN

@protocol  BADButtonAdDelagate <NSObject>
@optional
/**
             按钮据加载成功
 */
-(void)badButtonloadDataSuccess:(BADButtonAd *)buttonAd  buttonView:(UIView *)buttonView;
/**
    按钮成功展示
 */
-(void)badButtonShowSuccess:(BADButtonAd *)buttonAd  buttonView:(UIView *)buttonView;
/**

            按钮加载失败
 */
-(void)badButtonloadFaliure:(NSError *)error buttonAd:(BADButtonAd *)buttonAd  buttonView:(UIView *)buttonView;
/**
    按钮点击
 */
-(void)badButtonClick:(BADButtonAd *)buttonAd  buttonView:(UIView *)buttonView;

@end



@interface BADButtonAd : NSObject

@property(nonatomic,weak)id <BADButtonAdDelagate> delegate;

- (instancetype)initWithAdId:(NSString *)adId
                       frame:(CGRect)frame
                  controller:(UIViewController *)controller;
/**
        加载 button
 */
-(void)bad_loadButton;


/**
        button 显示
 */
-(void)bad_buttonShowView:(UIView *)view;
@end

NS_ASSUME_NONNULL_END
