//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MusicUI/MusicSongsViewController.h>

#import "MusicPickerOverlayDelegate.h"
#import "MusicViewControllerKeepLocalContainer.h"
#import "UIActionSheetDelegate.h"

@class MusicPlaylistActionsView, NSOperationQueue, NSString, UIActionSheet;

@interface MusicPlaylistSongsViewController : MusicSongsViewController <MusicPickerOverlayDelegate, MusicViewControllerKeepLocalContainer, UIActionSheetDelegate>
{
    MusicPlaylistActionsView *_actionsView;
    struct UIEdgeInsets _actionsViewContentInsetAdditions;
    UIActionSheet *_clearActionSheet;
    UIActionSheet *_deleteActionSheet;
    NSOperationQueue *_downloadabilityOperationQueue;
    BOOL _isCollectionKeptLocal;
    BOOL _isTransitioning;
    BOOL _isDownloading;
    int _downloadableSongCount;
}

+ (BOOL)_shouldDisplayActions;
+ (id)actionCellConfigurationClasses;
+ (BOOL)_supportsSearch;
+ (BOOL)_shouldPopWhenEmpty;
@property(readonly, nonatomic) BOOL isDownloading; // @synthesize isDownloading=_isDownloading;
@property(readonly, nonatomic) int downloadableSongCount; // @synthesize downloadableSongCount=_downloadableSongCount;
- (void).cxx_destruct;
- (void)_updateCloudPlaylist;
- (void)_updateDownloadabilityStateWithCanReloadActionRowsSynchronously:(BOOL)arg1 animated:(BOOL)arg2;
- (void)_updateActionsView;
- (id)_seedItem;
- (id)_playlistTitle;
- (id)_playlist;
- (BOOL)_allowsAddingSongs;
- (BOOL)_allowsEditing;
- (BOOL)_allowsIndividualTrackDeletion;
- (void)_playlistSongs_contentSizeCategoryDidChangeNotification:(id)arg1;
- (void)_geniusSaveAction:(id)arg1;
- (void)_geniusRefreshAction:(id)arg1;
- (void)_geniusNewAction:(id)arg1;
- (void)_editAction:(id)arg1;
- (void)_downloadAllButtonAction:(id)arg1;
- (void)_doneEditingAction:(id)arg1;
- (void)_deleteAction:(id)arg1;
- (void)_clearAction:(id)arg1;
- (void)_addItemsAction:(id)arg1;
- (id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 moveRowAtIndexPath:(id)arg2 toIndexPath:(id)arg3;
- (void)tableView:(id)arg1 commitEditingStyle:(int)arg2 forRowAtIndexPath:(id)arg3;
- (BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (BOOL)isCollectionKeptLocalForMediaItem:(id)arg1 inSection:(int)arg2;
- (void)pickerOverlayDidFinish:(id)arg1;
- (void)pickerOverlayRequestsFinish:(id)arg1;
- (BOOL)shouldShowActionCellConfiguration:(Class)arg1;
- (void)downloadManager:(id)arg1 didAddDownloads:(id)arg2 removeDownloads:(id)arg3;
- (void)reloadData;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)dealloc;
- (id)initWithDataSource:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

