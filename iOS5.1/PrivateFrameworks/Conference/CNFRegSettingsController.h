/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <Conference/CNFRegListController.h>

@class NSArray, NSMutableArray, NSNumber, NSString, PSSpecifier;

@interface CNFRegSettingsController : CNFRegListController
{
    PSSpecifier *_faceTimeEnabledGroupSpecifier;
    PSSpecifier *_faceTimeEnabledSpecifier;
    NSArray *_accountGroupSpecifiers;
    NSArray *_aliasGroupSpecifiers;
    NSArray *_callerIdGroupSpecifiers;
    PSSpecifier *_callerIdButtonSpecifier;
    PSSpecifier *_addAddressButtonSpecifier;
    PSSpecifier *_blankAddressSpecifier;
    NSString *_pendingAddress;
    NSMutableArray *_addresses;
    id _alertHandler;
    NSNumber *_delayedRefreshAnimatedFlag;
    struct {
        unsigned int listeningForReturnKeyPress:1;
        unsigned int appeared:1;
        unsigned int ignoringTextFieldChanges:1;
        unsigned int showEnableSwitch:1;
        unsigned int switchState:1;
    } _settingsFlags;
}

- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)dealloc;
- (id)bundle;
- (id)specifierList;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)controllerForRowAtIndexPath:(id)arg1;
- (BOOL)canBeShownFromSuspendedState;
- (BOOL)shouldReloadSpecifiersOnResume;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (id)_useableAccounts;
- (id)_emailAccounts;
- (id)_operationalAccounts;
- (void)formSheetViewWillDisappear;
- (void)formSheetViewDidDisappear;
- (void)willBecomeActive;
- (void)willResignActive;
- (id)logName;
- (id)customTitle;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2;
- (void)_setupAllListeners;
- (void)_tearDownAllListeners;
- (void)startListeningForReturnKey;
- (void)stopListeningForReturnKey;
- (void)returnKeyPressed:(id)arg1;
- (void)_cacheSpecifierGroup:(id)arg1 withSpecifiers:(id)arg2;
- (void)_cacheIndividualSpecifier:(id)arg1 includeInGroup:(char *)arg2;
- (void)_buildSpecifierCache:(id)arg1;
- (id)_switchFooterText;
- (void)_updateSwitch;
- (void)_updateSwitchDelayed;
- (void)setFaceTimeEnabled:(id)arg1 specifier:(id)arg2 animated:(BOOL)arg3;
- (void)setFaceTimeEnabled:(id)arg1 specifier:(id)arg2;
- (id)getFaceTimeEnabledForSpecifier:(id)arg1;
- (void)_refreshFaceTimeSettingsDelayed:(id)arg1;
- (void)refreshFaceTimeSettingsWithDelayAnimated:(BOOL)arg1;
- (void)refreshFaceTimeSettingsAnimated:(BOOL)arg1;
@property(nonatomic) BOOL showEnableSwitch;
- (void)showAllSettings:(BOOL)arg1 animated:(BOOL)arg2;
- (id)getAccountNameForSpecifier:(id)arg1;
- (void)_showAccountAlertForAccount:(id)arg1;
- (void)accountTappedWithSpecifier:(id)arg1;
- (id)accountSpecifiers;
- (void)_reloadSpecifier:(id)arg1 withBlock:(id)arg2;
- (id)_specifierIdentifierForAccount:(id)arg1;
- (id)createSpecifierForAccount:(id)arg1;
- (void)updateSpecifier:(id)arg1 withAccount:(id)arg2;
- (void)refreshAccountsAnimated:(BOOL)arg1;
- (BOOL)showAccounts:(BOOL)arg1 animated:(BOOL)arg2;
- (void)firstRunControllerDidFinish:(id)arg1 finished:(BOOL)arg2;
- (void)_showSignInController;
- (void)_showViewAccountControllerForAccount:(id)arg1;
- (void)_hideLocaleChooser;
- (void)_showLocaleChooserWithAccount:(id)arg1;
- (void)_setupAppearBlockForLocaleControllerWithAccount:(id)arg1;
- (void)viewAccountControllerDidFinish:(id)arg1 withAppleId:(id)arg2;
- (void)firstRunController:(id)arg1 finishedWithState:(unsigned int)arg2;
- (void)clearAccountCache;
- (id)aliasSpecifiers;
- (void)refreshAliasesAnimated:(BOOL)arg1;
- (id)specifierForAlias:(id)arg1;
- (void)refreshAliasSpecifier:(id)arg1;
- (void)updateSpecifier:(id)arg1 withAlias:(id)arg2;
- (BOOL)showAliases:(BOOL)arg1 animated:(BOOL)arg2;
- (BOOL)isShowingBlankAlias;
- (void)showBlankAlias:(BOOL)arg1 animated:(BOOL)arg2;
- (BOOL)isShowingAddButton;
- (void)showAddAliasButton:(BOOL)arg1 animated:(BOOL)arg2;
- (id)aliasForSpecifier:(id)arg1;
- (id)statusForAlias:(id)arg1;
- (void)addAddressTapped:(id)arg1;
- (void)_updateAddAliasButtonText;
- (id)getAddAliasTextForSpecifier:(id)arg1;
- (id)blankAliasTextField;
- (void)textFieldEmptyStateChanged:(id)arg1 forSpecifier:(id)arg2;
- (void)startEditingTextField;
- (void)_clearBlankAliasField;
- (void)stopEditingTextField:(BOOL)arg1;
- (id)pendingAddressForSpecifier:(id)arg1;
- (void)setPendingAddress:(id)arg1 forSpecifier:(id)arg2;
- (id)aliasWithIdentifier:(id)arg1;
- (id)createSpecifierForAlias:(id)arg1;
- (id)aliasDetailControllerForSpecifier:(id)arg1;
- (void)_showAliasValidationError:(id)arg1;
- (BOOL)showCallerId:(BOOL)arg1 animated:(BOOL)arg2;
- (id)callerIdDetailControllerForSpecifier:(id)arg1;
- (id)possibleCallerIdTitles;
- (id)possibleCallerIdValues;
- (id)currentCallerIdValue;
- (void)setCurrentCallerIdValue:(id)arg1;
- (void)reloadCallerIdValues;
- (void)refreshCallerIdAnimated:(BOOL)arg1;
- (int)indexOfLastSpecifierInGroup:(id)arg1;
- (int)groupIdForSpecifier:(id)arg1;
- (int)groupIdForSpecifierId:(id)arg1;
- (void)showSpecifiers:(id)arg1 afterGroupId:(id)arg2 animated:(BOOL)arg3;
- (void)_updateControllerStateAnimated:(BOOL)arg1;
- (BOOL)_popFromSettingsAnimated:(BOOL)arg1;
- (BOOL)popToFirstRunControllerAnimated:(BOOL)arg1;
- (BOOL)_shouldUseDisabledHandlers;
- (void)_setupAccountHandlers;
- (void)_handleFailedAccountReactivation:(id)arg1 error:(id)arg2;
- (void)_handleSuccessfulAccountReactivation:(id)arg1;
- (BOOL)_allAccountsAreDeactivated;
- (void)_setupAccountHandlersForDisabling;
- (void)_setupAccountHandlersForDisabledOperation;
- (void)_setupAccountHandlersForNormalOperation;
- (void)_handleConferenceConnected;
- (void)_handleFaceTimeConferenceStateChanged;
@property(copy, nonatomic) NSString *pendingAddress; // @synthesize pendingAddress=_pendingAddress;
@property(copy, nonatomic) id alertHandler; // @synthesize alertHandler=_alertHandler;

@end
