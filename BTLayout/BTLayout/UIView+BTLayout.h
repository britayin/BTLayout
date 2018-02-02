//
//  UIView+BTLayout.h
//  Mango
//
//  Created by britayin on 2017/11/7.
//  Copyright © 2017年 z28j. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIView (BTLayout)

@property (nonatomic) CGFloat pX;
@property (nonatomic) CGFloat pY;
@property (nonatomic) CGFloat pWidth;
@property (nonatomic) CGFloat pHeight;

@property (nonatomic) CGFloat pTop;
@property (nonatomic) CGFloat pBottom;
@property (nonatomic) CGFloat pLeft;
@property (nonatomic) CGFloat pRight;

@property (nonatomic) CGFloat pCenterX;
@property (nonatomic) CGFloat pCenterY;
@property (nonatomic) CGPoint pCenter;

@property (nonatomic) CGSize pSize;
@property (nonatomic) CGPoint pOrigin;

- (void)pAlignBottom:(UIView *)view offset:(CGFloat)offset;
- (void)pAlignBottom:(UIView *)view;

- (void)pAlignParentBottomOffset:(CGFloat)offset;
- (void)pAlignParentBottom;

- (void)pAlignTop:(UIView *)view offset:(CGFloat)offset;
- (void)pAlignTop:(UIView *)view;

- (void)pAlignParentTopOffset:(CGFloat)offset;
- (void)pAlignParentTop;

- (void)pAlignLeft:(UIView *)view offset:(CGFloat)offset;
- (void)pAlignLeft:(UIView *)view;

- (void)pAlignParentLeftOffset:(CGFloat)offset;
- (void)pAlignParentLeft;

- (void)pAlignRight:(UIView *)view offset:(CGFloat)offset;
- (void)pAlignRight:(UIView *)view;

- (void)pAlignParentRightOffset:(CGFloat)offset;
- (void)pAlignParentRight;

- (void)pAlignCenterX:(UIView *)view offset:(CGFloat)offset;
- (void)pAlignCenterX:(UIView *)view;

- (void)pAlignParentCenterXOffset:(CGFloat)offset;
- (void)pAlignParentCenterX;

- (void)pAlignCenterY:(UIView *)view offset:(CGFloat)offset;
- (void)pAlignCenterY:(UIView *)view;

- (void)pAlignParentCenterYOffset:(CGFloat)offset;
- (void)pAlignParentCenterY;

- (void)pAlignCenter:(UIView *)view;
- (void)pAlignParentCenter;

- (void)pBelow:(UIView *)view margin:(CGFloat)margin;
- (void)pAbove:(UIView *)view margin:(CGFloat)margin;
- (void)pRightTo:(UIView *)view margin:(CGFloat)margin;
- (void)pLeftTo:(UIView *)view margin:(CGFloat)margin;





@property (nonatomic) CGFloat sX;
@property (nonatomic) CGFloat sY;
@property (nonatomic) CGFloat sWidth;
@property (nonatomic) CGFloat sHeight;

@property (nonatomic) CGFloat sTop;
@property (nonatomic) CGFloat sBottom;
@property (nonatomic) CGFloat sLeft;
@property (nonatomic) CGFloat sRight;

@property (nonatomic) CGSize sSize;
@property (nonatomic) CGPoint sOrigin;

- (void)sAlignBottom:(UIView *)view offset:(CGFloat)offset;
- (void)sAlignBottom:(UIView *)view;

- (void)sAlignParentBottomOffset:(CGFloat)offset;
- (void)sAlignParentBottom;

- (void)sAlignTop:(UIView *)view offset:(CGFloat)offset;
- (void)sAlignTop:(UIView *)view;

- (void)sAlignParentTopOffset:(CGFloat)offset;
- (void)sAlignParentTop;

- (void)sAlignLeft:(UIView *)view offset:(CGFloat)offset;
- (void)sAlignLeft:(UIView *)view;

- (void)sAlignParentLeftOffset:(CGFloat)offset;
- (void)sAlignParentLeft;

- (void)sAlignRight:(UIView *)view offset:(CGFloat)offset;
- (void)sAlignRight:(UIView *)view;

- (void)sAlignParentRightOffset:(CGFloat)offset;
- (void)sAlignParentRight;

- (void)sBelow:(UIView *)view margin:(CGFloat)margin;
- (void)sAbove:(UIView *)view margin:(CGFloat)margin;
- (void)sRightTo:(UIView *)view margin:(CGFloat)margin;
- (void)sLeftTo:(UIView *)view margin:(CGFloat)margin;

- (void)sizeAsParent;
- (void)sizeAsParentMargin:(CGFloat)margin;
- (void)sizeAsParentMargins:(UIEdgeInsets)magins;

- (void)widthAsParent;
- (void)widthAsParentMargin:(CGFloat)margin;
- (void)widthAsParentMarginsLeft:(CGFloat)leftMargin right:(CGFloat)rightMargin;

- (void)heightAsParent;
- (void)heightAsParentMargin:(CGFloat)margin;
- (void)heightAsParentMarginsTop:(CGFloat)topMargin bottom:(CGFloat)bottomtMargin;

@end
