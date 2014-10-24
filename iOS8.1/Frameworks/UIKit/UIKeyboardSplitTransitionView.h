//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CADisplayLink, NSArray, UIKeyboardSliceSet;

__attribute__((visibility("hidden")))
@interface UIKeyboardSplitTransitionView : UIView
{
    float _currentProgress;
    float _liftOffProgress;
    float _finishProgress;
    float _finishDuration;
    double _finalTransitionStartTime;
    CADisplayLink *_displayLink;
    CDUnknownBlockType _completionBlock;
    struct CGRect _startFrame;
    struct CGRect _endFrame;
    id <UIKeyboardKeyplaneTransitionDelegate> _transitionDelegate;
    id <UIKeyboardSplitTransitionDataSource> _transitionDataSource;
    BOOL _centerFilled;
    BOOL _isRebuilding;
    BOOL _isSplitTranslation;
    UIKeyboardSliceSet *_sliceSet;
}

@property(nonatomic) id <UIKeyboardSplitTransitionDataSource> splitTransitionDataSource; // @synthesize splitTransitionDataSource=_transitionDataSource;
@property(nonatomic) id <UIKeyboardKeyplaneTransitionDelegate> splitTransitionDelegate; // @synthesize splitTransitionDelegate=_transitionDelegate;
@property(copy) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
- (BOOL)showDictationKey;
- (BOOL)showIntlKey;
- (struct CGImage *)keyImageWithToken:(id)arg1;
- (struct CGImage *)splitKeyboardImage;
- (struct CGImage *)defaultKeyboardImage;
- (BOOL)canDisplayTransition;
- (void)updateWithProgress:(float)arg1;
- (void)finishWithProgress:(float)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)transitionToFinalState:(id)arg1;
- (void)finalizeTransition;
- (BOOL)transitionIsVisible;
- (void)rebuildControlKeys:(int)arg1;
- (void)rebuildFromKeyplane:(id)arg1 toKeyplane:(id)arg2 keyboardType:(int)arg3 orientation:(int)arg4;
- (void)transformForProgress:(float)arg1;
- (BOOL)shouldAllowRubberiness;
- (void)rebuildTransitionForSplitStyleChange:(id)arg1;
- (struct CGRect)rectEnclosingKeyplane:(id)arg1;
- (struct CGSize)sizeForShadowLayer:(int)arg1;
- (id)colorsForBackgroundLayer:(int)arg1;
- (void)initializeLayers;
- (id)bottomDropShadow;
- (id)outerCenterDropShadow;
- (id)centerDropShadow;
- (id)topDropShadow;
@property(readonly) NSArray *backgroundLayers;
@property(readonly) NSArray *shadowLayers;
- (void)setFrame:(struct CGRect)arg1;
- (void)didMoveToWindow;
- (void)dealloc;

@end
