/*
 * This file is part of the SDWebImage package.
 * (c) Olivier Poitrey <rs@dailymotion.com>
 *
 * For the full copyright and license information, please view the LICENSE
 * file that was distributed with this source code.
 */

#import <Foundation/Foundation.h>
#import "BU_SDImageCoder.h"

/**
 Built in coder using ImageIO that supports APNG encoding/decoding
 */
@interface BU_SDImageAPNGCoder : NSObject <SDProgressiveImageCoder, SDAnimatedImageCoder>

@property (nonatomic, class, readonly, nonnull) BU_SDImageAPNGCoder *sharedCoder;

@end
