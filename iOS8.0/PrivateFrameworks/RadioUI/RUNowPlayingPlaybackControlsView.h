//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MPUNowPlayingPlaybackControlsView.h"

@class UIButton;

@interface RUNowPlayingPlaybackControlsView : MPUNowPlayingPlaybackControlsView
{
    UIButton *_infoButton;
    BOOL _isWide;
}

@property(readonly, nonatomic) UIButton *infoButton; // @synthesize infoButton=_infoButton;
- (void).cxx_destruct;
- (void)_updateSizeClass;
- (BOOL)_isRadioItem;
- (void)_destroyInfoButtonAnimated:(BOOL)arg1;
- (void)_infoButtonAction:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (float)_volumeBottomVerticalInsetPhone;
- (void)_updateForItemDidChangeAnimated:(BOOL)arg1;
- (float)_transportControlsLastResortVerticalOffsetPhone;
- (float)_titlesLastResortVerticalOffsetPhone;
- (BOOL)_shouldAddBottomGap;
- (struct CGRect)_boundsForCenteringCreateActivityIndicatorView;
- (Class)_transportControlsClass;
- (void)setShowingCreateLoadingIndicator:(BOOL)arg1;
- (id)newProgressIndicator;
- (void)layoutSubviews;
- (void)dealloc;

// Remaining properties
@property(nonatomic) __weak id <RUNowPlayingPlaybackControlsViewDelegate><MPTransportControlsTarget> delegate;

@end
