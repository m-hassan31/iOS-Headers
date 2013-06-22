/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "CAMediaTiming-Protocol.h"
#import "CAPropertyInfo-Protocol.h"
#import "NSCoding-Protocol.h"

@class NSArray, NSDictionary, NSString;

@interface CAEmitterCell : NSObject <CAPropertyInfo, NSCoding, CAMediaTiming>
{
    void *_attr[2];
    void *_state;
    unsigned int _flags;
}

+ (BOOL)CA_automaticallyNotifiesObservers:(Class)arg1;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;
+ (id)defaultValueForKey:(id)arg1;
+ (id)emitterCell;
+ (id)properties;
@property(copy) NSArray *emitterCells;
@property float minificationFilterBias;
@property(copy) NSString *minificationFilter;
@property(copy) NSString *magnificationFilter;
@property struct CGRect contentsRect;
@property(retain) id contents;
@property float alphaSpeed;
@property float alphaRange;
@property float blueSpeed;
@property float blueRange;
@property float greenSpeed;
@property float greenRange;
@property float redSpeed;
@property float redRange;
@property struct CGColor *color;
@property float spinRange;
@property float spin;
@property float scaleSpeed;
@property float scaleRange;
@property float scale;
@property float zAcceleration;
@property float yAcceleration;
@property float xAcceleration;
@property float velocityRange;
@property float velocity;
@property float emissionRange;
@property float emissionLongitude;
@property float emissionLatitude;
@property float lifetimeRange;
@property float lifetime;
@property float birthRate;
@property(copy) NSDictionary *style;
@property(getter=isEnabled) BOOL enabled;
@property(copy) NSString *name;
@property(copy) NSString *fillMode;
@property BOOL autoreverses;
@property double repeatDuration;
@property float repeatCount;
@property float speed;
@property double duration;
@property double timeOffset;
@property double beginTime;
- (id)debugDescription;
- (void)setValue:(id)arg1 forKeyPath:(id)arg2;
- (id)valueForKeyPath:(id)arg1;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (id)valueForUndefinedKey:(id)arg1;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (id)valueForKey:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)shouldArchiveValueForKey:(id)arg1;
- (struct Object *)CA_copyRenderValue;
- (void)CA_prepareRenderValue;
- (void)dealloc;

@end
