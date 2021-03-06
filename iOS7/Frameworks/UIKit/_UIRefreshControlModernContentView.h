/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <UIKit/_UIRefreshControlContentView.h>

@class UILabel, UIView, _UIRefreshControlModernReplicatorView;

// Not exported
@interface _UIRefreshControlModernContentView : _UIRefreshControlContentView
{
    _Bool _animationsAreValid;
    UIView *_replicatorContainer;
    _UIRefreshControlModernReplicatorView *_replicatorView;
    UIView *_seed;
    _Bool _hasFinishedRevealing;
    UILabel *_textLabel;
    _Bool _areAnimationsValid;
    double _currentPopStiffness;
}

@property(nonatomic) double currentPopStiffness; // @synthesize currentPopStiffness=_currentPopStiffness;
@property(readonly, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
@property(nonatomic) _Bool areAnimationsValid; // @synthesize areAnimationsValid=_areAnimationsValid;
- (id)attributedTitle;
- (void)setAttributedTitle:(id)arg1;
- (void)setTintColor:(id)arg1;
- (id)_effectiveTintColorWithAlpha:(double)arg1;
- (id)_effectiveTintColor;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (double)maximumSnappingHeight;
- (double)_effectiveScrollViewHeight;
- (double)_heightAtWhichNoneOfTheInterfaceElementsAreVisibleEvenIfTheControlIsStillPartiallyOnScreen;
- (double)_currentTimeOffset;
- (void)_updateTimeOffsetOfRelevantLayers;
- (double)_percentageShowing;
- (void)_snappingMagic;
- (void)_goAway;
- (void)_tick;
- (void)_spin;
- (void)_reveal;
- (void)_resetToRevealingState;
- (void)_setSpunAppearance;
- (void)_cleanUpAfterRevealing;
- (void)_tickDueToProgrammaticRefresh;
- (void)didTransitionFromState:(int)arg1 toState:(int)arg2;
- (void)willTransitionFromState:(int)arg1 toState:(int)arg2;
- (long long)style;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

