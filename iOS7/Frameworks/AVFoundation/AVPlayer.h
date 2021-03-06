/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class AVPlayerInternal, NSError;

@interface AVPlayer : NSObject
{
    AVPlayerInternal *_player;
}

+ (_Bool)automaticallyNotifiesObserversOfUsesAirPlayVideoWhileAirPlayScreenIsActive;
+ (_Bool)automaticallyNotifiesObserversOfAirPlayVideoActive;
+ (_Bool)automaticallyNotifiesObserversOfAllowsAirPlayVideo;
+ (_Bool)automaticallyNotifiesObserversOfUsesAudioOnlyModeForExternalPlayback;
+ (_Bool)automaticallyNotifiesObserversOfExternalPlaybackActive;
+ (_Bool)automaticallyNotifiesObserversOfUsesExternalPlaybackWhileExternalScreenIsActive;
+ (_Bool)automaticallyNotifiesObserversOfAllowsExternalPlayback;
+ (id)keyPathsForValuesAffectingClosedCaptionDisplayEnabled;
+ (_Bool)automaticallyNotifiesObserversOfClosedCaptionDisplayEnabled;
+ (id)keyPathsForValuesAffectingActionAtItemEnd;
+ (_Bool)automaticallyNotifiesObserversOfActionAtItemEnd;
+ (id)keyPathsForValuesAffectingMuted;
+ (_Bool)automaticallyNotifiesObserversOfMuted;
+ (id)keyPathsForValuesAffectingVolume;
+ (_Bool)automaticallyNotifiesObserversOfVolume;
+ (_Bool)automaticallyNotifiesObserversOfVibrationPattern;
+ (_Bool)automaticallyNotifiesObserversOfUserVolume;
+ (_Bool)automaticallyNotifiesObserversOfMasterClock;
+ (id)keyPathsForValuesAffectingRate;
+ (_Bool)automaticallyNotifiesObserversOfRate;
+ (_Bool)automaticallyNotifiesObserversOfCurrentItem;
+ (id)playerWithPlayerItem:(id)arg1;
+ (id)playerWithURL:(id)arg1;
+ (void)initialize;
- (void)_logPerformanceDataForCurrentItem;
- (id)_copyPerformanceDataForCurrentItem;
- (void)_logPerformanceDataForPreviousItem;
- (_Bool)_shouldLogPerformanceData;
- (void)_checkDefaultsWriteForPerformanceLogging;
- (id)_currentSubtitlesPayload;
- (void)_setCurrentSubtitlesPayload:(id)arg1;
- (void)_setFigPlaybackItemToMakeCurrent:(struct OpaqueFigPlaybackItem *)arg1;
- (void)_removeFPListeners;
- (void)_addFPListeners;
- (id)_fpNotificationNames;
- (void)_setNeroVideoGravityOnFigPlayer;
- (void)setExternalPlaybackVideoGravity:(id)arg1;
- (id)externalPlaybackVideoGravity;
- (void)_addLayer:(id)arg1;
- (void)_removeLayer:(id)arg1;
- (void)_detachLayersFromFigPlayer;
- (void)_attachLayersToFigPlayer;
- (void)_conformContentLayer:(id)arg1 toSize:(struct CGSize)arg2;
- (id)_playerLayers;
- (id)_pixelBufferAttributeMediator;
- (void)_removeAllLayers;
- (void)removeTimeObserver:(id)arg1;
- (id)addBoundaryTimeObserverForTimes:(id)arg1 queue:(id)arg2 usingBlock:(id)arg3;
- (id)addPeriodicTimeObserverForInterval:(CDStruct_1b6d18a9)arg1 queue:(id)arg2 usingBlock:(id)arg3;
- (void)replaceCurrentItemWithPlayerItem:(id)arg1;
- (void)pause;
- (void)play;
- (void)setUsesAirPlayVideoWhileAirPlayScreenIsActive:(_Bool)arg1;
- (_Bool)usesAirPlayVideoWhileAirPlayScreenIsActive;
- (_Bool)isAirPlayVideoActive;
- (_Bool)_airPlayVideoActive;
- (void)setAllowsAirPlayVideo:(_Bool)arg1;
- (_Bool)allowsAirPlayVideo;
- (void)setUsesAudioOnlyModeForExternalPlayback:(_Bool)arg1;
- (_Bool)usesAudioOnlyModeForExternalPlayback;
- (_Bool)_usesAudioOnlyModeForExternalPlayback;
- (long long)externalPlaybackType;
- (_Bool)isExternalPlaybackActive;
- (_Bool)_externalPlaybackActive;
- (void)setUsesExternalPlaybackWhileExternalScreenIsActive:(_Bool)arg1;
- (_Bool)usesExternalPlaybackWhileExternalScreenIsActive;
- (_Bool)_usesExternalPlaybackWhileExternalScreenIsActive;
- (void)setAllowsExternalPlayback:(_Bool)arg1;
- (_Bool)allowsExternalPlayback;
- (_Bool)_allowsExternalPlayback;
- (void)setClosedCaptionDisplayEnabled:(_Bool)arg1;
- (_Bool)isClosedCaptionDisplayEnabled;
- (_Bool)_isClosedCaptionDisplayEnabled;
- (void)setActionAtItemEnd:(long long)arg1;
- (void)_setActionAtItemEnd:(long long)arg1 allowingAdvance:(_Bool)arg2;
- (long long)actionAtItemEnd;
- (long long)_actionAtItemEnd;
- (long long)_defaultActionAtItemEnd;
- (void)setMuted:(_Bool)arg1;
- (_Bool)isMuted;
- (_Bool)_isMuted;
- (void)setVolume:(float)arg1;
- (float)volume;
- (float)_playerVolume;
- (void)setVibrationPattern:(id)arg1;
- (id)vibrationPattern;
- (void)_setUserVolume:(float)arg1;
- (float)_userVolume;
- (void)setMasterClock:(struct OpaqueCMClock *)arg1;
- (struct OpaqueCMClock *)masterClock;
- (void)prerollOperationDidComplete:(_Bool)arg1 notificationPayload:(struct __CFDictionary *)arg2;
- (void)cancelPendingPrerolls;
- (void)prerollAtRate:(float)arg1 completionHandler:(id)arg2;
- (id)_unregisterAndReturnRetainedPrerollCompletionHandler;
- (int)_cancelPendingPrerollAndRegisterPrerollCompletionHandler:(id)arg1;
- (int)_createPrerollID;
- (void)setRate:(float)arg1 time:(CDStruct_1b6d18a9)arg2 atHostTime:(CDStruct_1b6d18a9)arg3;
- (void)seekToTime:(CDStruct_1b6d18a9)arg1 toleranceBefore:(CDStruct_1b6d18a9)arg2 toleranceAfter:(CDStruct_1b6d18a9)arg3 completionHandler:(id)arg4;
- (void)seekToTime:(CDStruct_1b6d18a9)arg1 completionHandler:(id)arg2;
- (void)seekToTime:(CDStruct_1b6d18a9)arg1 toleranceBefore:(CDStruct_1b6d18a9)arg2 toleranceAfter:(CDStruct_1b6d18a9)arg3;
- (void)seekToTime:(CDStruct_1b6d18a9)arg1;
- (void)seekToDate:(id)arg1 completionHandler:(id)arg2;
- (void)seekToDate:(id)arg1;
- (CDStruct_1b6d18a9)currentTime;
- (void)setRate:(float)arg1;
- (void)setRate:(float)arg1 withVolumeRampDuration:(CDStruct_1b6d18a9)arg2;
- (float)rate;
- (float)_rate;
- (void)_removeAllItems;
- (id)_items;
- (void)_enumerateItemsUsingBlock:(id)arg1;
- (_Bool)_removeItem:(id)arg1;
- (void)_coordinateWithRemovalOfItem:(id)arg1;
- (_Bool)_attachItem:(id)arg1 andPerformOperation:(long long)arg2 withObject:(id)arg3;
- (void)setExpectedAssetTypes:(id)arg1;
- (id)expectedAssetTypes;
- (void)_createPlayer:(long long)arg1 item:(id)arg2 preparationRequested:(_Bool)arg3 completionHandler:(id)arg4;
- (_Bool)_insertItem:(id)arg1 afterItem:(id)arg2;
- (void)prepareItem:(id)arg1 withCompletionHandler:(id)arg2;
- (_Bool)_insertPlaybackItemOfItem:(id)arg1 inPlayerQueueAfterPlaybackItemOfItem:(id)arg2;
- (void)_advanceCurrentItemAccordingToFigPlaybackItem:(struct OpaqueFigPlaybackItem *)arg1;
- (void)_currentItemStatusIsReadyToPlay;
- (void)_setCurrentItem:(id)arg1;
- (id)currentItem;
- (id)_currentItem;
- (void)_playerDestinationPixelBufferAttributesDidChange:(id)arg1;
- (void)_changeStatusToFailedWithError:(id)arg1;
@property(readonly, nonatomic) NSError *error;
@property(readonly, nonatomic) long long status;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (id)valueForUndefinedKey:(id)arg1;
- (void)addObserver:(id)arg1 forKeyPath:(id)arg2 options:(unsigned long long)arg3 context:(void *)arg4;
- (void)didChangeValueForKey:(id)arg1;
- (_Bool)_isChangingValueForKey:(id)arg1;
- (void)willChangeValueForKey:(id)arg1;
- (void)_didAccessKVOForKey:(id)arg1;
- (void)_willAccessKVOForKey:(id)arg1;
- (void)_setCachedValue:(id)arg1 forKey:(id)arg2;
- (id)_cachedValueForKey:(id)arg1;
- (id)_propertyStorage;
- (struct OpaqueFigPlayer *)_figPlayer;
- (id)_stateDispatchQueue;
- (id)dispatchQueue;
- (id)_weakReference;
- (void)finalize;
- (void)dealloc;
- (id)initWithDispatchQueue:(id)arg1;
- (id)init;
- (id)initWithURL:(id)arg1;
- (id)initWithPlayerItem:(id)arg1;

@end

