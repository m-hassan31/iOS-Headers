/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIControl.h"

@class NSString, SKUICircleProgressIndicator, SKUIFocusedTouchGestureRecognizer, SKUIItemOfferButtonAppearance, UIColor, UIImage, UIImageView, UILabel, UIView;

@interface SKUIItemOfferButton : UIControl
{
    SKUIItemOfferButtonAppearance *_appearance;
    UIView *_borderView;
    SKUIFocusedTouchGestureRecognizer *_cancelGestureRecognizer;
    UIImageView *_cloudArrowImageView;
    UIColor *_confirmationColor;
    NSString *_confirmationTitle;
    id <SKUIItemOfferButtonDelegate> _delegate;
    UIView *_emphasisView;
    int _fillStyle;
    UIImageView *_imageView;
    UIColor *_originalBackgroundColor;
    float _progress;
    SKUICircleProgressIndicator *_progressIndicator;
    int _progressType;
    BOOL _showsConfirmationState;
    unsigned int _state;
    NSString *_title;
    UILabel *_titleLabel;
    BOOL _universal;
}

+ (struct UIEdgeInsets)_imageInsetsForProgressType:(int)arg1;
+ (id)_imageForProgressType:(int)arg1;
+ (id)_cloudBackgroundImage;
+ (id)_cloudArrowImage;
+ (id)itemOfferButtonWithAppearance:(id)arg1;
@property(nonatomic) float progress; // @synthesize progress=_progress;
@property(nonatomic, getter=isUniversal) BOOL universal; // @synthesize universal=_universal;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) BOOL showsConfirmationState; // @synthesize showsConfirmationState=_showsConfirmationState;
@property(nonatomic) int progressType; // @synthesize progressType=_progressType;
@property(nonatomic) int fillStyle; // @synthesize fillStyle=_fillStyle;
@property(nonatomic) __weak id <SKUIItemOfferButtonDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSString *confirmationTitle; // @synthesize confirmationTitle=_confirmationTitle;
@property(retain, nonatomic) SKUIItemOfferButtonAppearance *appearance; // @synthesize appearance=_appearance;
- (void).cxx_destruct;
- (void)_setProgressVisible:(BOOL)arg1 animated:(BOOL)arg2;
- (void)_setImage:(id)arg1;
- (void)_sendWillAnimate;
- (void)_removeCancelGestureRecognizer;
- (void)_reloadForCurrentState;
- (id)_emphasisView;
- (id)_basicAnimationWithKeyPath:(id)arg1;
- (void)_animateToCancelTracking;
- (id)_activeTintColor;
- (void)_cancelGestureAction:(id)arg1;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (void)tintColorDidChange;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)layoutSubviews;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)cancelTrackingWithEvent:(id)arg1;
- (BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (BOOL)setValuesUsingItemOffer:(id)arg1 itemState:(id)arg2 clientContext:(id)arg3 animated:(BOOL)arg4;
- (void)setShowingConfirmation:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setProgressType:(int)arg1 animated:(BOOL)arg2;
- (void)_updateForProgressFinished:(BOOL)arg1;
- (void)setProgress:(float)arg1 animated:(BOOL)arg2;
@property(retain, nonatomic) UIImage *image;
- (void)showCloudImage;
@property(readonly, nonatomic, getter=isShowingConfirmation) BOOL showingConfirmation;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end
