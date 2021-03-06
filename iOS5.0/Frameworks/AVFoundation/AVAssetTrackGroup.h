/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <AVFoundation/AVTrackGroup.h>

@class NSArray;

@interface AVAssetTrackGroup : AVTrackGroup
{
    id _assetComparisonToken;
    NSArray *_trackIDs;
}

- (id)initWithAsset:(id)arg1 trackIDs:(id)arg2;
- (id)init;
- (void)dealloc;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (id)_assetComparisonToken;
@property(readonly, nonatomic) NSArray *trackIDs; // @synthesize trackIDs=_trackIDs;

@end

