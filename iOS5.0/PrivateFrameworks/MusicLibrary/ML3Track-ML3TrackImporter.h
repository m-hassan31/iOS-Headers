/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <MusicLibrary/ML3Track.h>

@interface ML3Track (ML3TrackImporter)
+ (id)flattenedChapterDataFromSyncInfoDictionaries:(id)arg1 trackPersistentID:(long long)arg2;
+ (id)_flattenedChapterDataWithImportChapters:(id)arg1 library:(id)arg2 trackPersistentID:(long long)arg3;
- (void)populateLocationPropertiesWithPath:(id)arg1;
- (void)populateChapterDataByImportingFromAsset;
- (void)populateChapterDataWithImportChapters:(id)arg1;
- (BOOL)populateArtworkCacheWithArtworkData:(id)arg1;
@end

