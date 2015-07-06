/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:40:39 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FuseUI/FuseUI-Structs.h>
#import <UIKit/UIViewController.h>
#import <FuseUI/MusicLibraryBrowseTableViewControllerDelegate.h>
#import <FuseUI/MusicProductAdditionalMetadataViewControllerDelegate.h>
#import <FuseUI/MusicVerticalScrollingContainerViewControllerDelegate.h>
#import <FuseUI/MusicClientContextConsuming.h>
#import <FuseUI/MusicMediaDetailSplitViewController.h>

@protocol MusicEntityProviding, MusicMediaDetailSplitViewControllerDelegate;
@class MusicProductAdditionalMetadataViewController, MusicProductTracklistTableViewConfiguration, MusicEntityValueContext, MusicProductTracklistTableViewController, MusicVerticalScrollingContainerViewController, MusicClientContext, UIViewController, MusicMediaDetailTintInformation, UIImage, NSString, UIScrollView;

@interface MusicMediaProductSplitMainViewController : UIViewController <MusicLibraryBrowseTableViewControllerDelegate, MusicProductAdditionalMetadataViewControllerDelegate, MusicVerticalScrollingContainerViewControllerDelegate, MusicClientContextConsuming, MusicMediaDetailSplitViewController> {

	int _presentationSource;
	MusicProductAdditionalMetadataViewController* _productAdditionalMetadataViewController;
	MusicProductTracklistTableViewConfiguration* _tracklistTableViewConfiguration;
	UIEdgeInsets _verticalScrollingContainerContentInsetAdditions;
	char _forContentCreation;
	MusicEntityValueContext* _containerEntityValueContext;
	MusicProductTracklistTableViewController* _tracklistTableViewController;
	MusicVerticalScrollingContainerViewController* _verticalScrollingContainerViewController;
	MusicClientContext* _clientContext;
	id<MusicEntityProviding> _containerEntityProvider;
	UIViewController* _headerContentViewController;
	MusicMediaDetailTintInformation* _mediaDetailTintInformation;
	id<MusicMediaDetailSplitViewControllerDelegate> _mediaSplitViewControllerDelegate;
	id<MusicEntityProviding> _tracklistEntityProvider;
	unsigned _editableComponents;
	UIImage* _editedContentArtworkImage;
	NSString* _editedContentTitle;
	UIViewController* _relatedContentViewController;
	id<MusicEntityProviding> __contextualActionsOverrideTracklistEntityProvider;

}

@property (nonatomic,retain) MusicClientContext * clientContext;                                                                       //@synthesize clientContext=_clientContext - In the implementation block
@property (nonatomic,readonly) id<MusicEntityProviding> containerEntityProvider;                                                       //@synthesize containerEntityProvider=_containerEntityProvider - In the implementation block
@property (getter=isForContentCreation,nonatomic,readonly) char forContentCreation;                                                    //@synthesize forContentCreation=_forContentCreation - In the implementation block
@property (nonatomic,retain) UIViewController * headerContentViewController;                                                           //@synthesize headerContentViewController=_headerContentViewController - In the implementation block
@property (nonatomic,copy) MusicMediaDetailTintInformation * mediaDetailTintInformation;                                               //@synthesize mediaDetailTintInformation=_mediaDetailTintInformation - In the implementation block
@property (assign,nonatomic,__weak) id<MusicMediaDetailSplitViewControllerDelegate> mediaSplitViewControllerDelegate;                  //@synthesize mediaSplitViewControllerDelegate=_mediaSplitViewControllerDelegate - In the implementation block
@property (nonatomic,readonly) int presentationSource;                                                                                 //@synthesize presentationSource=_presentationSource - In the implementation block
@property (nonatomic,readonly) id<MusicEntityProviding> tracklistEntityProvider;                                                       //@synthesize tracklistEntityProvider=_tracklistEntityProvider - In the implementation block
@property (assign,nonatomic) unsigned editableComponents;                                                                              //@synthesize editableComponents=_editableComponents - In the implementation block
@property (nonatomic,retain) UIImage * editedContentArtworkImage;                                                                      //@synthesize editedContentArtworkImage=_editedContentArtworkImage - In the implementation block
@property (nonatomic,copy) NSString * editedContentTitle;                                                                              //@synthesize editedContentTitle=_editedContentTitle - In the implementation block
@property (nonatomic,retain) UIViewController * relatedContentViewController;                                                          //@synthesize relatedContentViewController=_relatedContentViewController - In the implementation block
@property (nonatomic,readonly) UIScrollView * containerScrollView; 
@property (nonatomic,readonly) MusicEntityValueContext * _containerEntityValueContext;                                                 //@synthesize containerEntityValueContext=_containerEntityValueContext - In the implementation block
@property (nonatomic,readonly) id<MusicEntityProviding> _contextualActionsOverrideTracklistEntityProvider;                             //@synthesize _contextualActionsOverrideTracklistEntityProvider=__contextualActionsOverrideTracklistEntityProvider - In the implementation block
@property (nonatomic,readonly) MusicProductTracklistTableViewController * _tracklistTableViewController;                               //@synthesize tracklistTableViewController=_tracklistTableViewController - In the implementation block
@property (nonatomic,readonly) MusicVerticalScrollingContainerViewController * _verticalScrollingContainerViewController;              //@synthesize verticalScrollingContainerViewController=_verticalScrollingContainerViewController - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)commitEditing;
-(void)dealloc;
-(void)setEditing:(char)arg1 animated:(char)arg2 ;
-(id)contentScrollView;
-(void)_setContentOverlayInsets:(UIEdgeInsets)arg1 ;
-(void)viewDidLoad;
-(int)presentationSource;
-(id<MusicEntityProviding>)tracklistEntityProvider;
-(id<MusicEntityProviding>)containerEntityProvider;
-(char)music_handleUserActivityContext:(id)arg1 containerItem:(id)arg2 ;
-(void)_reloadContainerEntityValueContextProperties;
-(void)_containerEntityProviderDidInvalidateNotification:(id)arg1 ;
-(void)_reloadVerticalScrollingContainerItems;
-(id<MusicMediaDetailSplitViewControllerDelegate>)mediaSplitViewControllerDelegate;
-(void)verticalScrollingContainerViewControllerDidScroll:(id)arg1 ;
-(void)verticalScrollingContainerViewControllerContentSizeDidChange:(id)arg1 ;
-(void)verticalScrollingContainerViewController:(id)arg1 willEndDraggingWithVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(void)setMediaDetailTintInformation:(MusicMediaDetailTintInformation *)arg1 ;
-(void)setMediaSplitViewControllerDelegate:(id<MusicMediaDetailSplitViewControllerDelegate>)arg1 ;
-(void)setEditedContentArtworkImage:(UIImage *)arg1 ;
-(void)setRelatedContentViewController:(UIViewController *)arg1 ;
-(void)cancelEditing;
-(UIImage *)editedContentArtworkImage;
-(MusicMediaDetailTintInformation *)mediaDetailTintInformation;
-(UIViewController *)relatedContentViewController;
-(MusicEntityValueContext *)_containerEntityValueContext;
-(MusicVerticalScrollingContainerViewController *)_verticalScrollingContainerViewController;
-(unsigned)editableComponents;
-(void)setEditableComponents:(unsigned)arg1 ;
-(void)setEditedContentTitle:(NSString *)arg1 ;
-(UIScrollView *)containerScrollView;
-(UIViewController *)headerContentViewController;
-(void)setHeaderContentViewController:(UIViewController *)arg1 ;
-(char)isForContentCreation;
-(void)_configureProductAdditionalMetadataViewController:(id)arg1 ;
-(id<MusicEntityProviding>)_contextualActionsOverrideTracklistEntityProvider;
-(id)_loadProductTracklistTableViewConfigurationWithTracklistEntityProvider:(id)arg1 ;
-(void)productAdditionalMetadataViewControllerDidFinishContentHeightAnimation:(id)arg1 ;
-(void)productAdditionalMetadataViewControllerWillBeginContentHeightAnimation:(id)arg1 ;
-(id)_loadProductHeaderLockupContentDescriptor;
-(void)_configureWithTintInformation;
-(id)initWithContainerEntityProvider:(id)arg1 tracklistEntityProvider:(id)arg2 clientContext:(id)arg3 presentationSource:(int)arg4 forContentCreation:(char)arg5 ;
-(void)libraryBrowseTableViewControllerDidFinishContentHeightAnimation:(id)arg1 ;
-(void)libraryBrowseTableViewControllerWillBeginContentHeightAnimation:(id)arg1 ;
-(id)_productAdditionalMetadataViewController;
-(MusicProductTracklistTableViewController *)_tracklistTableViewController;
-(NSString *)editedContentTitle;
-(void)_commitEditingWithTracklistEntityProviderChangeRecords:(id)arg1 ;
-(void)setClientContext:(MusicClientContext *)arg1 ;
-(MusicClientContext *)clientContext;
@end

