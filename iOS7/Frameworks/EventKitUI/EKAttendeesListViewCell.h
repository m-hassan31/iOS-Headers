/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UITableViewCell.h"

@class EKParticipant, UIImage;

@interface EKAttendeesListViewCell : UITableViewCell
{
    EKParticipant *_attendee;
    _Bool _showStatus;
    UIImage *_attendingImage;
    UIImage *_maybeImage;
    UIImage *_notAttendingImage;
    UIImage *_pendingImage;
}

- (void).cxx_destruct;
- (id)_pendingImage;
- (id)_notAttendingImage;
- (id)_maybeImage;
- (id)_attendingImage;
- (id)_imageForStatus:(int)arg1;
- (void)setAttendee:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 attendee:(id)arg3 showStatusImage:(_Bool)arg4;

@end

