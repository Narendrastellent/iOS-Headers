//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIButton;

@interface CKInlineAudioReplyButtonController : NSObject
{
    BOOL _started;
    id <CKInlineAudioReplyButtonDelegate> _delegate;
    UIButton *_startButton;
    UIButton *_stopButton;
    double _holdThreshold;
    double _touchDownTime;
}

@property(nonatomic, getter=isStarted) BOOL started; // @synthesize started=_started;
@property(nonatomic) double touchDownTime; // @synthesize touchDownTime=_touchDownTime;
@property(nonatomic) double holdThreshold; // @synthesize holdThreshold=_holdThreshold;
@property(retain, nonatomic) UIButton *stopButton; // @synthesize stopButton=_stopButton;
@property(retain, nonatomic) UIButton *startButton; // @synthesize startButton=_startButton;
@property(nonatomic) id <CKInlineAudioReplyButtonDelegate> delegate; // @synthesize delegate=_delegate;
- (void)touchDragExit:(id)arg1;
- (void)touchDragEnter:(id)arg1;
- (void)touchUpInStopButton:(id)arg1;
- (void)touchUpOutsideStartButton:(id)arg1 event:(id)arg2;
- (void)touchUpInStartButton:(id)arg1 event:(id)arg2;
- (void)touchDownInStartButton:(id)arg1 event:(id)arg2;
- (void)dealloc;
- (id)initWithStartButton:(id)arg1 stopButton:(id)arg2;

@end

