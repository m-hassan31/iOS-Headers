/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <PhotosUI/PUMapAnnotationQuadtreeAddress.h>

@class NSArray, NSMutableSet;

@interface PUMapAnnotationQuadtreeMultiAddress : PUMapAnnotationQuadtreeAddress
{
    NSMutableSet *_alternativeAddresses;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *alternativeAddresses;
- (void)addAlternativeAddress:(id)arg1;
- (id)initWithQuadtreeAddress:(id)arg1;

@end

