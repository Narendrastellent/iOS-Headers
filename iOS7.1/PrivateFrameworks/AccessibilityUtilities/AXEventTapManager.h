//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSMutableSet, NSRecursiveLock;

@interface AXEventTapManager : NSObject
{
    NSMutableArray *_eventTaps;
    NSMutableArray *_addedEventTapPairs;
    NSMutableSet *_removedEventTapIdentifiers;
    BOOL _isEnumeratingEventTaps;
    BOOL _shouldReorderEventTaps;
    CDUnknownBlockType _installationGSCallback;
    CDUnknownBlockType _installationHIDCallback;
    NSRecursiveLock *_eventTapLock;
    CDUnknownBlockType _installationEventRepPost;
}

+ (id)sharedManager;
@property(copy, nonatomic) CDUnknownBlockType installationEventRepPost; // @synthesize installationEventRepPost=_installationEventRepPost;
@property(copy, nonatomic) CDUnknownBlockType installationHIDCallback; // @synthesize installationHIDCallback=_installationHIDCallback;
@property(copy, nonatomic) CDUnknownBlockType installationGSCallback; // @synthesize installationGSCallback=_installationGSCallback;
- (void)removeEventTap:(id)arg1;
- (id)installEventTap:(CDUnknownBlockType)arg1 identifier:(id)arg2;
- (void)_installEventTap:(id)arg1;
- (void)setEventTapPriority:(id)arg1 priority:(int)arg2;
- (void)_reorderEventTaps;
- (BOOL)_processGSEvent:(CDStruct_cee7353d *)arg1;
- (BOOL)_processHIDEvent:(struct __IOHIDEvent *)arg1 taskPort:(unsigned int)arg2 bundleId:(id)arg3;
- (void)sendEvent:(id)arg1 afterTap:(id)arg2 useGSEvent:(BOOL)arg3 namedTaps:(id)arg4;
- (void)_enumerateEventTapPairsUsingBlock:(CDUnknownBlockType)arg1;
- (id)_copyCurrentEventTapPairs;
- (void)_setHIDEventTapCallback:(void *)arg1;
- (void)_setGSEventTapCallback:(void *)arg1;
- (id)description;
- (void)dealloc;
- (id)init;

@end
