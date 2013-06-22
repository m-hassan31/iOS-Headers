/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@interface PUPhotosSharingViewControllerSpec : NSObject
{
    BOOL _maximizeImageHeight;
    int _fastImageFormat;
    int _qualityImageFormat;
    int _zoomingImageFormat;
    float _interItemSpacing;
    float _maxImageDimension;
}

@property(readonly, nonatomic) BOOL maximizeImageHeight; // @synthesize maximizeImageHeight=_maximizeImageHeight;
@property(readonly, nonatomic) float maxImageDimension; // @synthesize maxImageDimension=_maxImageDimension;
@property(readonly, nonatomic) float interItemSpacing; // @synthesize interItemSpacing=_interItemSpacing;
@property(readonly, nonatomic) int zoomingImageFormat; // @synthesize zoomingImageFormat=_zoomingImageFormat;
@property(readonly, nonatomic) int qualityImageFormat; // @synthesize qualityImageFormat=_qualityImageFormat;
@property(readonly, nonatomic) int fastImageFormat; // @synthesize fastImageFormat=_fastImageFormat;
- (BOOL)allowsInterfaceRotation;
- (BOOL)embedsActivityViewForOrientation:(int)arg1;
- (struct UIEdgeInsets)collectionViewLayoutContentInsetForOrientation:(int)arg1;
@property(readonly, nonatomic) unsigned int selectionBadgeCorner;
@property(readonly, nonatomic) struct UIOffset selectionBadgeOffset;
@property(readonly, nonatomic) struct CGSize selectionBadgeSize;

@end
