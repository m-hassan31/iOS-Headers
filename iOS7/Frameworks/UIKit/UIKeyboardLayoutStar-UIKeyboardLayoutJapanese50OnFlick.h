/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <UIKit/UIKeyboardLayoutStar.h>

@interface UIKeyboardLayoutStar (UIKeyboardLayoutJapanese50OnFlick)
- (void)resizeForKeyplaneSize:(struct CGSize)arg1;
- (void)activateCompositeKey:(id)arg1 direction:(int)arg2 flickString:(id)arg3 popupInfo:(id)arg4;
- (void)showPopupView:(int)arg1 withKey:(id)arg2 popupInfo:(id)arg3 force:(_Bool)arg4;
- (void)setKeyboardDim:(_Bool)arg1;
- (void)setKeyboardDim:(_Bool)arg1 amount:(double)arg2 withDuration:(double)arg3;
- (void)handleDismissFlickView;
- (void)handleDismissFlickView:(id)arg1;
- (void)handlePopupView;
- (void)handlePopupView:(id)arg1;
- (id)overlayCharacterImageForKey:(id)arg1 direction:(int)arg2 rect:(struct CGRect)arg3 flickString:(id)arg4 popupInfo:(id)arg5;
- (id)getFlickCompositeImageForKey:(id)arg1 direction:(int)arg2 rect:(struct CGRect)arg3;
- (id)getPopupBackgroundImageForKey:(id)arg1 direction:(int)arg2 popupInfo:(id)arg3 rect:(struct CGRect)arg4;
- (id)compositeImageForKey:(id)arg1;
- (void)setCompositeImage:(id)arg1 forKey:(id)arg2;
- (void)showFlickView:(int)arg1 withKey:(id)arg2 flickString:(id)arg3;
- (void)handleFlick:(id)arg1;
- (void)populateFlickPopupsForKey:(id)arg1;
- (id)flickStringForInputKey:(id)arg1 direction:(int)arg2;
- (id)flickPopupStringForKey:(id)arg1 withString:(id)arg2;
@end

