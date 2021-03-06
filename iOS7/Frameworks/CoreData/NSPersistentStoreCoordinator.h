/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSLocking-Protocol.h"

@class NSArray, NSManagedObjectModel, NSMutableArray;

@interface NSPersistentStoreCoordinator : NSObject <NSLocking>
{
    struct _persistentStoreCoordinatorFlags {
        unsigned int _isRegistered:1;
        unsigned int _reservedFlags:31;
    } _flags;
    unsigned int _reserved32;
    long long _miniLock;
    NSMutableArray *_extendedStoreURLs;
    id _externalRecordsHelper;
    NSManagedObjectModel *_managedObjectModel;
    id _coreLock;
    NSArray *_persistentStores;
}

+ (_Bool)removeUbiquitousContentAndPersistentStoreAtURL:(id)arg1 options:(id)arg2 error:(id *)arg3;
+ (id)metadataForPersistentStoreOfType:(id)arg1 URL:(id)arg2 error:(id *)arg3;
+ (_Bool)setMetadata:(id)arg1 forPersistentStoreOfType:(id)arg2 URL:(id)arg3 error:(id *)arg4;
+ (Class)_classForPersistentStoreAtURL:(id)arg1;
+ (id)registeredStoreTypes;
+ (void)registerStoreClass:(Class)arg1 forStoreType:(id)arg2;
+ (void)_registerCoreDataStoreClass:(Class)arg1 forStoreType:(id)arg2;
+ (void)__Multithreading_Violation_AllThatIsLeftToUsIsHonor__;
+ (_Bool)accessInstanceVariablesDirectly;
+ (void)initialize;
- (id)executeRequest:(id)arg1 withContext:(id)arg2 error:(id *)arg3;
- (id)managedObjectIDForURIRepresentation:(id)arg1 error:(id *)arg2;
- (id)managedObjectIDForURIRepresentation:(id)arg1;
- (id)migratePersistentStore:(id)arg1 toURL:(id)arg2 options:(id)arg3 withType:(id)arg4 error:(id *)arg5;
- (_Bool)setURL:(id)arg1 forPersistentStore:(id)arg2;
- (id)URLForPersistentStore:(id)arg1;
- (id)persistentStoreForURL:(id)arg1;
- (_Bool)removePersistentStore:(id)arg1 error:(id *)arg2;
- (id)addPersistentStoreWithType:(id)arg1 configuration:(id)arg2 URL:(id)arg3 options:(id)arg4 error:(id *)arg5;
- (_Bool)_checkForSkewedEntityHashes:(id)arg1 metadata:(id)arg2;
- (id)_retainedPersistentStores;
- (id)persistentStores;
- (_Bool)tryLock;
- (void)unlock;
- (void)lock;
- (id)managedObjectModel;
- (id)initWithManagedObjectModel:(id)arg1;
- (void)dealloc;
- (void)finalize;
- (id)metadataForPersistentStore:(id)arg1;
- (void)setMetadata:(id)arg1 forPersistentStore:(id)arg2;

@end

