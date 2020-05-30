//
//  BADBuoyageAd.h
//  BXMAdSDK
//
//  Created by PHX on 2020/2/11.
//  Copyright © 2020 nameless. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "BXMEnumFile.h"

@class BADBuoyageAd;
NS_ASSUME_NONNULL_BEGIN

@protocol BADBuoyageAdDelagate <NSObject>
@optional
/**
        浮标加载数据成功
 */
-(void)badBuoyageLoadDataSuccess:(BADBuoyageAd *)buoyageAd  buoyageView:(UIView *)buoyageView  ;
/**
 浮标展示成功
 */
-(void)badBuoyageShowSuccess:(BADBuoyageAd *)buoyageAd  buoyageView:(UIView *)buoyageView ;

/**
          浮标加载失败
 */
-(void)badBuoyageloadFailure:(NSError *)error buoyageAd:(BADBuoyageAd *)buoyageAd  buoyageView:(UIView *)buoyageView ;

/**
          浮标点点击
 */
-(void)badBuoyageClick:(BADBuoyageAd *)buoyageAd  buoyageView:(UIView *)buoyageView;



@end


/**
        BADBuoyageAd类 将不再维护使用，请尽快更换 BXMBuoyageAd类 使用及更新相关接口，以免影响后续使用
 */
@interface BADBuoyageAd : NSObject

@property(nonatomic,weak)id <BADBuoyageAdDelagate > delegate;

/**
   浮标初始化
   adId:广告位Id
   frame:浮标frame 建议设置 width 与 height 一直，如果 width 与Height不一致，将以最小值为准，
   controller:当前控制器
*/
- (instancetype)initWithAdId:(NSString *)adId
                       frame:(CGRect )frame
                  controller:(UIViewController *)controller BXM_DEPRECATED_MSG("BADBuoyageAd类 将不再维护使用，请尽快更换 BXMBuoyageAd类 使用及更新相关接口，以免影响后续使用");;
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
