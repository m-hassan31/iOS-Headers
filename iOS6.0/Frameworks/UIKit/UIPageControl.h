/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <UIKit/UIControl.h>

@class NSMutableArray, UIColor, UIImage;

@interface UIPageControl : UIControl
{
    NSMutableArray *_indicators;
    int _currentPage;
    int _displayedPage;
    struct {
        unsigned int hideForSinglePage:1;
        unsigned int defersCurrentPageDisplay:1;
    } _pageControlFlags;
    UIImage *_currentPageImage;
    UIImage *_pageImage;
    UIColor *_currentPageIndicatorTintColor;
    UIColor *_pageIndicatorTintColor;
}

@property(retain, nonatomic) UIColor *pageIndicatorTintColor; // @synthesize pageIndicatorTintColor=_pageIndicatorTintColor;
@property(retain, nonatomic) UIColor *currentPageIndicatorTintColor; // @synthesize currentPageIndicatorTintColor=_currentPageIndicatorTintColor;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (struct CGSize)sizeForNumberOfPages:(int)arg1;
- (void)updateCurrentPageDisplay;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)endTrackingAt:(struct CGPoint)arg1 previous:(struct CGPoint)arg2 withEvent:(struct __GSEvent *)arg3;
- (void)layoutSubviews;
- (struct CGSize)intrinsicContentSize;
- (BOOL)_contentHuggingDefault_isUsuallyFixedHeight;
- (BOOL)_contentHuggingDefault_isUsuallyFixedWidth;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
@property(nonatomic) BOOL defersCurrentPageDisplay; // @dynamic defersCurrentPageDisplay;
@property(nonatomic) BOOL hidesForSinglePage; // @dynamic hidesForSinglePage;
@property(nonatomic) int currentPage; // @dynamic currentPage;
@property(nonatomic) int numberOfPages; // @dynamic numberOfPages;
- (id)_pageIndicatorCurrentImageForPage:(int)arg1;
- (id)_pageIndicatorImageForPage:(int)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (void)_populateArchivedSubviews:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)_commonPageControlInit;
- (void)_updateCurrentPageDisplay;
- (void)_setCurrentPage:(int)arg1;
- (int)_displayedPage;
- (void)_setDisplayedPage:(int)arg1;
- (BOOL)isElementAccessibilityExposedToInterfaceBuilder;

@end

