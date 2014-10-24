//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class NSArray, NSLayoutConstraint, UIActivityIndicatorView, UIImageView, UILabel;

@interface EKUIInviteesViewNotRespondedInviteesCell : UITableViewCell
{
    BOOL _showSpinner;
    UILabel *_nameLabel;
    UILabel *_commentLabel;
    UIImageView *_availabilityTypeImageView;
    UIActivityIndicatorView *_spinner;
    NSArray *_persistentConstraints;
    NSArray *_removableConstraints;
    NSLayoutConstraint *_minimumHeightConstraint;
    NSLayoutConstraint *_nameBaselineToTopConstraint;
}

+ (id)_commentLabelFont;
+ (id)_nameLabelFont;
+ (float)_leftTextInset;
@property(retain, nonatomic) NSLayoutConstraint *nameBaselineToTopConstraint; // @synthesize nameBaselineToTopConstraint=_nameBaselineToTopConstraint;
@property(retain, nonatomic) NSLayoutConstraint *minimumHeightConstraint; // @synthesize minimumHeightConstraint=_minimumHeightConstraint;
@property(retain, nonatomic) NSArray *removableConstraints; // @synthesize removableConstraints=_removableConstraints;
@property(retain, nonatomic) NSArray *persistentConstraints; // @synthesize persistentConstraints=_persistentConstraints;
@property(nonatomic) BOOL showSpinner; // @synthesize showSpinner=_showSpinner;
@property(retain, nonatomic) UIActivityIndicatorView *spinner; // @synthesize spinner=_spinner;
@property(retain, nonatomic) UIImageView *availabilityTypeImageView; // @synthesize availabilityTypeImageView=_availabilityTypeImageView;
@property(retain, nonatomic) UILabel *commentLabel; // @synthesize commentLabel=_commentLabel;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
- (void).cxx_destruct;
- (void)updateWithParticipantForSorting:(id)arg1 availabilityType:(int)arg2 showSpinner:(BOOL)arg3 animated:(BOOL)arg4;
- (void)updateConstraints;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;

@end
