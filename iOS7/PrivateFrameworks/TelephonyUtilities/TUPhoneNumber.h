/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCoding-Protocol.h"
#import "NSSecureCoding-Protocol.h"

@class NSString;

@interface TUPhoneNumber : NSObject <NSCoding, NSSecureCoding>
{
    struct __CFPhoneNumber *_phoneNumberRef;
}

+ (_Bool)supportsSecureCoding;
+ (id)phoneNumberWithDigits:(id)arg1 countryCode:(id)arg2;
+ (id)phoneNumberWithCFPhoneNumberRef:(struct __CFPhoneNumber *)arg1;
@property(readonly) struct __CFPhoneNumber *phoneNumberRef; // @synthesize phoneNumberRef=_phoneNumberRef;
- (_Bool)isEqual:(id)arg1;
@property(readonly) NSString *unformattedInternationalRepresentation; // @dynamic unformattedInternationalRepresentation;
@property(readonly) NSString *formattedInternationalRepresentation; // @dynamic formattedInternationalRepresentation;
@property(readonly) NSString *formattedRepresentation; // @dynamic formattedRepresentation;
@property(readonly) NSString *countryCode; // @dynamic countryCode;
@property(readonly) NSString *digits; // @dynamic digits;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDigits:(id)arg1 countryCode:(id)arg2;
- (id)initWithCFPhoneNumberRef:(struct __CFPhoneNumber *)arg1;

@end

