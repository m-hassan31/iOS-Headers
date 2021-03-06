/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSHashTable, NSMutableArray, NSString, SBOperation;

@interface SBOperationQueue : NSObject
{
    NSString *_name;
    NSMutableArray *_operationQueue;
    NSHashTable *_operationLocks;
    SBOperation *_executingOperation;
}

@property(retain, nonatomic) SBOperation *executingOperation; // @synthesize executingOperation=_executingOperation;
- (void)_processNextOperationIfNecessary;
- (void)_executeOrPendOperations:(id)arg1;
- (void)_removeOperationQueueLock:(id)arg1;
- (void)_addOperationQueueLock:(id)arg1;
- (id)description;
- (void)executeOrAppendOperation:(id)arg1;
- (id)acquireLockForReason:(id)arg1;
- (_Bool)isLocked;
- (void)dealloc;
- (id)initWithName:(id)arg1;

@end

