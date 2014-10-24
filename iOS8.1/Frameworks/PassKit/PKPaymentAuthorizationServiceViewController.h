//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "PKAuthenticatorDelegate.h"
#import "PKPaymentAuthorizationServiceProtocol.h"
#import "PKPaymentOptionsViewControllerDelegate.h"
#import "UINavigationControllerDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSLayoutConstraint, NSMutableArray, NSString, PKAuthenticator, PKPaymentAuthorizationDataModel, PKPaymentAuthorizationFooterView, PKPaymentAuthorizationLayout, PKPaymentAuthorizationNavigationBar, PKPaymentAuthorizationTotalView, PKPaymentOptionsViewController, PKPaymentService, PKPaymentWebService, UITableView, UIView;

@interface PKPaymentAuthorizationServiceViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, UINavigationControllerDelegate, PKAuthenticatorDelegate, PKPaymentOptionsViewControllerDelegate, PKPaymentAuthorizationServiceProtocol>
{
    PKPaymentAuthorizationLayout *_layout;
    PKPaymentAuthorizationNavigationBar *_navBar;
    UIView *_contentView;
    UITableView *_detailTableView;
    PKPaymentAuthorizationTotalView *_totalView;
    PKPaymentAuthorizationFooterView *_footerView;
    NSLayoutConstraint *_contentViewTopConstraint;
    PKPaymentOptionsViewController *_paymentCardOptionsController;
    PKPaymentOptionsViewController *_shippingAddressOptionsController;
    PKPaymentOptionsViewController *_shippingMethodOptionsController;
    PKPaymentOptionsViewController *_shippingContactOptionsController;
    NSMutableArray *_clientCallbackBlocks;
    BOOL _awaitingClientCallbackReply;
    BOOL _hostApplicationResignedActive;
    BOOL _hostApplicationEnteredBackground;
    BOOL _treatingHostAsBackgrounded;
    unsigned int _state;
    PKPaymentAuthorizationDataModel *_model;
    PKPaymentService *_paymentService;
    PKPaymentWebService *_paymentWebService;
    PKAuthenticator *_authenticator;
    id <PKPaymentAuthorizationHostProtocol> _delegate;
}

@property(nonatomic) id <PKPaymentAuthorizationHostProtocol> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) PKAuthenticator *authenticator; // @synthesize authenticator=_authenticator;
@property(retain, nonatomic) PKPaymentWebService *paymentWebService; // @synthesize paymentWebService=_paymentWebService;
@property(retain, nonatomic) PKPaymentService *paymentService; // @synthesize paymentService=_paymentService;
@property(retain, nonatomic) PKPaymentAuthorizationDataModel *model; // @synthesize model=_model;
@property(nonatomic) unsigned int state; // @synthesize state=_state;
- (id)_transactionWithPaymentToken:(id)arg1;
- (void)_updatePreferredContentSize;
- (id)_paymentWithToken:(id)arg1;
- (void)_setupWithPaymentRequest:(id)arg1 fromAppWithLocalizedName:(id)arg2;
- (Class)_viewPresenterClassForDataItem:(id)arg1;
- (Class)_tableViewClassForDataItem:(id)arg1;
- (void)_processNextClientCallbackBlock;
- (void)_enqueueClientCallbackBlock:(CDUnknownBlockType)arg1;
- (void)_resumeWithNextState;
- (void)cancelPressed:(id)arg1;
- (void)_payWithPassbookPressed:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(BOOL)arg3;
- (void)paymentOptionsViewControllerDidFinish:(id)arg1;
- (void)presentPasscodeRemoteViewControllerWithClassName:(id)arg1 serviceBundleIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)authenticatorDidEncounterMatchMiss:(id)arg1;
- (void)authenticatorDidEncounterFingerOff:(id)arg1;
- (void)authenticatorDidEncounterFingerOn:(id)arg1;
- (void)_didSucceed;
- (void)_didFailWithFatalError:(id)arg1;
- (void)_didFailWithError:(id)arg1;
- (void)_didCancelWithParam:(id)arg1;
- (void)_didAuthorizePaymentWithToken:(id)arg1;
- (void)_didSelectShippingMethod:(id)arg1;
- (void)_didSelectShippingAddress:(id)arg1;
- (void)authorizationDidSelectShippingAddressCompleteWithStatus:(int)arg1 shippingMethods:(id)arg2 paymentSummaryItems:(id)arg3;
- (void)authorizationDidSelectShippingMethodCompleteWithStatus:(int)arg1 paymentSummaryItems:(id)arg2;
- (void)authorizationDidAuthorizePaymentCompleteWithStatus:(int)arg1;
- (void)_updateBackgroundedState:(BOOL)arg1;
- (void)_hostApplicationDidEnterBackground;
- (void)_hostApplicationWillEnterForeground;
- (void)handleHostApplicationDidBecomeActive;
- (void)handleHostApplicationWillResignActive:(BOOL)arg1;
- (void)handleHostApplicationDidCancel;
- (void)_processPaymentWithToken:(id)arg1;
- (void)_rewrapPayment:(id)arg1;
- (void)_authorizeTransactionWithCredential:(id)arg1;
- (void)_nonce:(id)arg1;
- (void)_trackClientCallbackProgress;
- (void)_selectOptionsForDataItem:(id)arg1;
- (void)_startEvaluation;
- (void)_suspendAuthentication;
- (void)_resumeAuthenticationWithPreviousError:(id)arg1;
- (void)_invalidPaymentDataWithParam:(id)arg1;
- (void)setState:(unsigned int)arg1 param:(id)arg2;
- (id)handlePaymentRequest:(id)arg1 fromAppWithLocalizedName:(id)arg2;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)_createSubviews;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
