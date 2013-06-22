/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class MediaControlClient, NSDictionary, NSObject<OS_dispatch_queue>;

@interface FigCPEFPAirPlaySession : NSObject
{
    BOOL _invalid;
    unsigned long _fairPlayContext;
    NSDictionary *_protectionInfo;
    NSDictionary *_contentInfo;
    MediaControlClient *_mediaControlClient;
    unsigned long _vodkaVersion;
    struct FPStreamOpaque_ *_fairPlaySession;
    NSObject<OS_dispatch_queue> *_serializationQueue;
}

- (void)endSession;
- (void)beginSessionWithCompletionQueue:(id)arg1 completionHandler:(id)arg2;
- (id)legacySinfs;
- (id)mediaControlParamsWithStoreResponse:(id)arg1;
- (id)sicWithPic:(id)arg1;
- (id)createPicRequest;
- (void)finalize;
- (void)dealloc;
- (id)initWithFairPlayContext:(unsigned long)arg1 routeInfo:(id)arg2 mediaControlClient:(id)arg3;
- (id)initWithFairPlayContext:(unsigned long)arg1 contentInfo:(id)arg2 routeInfo:(id)arg3 mediaControlClient:(id)arg4;
- (id)initWithFairPlayContext:(unsigned long)arg1 protectionInfo:(id)arg2 routeInfo:(id)arg3 mediaControlClient:(id)arg4;

@end
