/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "BBObserverDelegate-Protocol.h"
#import "SBIconListPageControlDelegate-Protocol.h"
#import "SBIconViewDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class BBObserver, NSMutableArray, NSMutableSet, NSTimer, SBDockIconListView, SBFolder, SBFolderScrollOffset, SBFolderSlidingView, SBFolderView, SBIcon, SBIconIndexPath, SBIconListPageControl, SBIconListView, SBIconModel, SBIconScrollView, SBLeafIcon, SBRootFolder, SBSearchController, SBSearchView, SBWallpaperNotchView, TPLCDTextView, UITouch, UIView;

@interface SBIconController : NSObject <UIScrollViewDelegate, SBIconListPageControlDelegate, SBIconViewDelegate, BBObserverDelegate>
{
    SBIconModel *_iconModel;
    SBRootFolder *_rootFolder;
    UIView *_contentView;
    SBIconScrollView *_scrollView;
    SBIconListPageControl *_pageControl;
    NSMutableArray *_rootIconLists;
    SBDockIconListView *_dock;
    UIView *_dockContainerView;
    BBObserver *_bbObserver;
    NSMutableSet *_displayIDsWithBadgingDisabled;
    SBFolderView *_folderView;
    NSMutableArray *_folderIconLists;
    SBFolder *_openFolder;
    SBFolder *_closingFolder;
    SBFolder *_folderToReopenWhenSwitcherCloses;
    SBFolder *_folderToOpenWhenScrollingEnds;
    int _wantsToScrollListIndex;
    BOOL _wantsToScrollAnimated;
    SBFolderScrollOffset *_openFolderScrollOffset;
    SBIconIndexPath *_openFolderIndexPath;
    id _currentListRepresentation;
    id _dockRepresentation;
    UIView *_slidingViewsContainer;
    SBFolderSlidingView *_upperSlidingView;
    SBFolderSlidingView *_lowerSlidingView;
    UIView *_upperIconsSlidingView;
    SBWallpaperNotchView *_slidingNotchView;
    SBIconListView *_ghostedIconListForFolder;
    SBIconListView *_ghostedIconListForSwitcher;
    int _currentIconListIndex;
    unsigned int _currentFolderIconListIndex;
    TPLCDTextView *_idleText;
    float _currentIdleTextOffset;
    SBSearchView *_searchView;
    SBSearchController *_searchController;
    int _orientation;
    SBIcon *_lastTappedIcon;
    double _lastTapTime;
    SBLeafIcon *_iconToReveal;
    SBIcon *_grabbedIcon;
    SBIcon *_recipientIcon;
    NSMutableArray *_iconsDroppedInToOrOutOfFolder;
    NSMutableArray *_insertionIndexPathsForDroppedIcons;
    unsigned int _numberOfDroppedIconsStillAnimatingIntoPlace;
    NSTimer *_closeFolderTimer;
    SBIconListView *_destinationIconList;
    unsigned int _destinationIndex;
    SBIcon *_lastTouchedIcon;
    NSTimer *_scrollPageTimer;
    unsigned int _didScroll:1;
    unsigned int _isEditing:1;
    unsigned int _animatedScrolling:1;
    unsigned int _scrollingToSearch:1;
    unsigned int _movedFromOrigin:1;
    unsigned int _disableUpdatingCurrentIconList:1;
    unsigned int _onWallpaper:1;
    unsigned int _animatingFolder:1;
    unsigned int _folderClosedWhileAnimatingOpen:1;
    unsigned int _grabbedIconHasEverEnteredFolderView:1;
    unsigned int _grabbedIconIsDraggedOutOfFolderView:1;
    BOOL _allowsUninstall;
    float _iconAlpha;
    float _searchViewAlpha;
    float _oldScrollOffset;
    UITouch *_lastTouch;
    struct CGPoint _dragPausePoint;
    NSTimer *_dragPauseTimer;
    NSTimer *_folderSpringloadTimer;
    BOOL _folderKeyboardIsAnimatingRotation;
    BOOL _isAnimatingDockForIconScatter;
    BOOL _isAnimatingDockFade;
}

+ (id)sharedInstance;
- (id)init;
- (void)configureBBObserver;
- (void)dealloc;
- (id)contentView;
- (struct CGRect)_dockContainerViewFrameForCurrentOrientation;
- (id)scrollView;
- (id)dockContainerView;
- (void)setShouldRasterizeFirstIconList:(BOOL)arg1;
- (id)rootIconListAtIndex:(int)arg1;
- (id)folderIconListAtIndex:(unsigned int)arg1;
- (void)prepareToResetRootIconLists;
- (void)resetRootIconLists;
- (void)_iconVisibilityChanged:(id)arg1;
- (void)setPageControlVisible:(BOOL)arg1;
- (void)setPageControlAlpha:(float)arg1;
- (void)showInfoAlertIfNeeded;
- (void)showCarrierDebuggingAlertIfNeeded;
- (BOOL)isScrolling;
- (BOOL)isFolderScrolling;
- (void)pageControl:(id)arg1 didRecieveTouchInDirection:(int)arg2;
- (int)lowestVisibleIconListIndexAndColumn:(int *)arg1 totalLists:(unsigned int)arg2 columnsPerList:(unsigned int)arg3;
- (void)updateCurrentIconListIndexAndVisibility;
- (void)resetCurrentVisibleIconListImageVisibilityAndJitterState;
- (id)currentRootIconList;
- (id)dock;
- (id)currentFolderIconList;
- (void)setDestinationIconList:(id)arg1;
- (BOOL)isShowingSearch;
- (int)currentIconListIndex;
- (BOOL)_iconCanBeGrabbed:(id)arg1;
- (BOOL)_shouldLockItemsInStoreDemoMode;
- (BOOL)iconAppearsOnCurrentPage:(id)arg1;
- (void)scrollToIconListContainingIcon:(id)arg1 animate:(BOOL)arg2;
- (void)scrollToIconListAtIndex:(int)arg1 animate:(BOOL)arg2;
- (int)orientation;
- (void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)didRotateFromInterfaceOrientation:(int)arg1;
- (void)updateContentSize;
- (void)updateRootIconListFrames;
- (void)updateIconListWallpaperState;
- (void)updateNumberOfRootIconLists;
- (void)removeEmptyIconList:(id)arg1 animate:(BOOL)arg2;
- (void)addNewIconsToDesignatedLocations:(id)arg1 saveIconState:(BOOL)arg2;
- (void)addNewIconToDesignatedLocation:(id)arg1 animate:(BOOL)arg2 scrollToList:(BOOL)arg3 saveIconState:(BOOL)arg4;
- (void)replaceIconAtPath:(id)arg1 withIcon:(id)arg2 saveState:(BOOL)arg3;
- (BOOL)iconsDisplayOnWallpaper;
- (void)setIconsDisplayOnWallpaper:(BOOL)arg1;
- (id)iconToReveal;
- (void)setIconToReveal:(id)arg1;
- (void)finishInstallingIcon;
- (void)scrollToIconDestination;
- (id)addEmptyListViewForFolder:(id)arg1;
- (id)placeIcon:(id)arg1 atIndexPath:(id)arg2 moveNow:(BOOL)arg3 layoutNow:(BOOL)arg4 pop:(BOOL)arg5;
- (id)insertIcon:(id)arg1 atIndexPath:(id)arg2 moveNow:(BOOL)arg3 pop:(BOOL)arg4;
- (id)insertIcon:(id)arg1 atIndexPath:(id)arg2 moveNow:(BOOL)arg3;
- (id)insertIcon:(id)arg1 intoListView:(id)arg2 iconIndex:(int)arg3 moveNow:(BOOL)arg4 pop:(BOOL)arg5;
- (id)insertIcon:(id)arg1 intoListView:(id)arg2 iconIndex:(int)arg3 moveNow:(BOOL)arg4;
- (void)updateGhostlyRequestersForIcon:(id)arg1 inListView:(id)arg2;
- (void)_iconAddedToList:(id)arg1;
- (void)removeIcon:(id)arg1 andCompactFolder:(BOOL)arg2 folderRef:(id *)arg3;
- (void)removeIcon:(id)arg1 compactFolder:(BOOL)arg2;
- (void)uninstallIconDidAnimate:(id)arg1 finished:(id)arg2 icon:(id)arg3;
- (void)setAllowsUninstall:(BOOL)arg1;
- (BOOL)allowsUninstall;
- (BOOL)canUninstallIcon:(id)arg1;
- (void)uninstallIcon:(id)arg1;
- (void)uninstallIcon:(id)arg1 animate:(BOOL)arg2;
- (void)lcdTextViewCompletedScroll:(id)arg1;
- (void)idleTextDidAnimate:(id)arg1 finished:(id)arg2 toText:(id)arg3;
- (void)updateNumberOfRowsWithDuration:(float)arg1;
- (BOOL)hasIdleModeText;
- (void)setIdleModeText:(id)arg1;
- (void)scatterWithDuration:(double)arg1 startTime:(double)arg2;
- (void)scatterWithDuration:(double)arg1 startTime:(double)arg2 fade:(BOOL)arg3;
- (void)unscatterWithDuration:(double)arg1 startTime:(double)arg2;
- (void)unscatterWithDuration:(double)arg1 startTime:(double)arg2 fade:(BOOL)arg3;
- (void)_finishedUnscattering;
- (void)finishedUnscatteringIconList:(id)arg1;
- (void)finishedUnscatteringSearchView;
- (BOOL)isAnimatingDockForIconScatter;
- (void)_showDockAnimationStopped:(id)arg1 finished:(id)arg2 context:(void *)arg3;
- (void)showDock:(BOOL)arg1 startTime:(double)arg2 duration:(double)arg3;
- (void)adjustViewsForTransition;
- (void)_lockStateChanged:(id)arg1;
- (void)_showSearchKeyboardIfNecessary:(BOOL)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)_scrollingDidFinish;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewWillBeginDecelerating:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)_launchIcon:(id)arg1;
- (void)iconWasDoubleTapped:(id)arg1;
- (void)iconWasTapped:(id)arg1;
- (void)_addEmptyListIfNecessary;
- (void)setIsEditing:(BOOL)arg1;
- (BOOL)isEditing;
- (id)_keyboard;
- (void)_keyboardWillShow:(id)arg1;
- (void)_keyboardWillHide:(id)arg1;
- (void)moveIconToWindow:(id)arg1;
- (void)moveIconFromWindow:(id)arg1 toIconList:(id)arg2;
- (void)restoreScrollingAndRotationAfterUngrab;
- (void)ungrabAnimation:(id)arg1 didFinish:(id)arg2 grabbedIcon:(id)arg3;
- (void)noteDownloadStateChanged;
- (void)noteDownloadingIconStateChanged:(id)arg1;
- (void)noteViewCovered;
- (void)setLastTouch:(id)arg1;
- (void)fixupBouncedIconsInFolder:(id)arg1 startingWithIndex:(int)arg2;
- (void)_dropIconInDestinationHole:(id)arg1;
- (void)setGrabbedIcon:(id)arg1;
- (id)grabbedIcon;
- (void)setRecipientIcon:(id)arg1 duration:(double)arg2;
- (id)lastTouchedIcon;
- (void)setLastTouchedIcon:(id)arg1;
- (void)overlapAnimationStopped:(id)arg1 finished:(id)arg2 oldRecipientIcon:(id)arg3;
- (id)recipientIcon;
- (id)destinationIconList;
- (void)cancelScrollTimer;
- (void)scrollLeft;
- (void)scrollRight;
- (void)cancelCloseFolderTimer;
- (void)closeFolderTimerFired;
- (void)setCloseFolderTimerIfNecessary;
- (void)cancelDragPauseTimer;
- (void)resetDragPauseTimer;
- (void)cancelFolderSpringloadTimer;
- (void)resetFolderSpringloadTimer;
- (void)noteGrabbedIconLocationChangedWithTouch:(id)arg1;
- (void)dragPauseTimerFired;
- (void)folderSpringloadTimerFired;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (void)noteGrabbedIconLocationChangedWithEvent:(id)arg1;
- (void)compactFolders:(id)arg1;
- (void)compactRootIconLists;
- (void)compactIconsInIconListsInFolder:(id)arg1 moveNow:(BOOL)arg2 limitToIconList:(id)arg3;
- (void)layoutIconLists:(float)arg1 domino:(BOOL)arg2 forceRelayout:(BOOL)arg3;
- (void)moveAnimation:(id)arg1 didFinish:(id)arg2 movePlan:(id)arg3;
- (void)moveIcon:(id)arg1 fromIconList:(id)arg2 toIndex:(int)arg3 toIconList:(id)arg4 animate:(BOOL)arg5;
- (void)moveIcon:(id)arg1 fromIconList:(id)arg2 toIndex:(int)arg3 toIconList:(id)arg4;
- (BOOL)iconAllowJitter:(id)arg1;
- (BOOL)iconPositionIsEditable:(id)arg1;
- (void)iconHandleLongPress:(id)arg1;
- (void)icon:(id)arg1 touchEnded:(BOOL)arg2;
- (void)iconTouchBegan:(id)arg1;
- (void)icon:(id)arg1 touchMovedWithEvent:(id)arg2;
- (BOOL)iconShouldAllowTap:(id)arg1;
- (void)iconTapped:(id)arg1;
- (BOOL)icon:(id)arg1 canReceiveGrabbedIcon:(id)arg2;
- (int)closeBoxTypeForIcon:(id)arg1;
- (void)iconCloseBoxTapped:(id)arg1;
- (BOOL)iconShouldPrepareGhostlyImage:(id)arg1;
- (BOOL)iconAllowsBadging:(id)arg1;
- (BOOL)iconViewDisplaysBadges:(id)arg1;
- (BOOL)_badgesAreDisabledForSectionInfo:(id)arg1;
- (void)_updateDisabledBadgesSetWithSections:(id)arg1 replacePrevious:(BOOL)arg2;
- (void)observer:(id)arg1 updateSectionInfo:(id)arg2;
@property(readonly, nonatomic) SBSearchController *searchController; // @synthesize searchController=_searchController;

@end

