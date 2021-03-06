/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject-Protocol.h"

@protocol AFAssistantUIService <NSObject>
- (id)supportedCommands;

@optional
- (void)assistantConnectionConversationFinished:(id)arg1;
- (void)assistantConnection:(id)arg1 conversationFailedWithError:(id)arg2;
- (void)assistantConnectionRequestFinished:(id)arg1;
- (void)assistantConnection:(id)arg1 requestFailedWithError:(id)arg2;
- (void)assistantConnection:(id)arg1 receivedCommand:(id)arg2;
- (void)assistantConnection:(id)arg1 shouldSpeak:(BOOL)arg2;
@end

