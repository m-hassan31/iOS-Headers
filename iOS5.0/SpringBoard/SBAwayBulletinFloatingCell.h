/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "SBAwayBulletinCell.h"

@interface SBAwayBulletinFloatingCell : SBAwayBulletinCell
{
    BOOL _hideIcon;
}

+ (float)_contentWidthForRowWidth:(float)arg1 leaveRoomForIcon:(BOOL)arg2;
+ (float)_rowHeightForContentHeight:(float)arg1;
+ (float)rowHeightForSubtitle:(id)arg1 message:(id)arg2 maxLines:(unsigned int)arg3 rowWidth:(float)arg4;
+ (float)rowHeightForSubtitle:(id)arg1 message:(id)arg2 maxLines:(unsigned int)arg3 attachmentText:(id)arg4 imageSize:(struct CGSize)arg5 rowWidth:(float)arg6;
+ (float)_cellIconLeftPadding;
+ (float)_cellContentLeftPadding;
+ (float)_cellContentRightPadding;
+ (float)_cellContentTopPadding;
+ (float)_cellContentExtraPadding;
- (void)_createContentView;
- (BOOL)_hasBackgroundColor;
- (void)setAttachmentImage:(id)arg1;
- (void)setUnlockActionContext:(id)arg1;
- (id)_lockBar;
- (BOOL)_drawsSeparator;
- (struct CGRect)_contentRect;
- (struct CGRect)_cellContentViewFrame;
- (void)layoutSubviews;

@end

