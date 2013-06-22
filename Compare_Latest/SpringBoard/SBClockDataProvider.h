/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "BBRemoteDataProvider-Protocol.h"

@class BBBulletinRequest, BBDataProviderProxy, NSTimer, UILocalNotification;

@interface SBClockDataProvider : NSObject <BBRemoteDataProvider>
{
    NSTimer *_alarmUpdateTimer;
    BBDataProviderProxy *_dataProviderProxy;
    UILocalNotification *_nextAlarmForToday;
    BBBulletinRequest *_nextTodayAlarmBulletin;
    UILocalNotification *_firstAlarmForTomorrow;
    BBBulletinRequest *_nextTomorrowAlarmBulletin;
}

+ (id)sharedInstance;
- (id)sortDescriptors;
- (id)bulletinsWithRequestParameters:(id)arg1 lastCleared:(id)arg2;
- (id)bulletinsFilteredBy:(unsigned int)arg1 count:(unsigned int)arg2 lastCleared:(id)arg3;
- (id)defaultSectionInfo;
- (id)sectionIdentifier;
- (id)_alarmMessageForNotification:(id)arg1 withSingleAlarmFormat:(BOOL)arg2;
- (void)_publishAlarmsWithScheduledNotifications:(id)arg1;
- (id)_nextAlarmForDate:(id)arg1 withNotifications:(id)arg2;
- (void)_snoozedAlarmRefired:(id)arg1;
- (id)_bulletinRequestForSnoozedAlarm:(id)arg1;
- (void)_handleAlarmSnoozedNotification:(id)arg1;
- (id)_bulletinRequestForTimerNotification:(id)arg1;
- (void)_publishTimerInScheduledNotifications:(id)arg1;
- (id)_scheduledNotifications;
- (void)_handlePossibleAlarmNotificationUpdate:(id)arg1;
- (void)_handleClockNotificationUpdate:(id)arg1;
- (void)dealloc;
- (id)init;

@end
