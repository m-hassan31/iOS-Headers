/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <VectorKit/VKVectorTile.h>

@class NSArray, NSMapTable, NSMutableArray, NSMutableDictionary, VGLMesh, VGLTexture, VKAnimation, VKRealisticPolygonMaker;

@interface VKRealisticTile : VKVectorTile
{
    float _roadZ;
    float _laneMarkingZ;
    float _landZ;
    float _waterZ;
    NSMapTable *_realisticRoadGroupsTable;
    NSMutableArray *_realisticRoadGroups;
    NSMutableArray *_landMeshes;
    NSMutableArray *_waterMeshes;
    VGLMesh *_coastlineMesh;
    VKRealisticPolygonMaker *_landPolygonMaker;
    VKRealisticPolygonMaker *_waterPolygonMaker;
    NSMutableDictionary *_meshDict;
    VKAnimation *_startDrawingAnimation;
    VGLTexture *_defaultLandTexture;
    VGLTexture *_defaultLandTextureVariant;
    struct vector<_VKRealisticPolygonMetaData, vk_allocator<_VKRealisticPolygonMetaData>> _polygonMetaData;
}

@property(readonly, nonatomic) VGLTexture *defaultLandTexture; // @synthesize defaultLandTexture=_defaultLandTexture;
@property(retain, nonatomic) VKAnimation *startDrawingAnimation; // @synthesize startDrawingAnimation=_startDrawingAnimation;
@property(readonly, nonatomic) VGLMesh *coastlineMesh; // @synthesize coastlineMesh=_coastlineMesh;
@property(readonly, nonatomic) NSArray *waterMeshes; // @synthesize waterMeshes=_waterMeshes;
@property(readonly, nonatomic) NSArray *landMeshes; // @synthesize landMeshes=_landMeshes;
@property(readonly, nonatomic) NSArray *realisticRoadGroups; // @synthesize realisticRoadGroups=_realisticRoadGroups;
@property(readonly, nonatomic) float waterZ; // @synthesize waterZ=_waterZ;
@property(readonly, nonatomic) float landZ; // @synthesize landZ=_landZ;
@property(readonly, nonatomic) float roadZ; // @synthesize roadZ=_roadZ;
- (id).cxx_construct;
- (void).cxx_destruct;
- (unsigned int)geometryCount;
- (id)_meshForStyle:(id)arg1 tileKey:(struct VKTileKey)arg2;
- (id)_groupForRenderZ:(int)arg1;
- (id)_createDefaultTextureForLevelOfDetail:(unsigned int)arg1 takeVariant:(BOOL)arg2;
- (void)_addCoastlineMeshForPoints:(const Vec2Imp_1782d7e3 *)arg1 pointCount:(unsigned int)arg2;
- (void)_parseCoastlines;
@property(readonly, nonatomic) VGLTexture *defaultLandTextureVariant; // @synthesize defaultLandTextureVariant=_defaultLandTextureVariant;
- (void)_parsePolygons;
- (void)updateTextures;
- (void)updateComponentsWithContext:(id)arg1;
- (void)dealloc;
- (id)initWithKey:(const struct VKTileKey *)arg1;

@end
