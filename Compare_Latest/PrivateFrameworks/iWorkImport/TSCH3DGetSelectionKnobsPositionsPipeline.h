/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iWorkImport/TSCH3DSceneRenderPipeline.h>

#import "TSCH3DSceneObjectDelegator-Protocol.h"
#import "TSCHUnretainedParent-Protocol.h"

@class NSArray, NSMutableArray, TSCH3DChartRep, TSCH3DGetSelectionKnobsPositionsPipelineDelegate;

// Not exported
@interface TSCH3DGetSelectionKnobsPositionsPipeline : TSCH3DSceneRenderPipeline <TSCH3DSceneObjectDelegator, TSCHUnretainedParent>
{
    TSCH3DChartRep *mRep;
    TSCH3DGetSelectionKnobsPositionsPipelineDelegate *mSceneObjectDelegate;
    NSArray *mSelection;
    NSMutableArray *mProjectedPoints;
    float mNormalizedKnobRadius;
}

+ (id)pipelineWithRep:(id)arg1 scene:(id)arg2 selection:(id)arg3 normalizedKnobRadius:(float)arg4;
@property(readonly, nonatomic) NSArray *projectedPoints; // @synthesize projectedPoints=mProjectedPoints;
- (id)makeDelegateWithSceneObject:(id)arg1 scene:(id)arg2;
- (id)makeDelegateWithScene:(id)arg1;
- (_Bool)render;
- (void)getSelectionKnobsPositions:(id)arg1;
- (void)clearParent;
- (void)dealloc;
- (id)initWithRep:(id)arg1 scene:(id)arg2 selection:(id)arg3 normalizedKnobRadius:(float)arg4;

@end

