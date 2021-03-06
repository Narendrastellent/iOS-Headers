//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MusicUI/MusicRadioStationCollectionViewCell.h>

@class UILabel;

@interface MusicRadioMyStationCollectionViewCell : MusicRadioStationCollectionViewCell
{
    UILabel *_subscriberLabel;
    BOOL _subscribed;
    int _subscriberCount;
}

+ (float)titleLabelMinYAdditions;
+ (float)titleLabelMaxHeight;
+ (id)stackItemReuseIdentifier;
+ (struct CGSize)stackBaseSizeForInterfaceOrientation:(int)arg1;
+ (struct CGSize)artworkSize;
@property(nonatomic) int subscriberCount; // @synthesize subscriberCount=_subscriberCount;
@property(nonatomic, getter=isSubscribed) BOOL subscribed; // @synthesize subscribed=_subscribed;
- (void).cxx_destruct;
- (void)_updateSubscriberLabel;
- (void)stackView:(id)arg1 applyAttributesToItem:(id)arg2 atIndex:(int)arg3;
- (void)setNowPlaying:(BOOL)arg1;
- (void)applyAttributesForInterfaceOrientation:(int)arg1;
- (void)tintColorDidChange;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

