/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "XPCProxyTarget-Protocol.h"

@class BKSProcessAssertion, NSError, NSObject<OS_dispatch_queue>, NSObject<OS_xpc_object>, NSString, _UIAsyncInvocation, _UIViewServiceSessionEndpoint;

@interface _UIViewServiceInterfaceConnectionRequest : NSObject <XPCProxyTarget>
{
    id _connectionHandler;
    NSString *_serviceBundleIdentifier;
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _isCancelled;
    NSError *_cancellationError;
    _UIAsyncInvocation *_cancellationInvocation;
    int _sessionRequestNotifyToken;
    NSObject<OS_xpc_object> *_serviceSessionManagerConnection;
    BKSProcessAssertion *_serviceProcessAssertion;
    _UIViewServiceSessionEndpoint *_serviceSessionEndpoint;
    _UIAsyncInvocation *_sessionConnectionCancelInvocation;
    int __automatic_invalidation_retainCount;
    BOOL __automatic_invalidation_invalidated;
}

+ (id)connectToViewServiceWithBundleIdentifier:(id)arg1 connectionHandler:(id)arg2;
- (id)proxy:(id)arg1 detailedSignatureForSelector:(SEL)arg2;
- (void)_cancelUnconditionallyThen:(id)arg1;
- (void)_cancelWithError:(id)arg1;
- (void)_didConnectToService;
- (void)_connectToServiceSessionViaEndpoint:(id)arg1;
- (void)_establishConnection;
- (void)_createProcessAssertion;
- (void)_launchService;
- (void)dealloc;
- (BOOL)_isDeallocating;
- (BOOL)_tryRetain;
- (unsigned int)retainCount;
- (oneway void)release;
- (id)retain;
- (int)__automatic_invalidation_logic;

@end
