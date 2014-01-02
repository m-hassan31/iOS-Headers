/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "SBFLegibilitySettingsProvider-Protocol.h"
#import "SBWallpaperObserver-Protocol.h"

@class _UILegibilitySettings;

@interface SBWallpaperLegibilitySettingsProvider : NSObject <SBWallpaperObserver, SBFLegibilitySettingsProvider>
{
    id <SBFLegibilitySettingsProviderDelegate> _delegate;
    long long _variant;
}

@property(nonatomic) id <SBFLegibilitySettingsProviderDelegate> delegate; // @synthesize delegate=_delegate;
- (void)wallpaperLegibilitySettingsDidChange:(id)arg1 forVariant:(long long)arg2;
- (void)wallpaperDidChangeForVariant:(long long)arg1;
@property(readonly, nonatomic) _UILegibilitySettings *legibilitySettings;
- (void)dealloc;
- (id)initWithVariant:(long long)arg1;

@end
