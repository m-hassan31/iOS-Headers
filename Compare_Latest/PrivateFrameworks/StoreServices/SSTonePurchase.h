/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <StoreServices/SSPurchase.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"
#import "SSXPCCoding-Protocol.h"

@class NSArray, NSNumber, NSString;

@interface SSTonePurchase : SSPurchase <SSXPCCoding, NSCoding, NSCopying>
{
    NSArray *_allowedToneStyles;
    NSNumber *_assigneeIdentifier;
    NSString *_assigneeToneStyle;
    _Bool _shouldMakeDefaultRingtone;
    _Bool _shouldMakeDefaultTextTone;
}

- (id)initWithXPCEncoding:(id)arg1;
- (id)copyXPCEncoding;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)_setValuesUsingDatabaseEncoding:(id)arg1;
- (void)_addEntriesToDatabaseEncoding:(id)arg1;
@property _Bool shouldMakeDefaultTextTone;
@property _Bool shouldMakeDefaultRingtone;
@property(copy) NSString *assigneeToneStyle;
@property(retain) NSNumber *assigneeIdentifier;
@property(copy) NSArray *allowedToneStyles;
- (void)dealloc;
- (id)initWithItem:(id)arg1 offer:(id)arg2;

@end

