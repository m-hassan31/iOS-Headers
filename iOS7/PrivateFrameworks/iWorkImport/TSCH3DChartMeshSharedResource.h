/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iWorkImport/TSCH3DChartMeshSharedChildResource.h>

@class TSCH3DDataBuffer;

// Not exported
@interface TSCH3DChartMeshSharedResource : TSCH3DChartMeshSharedChildResource
{
    TSCH3DDataBuffer *mMesh;
}

@property(retain, nonatomic) TSCH3DDataBuffer *mesh; // @synthesize mesh=mMesh;
- (void)flushMemory;
- (id)get;
- (void)setChildRegenerated:(_Bool)arg1;
- (void)dealloc;

@end

