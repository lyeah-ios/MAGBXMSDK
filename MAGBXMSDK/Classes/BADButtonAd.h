//
//  BADButtonAd.h
//  BXMAdSDK
//
//  Created by PHX on 2020/2/10.
//  Copyright © 2020 nameless. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
NS_ASSUME_NONNULL_BEGIN

@protocol  BADButtonAdDelagate <NSObject>
@optional
/**
             按钮请求数据成功
 */
-(void)badBurttonloadDataSuccess;
/**
 按钮成功展示
 */
-(void)badBurttonShowSuccess;
/**

             按钮加载失败
 */
-(void)badBurttonloadFaliure:(NSError *)error;
/**
    按钮点击
 */
-(void)badBurttonClick;

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
