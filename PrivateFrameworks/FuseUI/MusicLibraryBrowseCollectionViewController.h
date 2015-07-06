/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:40:36 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FuseUI/FuseUI-Structs.h>
#import <UIKit/UIViewController.h>
#import <FuseUI/MusicCollectionViewDelegate.h>
#import <FuseUI/MusicEntityPlaybackStatusControllerObserving.h>
#import <FuseUI/MusicEntityVerticalSectionHeaderViewDelegate.h>
#import <FuseUI/MusicClientContextConsuming.h>
#import <FuseUI/MusicIndexBarDataSource.h>
#import <FuseUI/MusicIndexBarScrollDelegate.h>
#import <FuseUI/MusicLibraryViewConfigurationConsuming.h>
#import <FuseUI/MusicSplitInitialStateProviding.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegateFlowLayout.h>

@protocol MusicLibraryBrowseCollectionViewControllerDelegate;
@class MusicCollectionView, MusicLibraryBrowseCollectionViewConfiguration, MusicEntityCollectionViewDescriptor, SKUIDynamicPageSectionIndexMapper, MusicEntityValueContext, MusicLibraryBrowseCollectionViewLayoutMetrics, MusicEntityPlayabilityController, MusicEntityPlaybackStatusController, MPAVController, NSMutableArray, MusicSectionEntityValueContext, NSString, MusicClientContext, UICollectionView, UICollectionViewFlowLayout, SKUIClientContext;

@interface MusicLibraryBrowseCollectionViewController : UIViewController <MusicCollectionViewDelegate, MusicEntityPlaybackStatusControllerObserving, MusicEntityVerticalSectionHeaderViewDelegate, MusicClientContextConsuming, MusicIndexBarDataSource, MusicIndexBarScrollDelegate, MusicLibraryViewConfigurationConsuming, MusicSplitInitialStateProviding, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout> {

	MusicCollectionView* _collectionView;
	MusicLibraryBrowseCollectionViewConfiguration* _collectionViewConfiguration;
	MusicEntityCollectionViewDescriptor* _entityViewDescriptor;
	SKUIDynamicPageSectionIndexMapper* _indexMapper;
	MusicEntityValueContext* _itemEntityValueContext;
	int _lastSelectionBehavior;
	MusicLibraryBrowseCollectionViewLayoutMetrics* _layoutMetrics;
	MusicEntityPlayabilityController* _playabilityController;
	MusicEntityPlaybackStatusController* _playbackStatusController;
	MPAVController* _player;
	NSMutableArray* _reusableCoalescingEntityValueProviders;
	MusicSectionEntityValueContext* _sectionEntityValueContext;
	CGSize _sizeForLayoutMetrics;
	Class _cellClass;
	NSString* _cellReuseIdentifier;
	MusicClientContext* _clientContext;
	id<MusicLibraryBrowseCollectionViewControllerDelegate> _delegate;

}

@property (nonatomic,readonly) MusicLibraryBrowseCollectionViewConfiguration * libraryViewConfiguration;              //@synthesize collectionViewConfiguration=_collectionViewConfiguration - In the implementation block
@property (nonatomic,readonly) MusicEntityCollectionViewDescriptor * entityViewDescriptor; 
@property (nonatomic,readonly) UICollectionView * collectionView;                                                     //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,readonly) UICollectionViewFlowLayout * collectionViewFlowLayout; 
@property (assign,nonatomic,__weak) id<MusicLibraryBrowseCollectionViewControllerDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
@property (getter=_cellClass,nonatomic,readonly) Class _cellClass;                                                    //@synthesize cellClass=_cellClass - In the implementation block
@property (getter=_cellReuseIdentifier,nonatomic,copy,readonly) NSString * _cellReuseIdentifier;                      //@synthesize cellReuseIdentifier=_cellReuseIdentifier - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) SKUIClientContext * clientContext; 
-(void)dealloc;
-(void)setDelegate:(id<MusicLibraryBrowseCollectionViewControllerDelegate>)arg1 ;
-(id<MusicLibraryBrowseCollectionViewControllerDelegate>)delegate;
-(int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInCollectionView:(id)arg1 ;
-(id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3 ;
-(char)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(void)collectionView:(id)arg1 willDisplaySupplementaryView:(id)arg2 forElementKind:(id)arg3 atIndexPath:(id)arg4 ;
-(void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(void)collectionView:(id)arg1 didEndDisplayingSupplementaryView:(id)arg2 forElementOfKind:(id)arg3 atIndexPath:(id)arg4 ;
-(unsigned)supportedInterfaceOrientations;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(UICollectionView *)collectionView;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(MusicLibraryBrowseCollectionViewConfiguration *)libraryViewConfiguration;
-(void)collectionView:(id)arg1 didSelectPlayButtonAction:(unsigned)arg2 forCell:(id)arg3 ;
-(void)collectionView:(id)arg1 didSelectContextualActionsButton:(id)arg2 forCell:(id)arg3 ;
-(void)collectionView:(id)arg1 didSelectAddButtonForCell:(id)arg2 ;
-(char)music_handleUserActivityContext:(id)arg1 containerItem:(id)arg2 ;
-(void)playbackStatusControllerPlaybackStatusDidChange:(id)arg1 ;
-(id)indexBarEntryAtIndex:(unsigned)arg1 ;
-(char)getContentOffset:(CGPoint*)arg1 forIndexBarEntryAtIndex:(unsigned)arg2 ;
-(id)initWithLibraryViewConfiguration:(id)arg1 ;
-(id)loadEntityViewDescriptor;
-(MusicEntityCollectionViewDescriptor *)entityViewDescriptor;
-(void)sectionHeaderViewDidSelectButton:(id)arg1 ;
-(void)_handleContentSizeCategoryDidChangeNotification:(id)arg1 ;
-(void)handleEntityProviderDidInvalidate;
-(UIEdgeInsets)_collectionViewLayoutMargins;
-(Class)_cellClass;
-(void)didSelectActionButtonInBrowseSectionHeaderView:(id)arg1 forSection:(int)arg2 ;
-(void)collectionViewTintColorDidChange:(id)arg1 ;
-(UICollectionViewFlowLayout *)collectionViewFlowLayout;
-(unsigned)maximumItemsPerRow;
-(void)handleContentSizeCategoryDidChange;
-(void)showInitialStateForSplitViewController;
-(void)_handleEntityProviderDidInvalidateNotification:(id)arg1 ;
-(void)_entityPlayabilityControllerDidChangeNotification:(id)arg1 ;
-(void)_updateMetricsOfCollectionViewFlowLayout:(id)arg1 notifyDelegate:(char)arg2 ;
-(void)_updateFlatteningToSingleSectionPolicyAllowingCollectionViewReload:(char)arg1 ;
-(id)_entityValueContextAtIndexPath:(id)arg1 ;
-(void)_configureEntityValueContextOutput:(id)arg1 forIndexPath:(id)arg2 ;
-(void)_presentContextualActionsWithEntityValueContext:(id)arg1 fromButton:(id)arg2 ;
-(void)_updatePlaybackStatusForVisibleCells;
-(char)_isEntityValueContextDisabled:(id)arg1 ;
-(id)_sectionEntityValueContextForIndex:(unsigned)arg1 ;
-(void)_recycleCoalescingEntityValueProvider:(id)arg1 ;
-(id)_dequeueCoalescingEntityValueProvider;
-(void)_updatePlaybackStatusForCell:(id)arg1 withEntityValueContext:(id)arg2 ;
-(void)_updateEntityDisabledStateForVisibleCells;
-(void)_updateEntityDisabledStateForCell:(id)arg1 withEntityValueContext:(id)arg2 ;
-(void)_invalidateLayoutMetrics;
-(id)_layoutMetrics;
-(NSString *)_cellReuseIdentifier;
-(void)setClientContext:(SKUIClientContext *)arg1 ;
-(SKUIClientContext *)clientContext;
-(unsigned)numberOfIndexBarEntries;
@end

