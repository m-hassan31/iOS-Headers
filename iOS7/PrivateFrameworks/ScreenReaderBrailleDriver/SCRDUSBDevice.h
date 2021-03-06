/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSString;

@interface SCRDUSBDevice : NSObject
{
    struct IOUSBDeviceStruct300 **_device;
    struct IOUSBInterfaceStruct220 **_interface;
    _Bool _isOpen;
    _Bool _isConfigured;
    NSString *_privateRunLoopMode;
    struct IONotificationPort *_notificationPort;
    unsigned int _notification;
}

- (_Bool)clearPipe:(unsigned char)arg1 bothEnds:(_Bool)arg2;
- (void)abortPipe:(unsigned char)arg1;
- (void)registerForDisconnectNotifications:(_Bool)arg1;
- (_Bool)getInformationForPipe:(unsigned char)arg1 direction:(char *)arg2 number:(char *)arg3 transferType:(char *)arg4 maxPacketSize:(unsigned short *)arg5 interval:(char *)arg6;
- (unsigned long long)_transferData:(void *)arg1 withSize:(unsigned long long)arg2 toPipe:(unsigned char)arg3 withTimeout:(double)arg4 withFunction:(void *)arg5;
- (unsigned long long)readData:(void *)arg1 withSize:(unsigned long long)arg2 fromBulkPipe:(unsigned char)arg3 withNoDataTimeout:(unsigned int)arg4 andCompletionTimeOut:(unsigned int)arg5;
- (_Bool)readData:(void *)arg1 withSize:(unsigned long long *)arg2 fromPipe:(unsigned char)arg3;
- (unsigned long long)readData:(void *)arg1 withSize:(unsigned long long)arg2 fromPipe:(unsigned char)arg3 withTimeout:(double)arg4;
- (_Bool)writeData:(void *)arg1 withSize:(unsigned long long)arg2 toBulkPipe:(unsigned char)arg3 withNoDataTimeout:(unsigned int)arg4 andCompletionTimeOut:(unsigned int)arg5;
- (unsigned long long)writeData:(void *)arg1 withSize:(unsigned long long)arg2 toPipe:(unsigned char)arg3 withTimeout:(double)arg4;
- (_Bool)sendControlRequest:(unsigned char)arg1 type:(unsigned char)arg2 value:(unsigned short)arg3 index:(unsigned short)arg4 data:(void *)arg5 size:(unsigned short)arg6 sizeTransferred:(unsigned long long *)arg7 pipe:(unsigned char)arg8 timeout:(double)arg9;
- (_Bool)setAlternateInterface:(unsigned char)arg1;
- (_Bool)setInterface:(unsigned char)arg1;
- (_Bool)setConfiguration:(unsigned char)arg1;
- (unsigned char)numberOfConfigurations;
- (_Bool)reset;
- (int)product;
- (int)vendor;
- (_Bool)isConfigured;
- (_Bool)isOpen;
- (_Bool)close;
- (_Bool)openWithSeize:(_Bool)arg1;
- (_Bool)open;
- (void)dealloc;
- (id)initWithIOObject:(unsigned int)arg1;

@end

