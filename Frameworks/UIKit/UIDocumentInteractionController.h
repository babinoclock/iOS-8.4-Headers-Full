/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:38:50 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIActionSheetDelegate.h>

@protocol UIDocumentInteractionControllerDelegate;
@class NSArray, NSString, UIViewController, UIView, UIBarButtonItem, UIPopoverController, UIActivityViewController, NSURL, _UIPreviewItemProxy;

@interface UIDocumentInteractionController : NSObject <UIActionSheetDelegate> {

	id<UIDocumentInteractionControllerDelegate> _delegate;
	id _previewItemProxy;
	NSArray* _icons;
	id _annotation;
	NSString* _uniqueIdentifier;
	UIViewController* _presentingViewController;
	id _previewController;
	NSArray* _gestureRecognizers;
	CGRect _presentRect;
	UIView* _presentView;
	UIBarButtonItem* _presentItem;
	NSArray* _availableApplications;
	UIPopoverController* _popoverController;
	UIActivityViewController* _activityViewController;
	char _shouldUnzipDocument;
	char _sourceIsManaged;
	NSURL* _unzippedDocumentURL;
	id _applicationToOpen;
	NSURL* _tmpURLToDeleteOnDealloc;
	struct {
		unsigned delegateViewControllerForPreview : 1;
		unsigned delegateRectForPreview : 1;
		unsigned delegateViewForPreview : 1;
		unsigned transitionImageForPreview : 1;
		unsigned documentProxyForPreview : 1;
		unsigned delegateWillBeginPreview : 1;
		unsigned delegateDidEndPreviewPreview : 1;
		unsigned delegateWillEndPreviewPreview : 1;
		unsigned delegateWillPresentOptionsMenu : 1;
		unsigned delegateDidDismissOptionsMenu : 1;
		unsigned delegateWillPresentOpenInMenu : 1;
		unsigned delegateDidDismissOpenInMenu : 1;
		unsigned delegateWillBeginSendingToApplication : 1;
		unsigned delegateDidEndSendingToApplication : 1;
		unsigned delegateCanPerformAction : 1;
		unsigned delegatePerformAction : 1;
		unsigned delegateUnzipURL : 1;
		unsigned showingOptionsMenu : 1;
		unsigned showingOpenInMenu : 1;
		unsigned delegateExcludesActivities : 1;
		unsigned delegateCanBlockRemoteImages : 1;
		unsigned delegateAddsActivities : 1;
		unsigned delegateProvidesActivityItem : 1;
		unsigned delegateProvidesPrintInfo : 1;
		unsigned performingActivity : 1;
	}  _documentInteractionControllerFlags;

}

@property (nonatomic,retain) NSString * uniqueIdentifier; 
@property (assign,nonatomic) char shouldUnzipDocument; 
@property (assign,nonatomic) char sourceIsManaged; 
@property (getter=isArchive,nonatomic,readonly) char archive; 
@property (assign,nonatomic) id<UIDocumentInteractionControllerDelegate> delegate;                                           //@synthesize delegate=_delegate - In the implementation block
@property (retain) NSURL * URL; 
@property (nonatomic,copy) NSString * UTI; 
@property (copy) NSString * name; 
@property (nonatomic,readonly) NSArray * icons; 
@property (nonatomic,retain) id annotation;                                                                                  //@synthesize annotation=_annotation - In the implementation block
@property (nonatomic,readonly) NSArray * gestureRecognizers; 
@property (nonatomic,retain) NSString * uniqueIdentifier;                                                                    //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
@property (assign,nonatomic) char shouldUnzipDocument;                                                                       //@synthesize shouldUnzipDocument=_shouldUnzipDocument - In the implementation block
@property (assign,nonatomic) char sourceIsManaged;                                                                           //@synthesize sourceIsManaged=_sourceIsManaged - In the implementation block
@property (nonatomic,retain) UIActivityViewController * activityViewController;                                              //@synthesize activityViewController=_activityViewController - In the implementation block
@property (assign,setter=_setPerformingActivity:,getter=_performingActivity,nonatomic) char performingActivity; 
@property (nonatomic,readonly) id previewController; 
@property (nonatomic,retain) UIPopoverController * popoverController;                                                        //@synthesize popoverController=_popoverController - In the implementation block
@property (nonatomic,readonly) _UIPreviewItemProxy * previewItemProxy; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(id)_applicationsForDocumentProxy:(id)arg1 ;
+(id)allActionSelectorNames;
+(id)_UTIForFileURL:(id)arg1 ;
+(id)_unzippingQueue;
+(id)interactionControllerWithURL:(id)arg1 ;
+(id)_pathFilterPredicate;
-(void)dealloc;
-(void)setDelegate:(id<UIDocumentInteractionControllerDelegate>)arg1 ;
-(id<UIDocumentInteractionControllerDelegate>)delegate;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(NSArray *)gestureRecognizers;
-(NSArray *)icons;
-(id)initWithURL:(id)arg1 ;
-(NSURL *)URL;
-(void)setURL:(NSURL *)arg1 ;
-(NSString *)uniqueIdentifier;
-(void)setPopoverController:(UIPopoverController *)arg1 ;
-(void)_invalidate;
-(void)popoverController:(id)arg1 animationCompleted:(int)arg2 ;
-(void)_openDocumentWithApplication:(id)arg1 ;
-(char)presentPreviewAnimated:(char)arg1 ;
-(char)_delegatePerformAction:(SEL)arg1 ;
-(void)_activityControllerViewDidDismiss;
-(char)_performingActivity;
-(void)_setPerformingActivity:(char)arg1 ;
-(char)sourceIsManaged;
-(id)_applications:(char)arg1 ;
-(void)_setApplicationToOpen:(id)arg1 ;
-(void)_openDocumentWithCurrentApplication;
-(UIPopoverController *)popoverController;
-(CGRect)previewController:(id)arg1 frameForPreviewItem:(id)arg2 inSourceView:(id*)arg3 ;
-(void)previewControllerWillDismiss:(id)arg1 ;
-(void)previewControllerDidDismiss:(id)arg1 ;
-(id)previewController:(id)arg1 transitionImageForPreviewItem:(id)arg2 contentRect:(CGRect*)arg3 ;
-(_UIPreviewItemProxy *)previewItemProxy;
-(int)numberOfPreviewItemsInPreviewController:(id)arg1 ;
-(id)previewController:(id)arg1 previewItemAtIndex:(int)arg2 ;
-(UIActivityViewController *)activityViewController;
-(char)_canUnzipDocument;
-(NSString *)UTI;
-(id)_documentProxySourceIsManaged:(char)arg1 ;
-(char)_delegateExistsAndImplementsRequiredMethods:(id*)arg1 ;
-(void)setPreviewURLOverride:(id)arg1 ;
-(unsigned)applicationCount;
-(void)openDocumentWithDefaultApplication;
-(void)_dismissEverythingWithExtremePrejudiceAnimated:(char)arg1 ;
-(void)setShouldUnzipDocument:(char)arg1 ;
-(void)_interfaceOrientationWillChange:(id)arg1 ;
-(char)_isFilenameValidForUnzipping:(id)arg1 allowsArchiveZip:(char)arg2 ;
-(char)_isVideo;
-(char)_isImage;
-(char)_canPreviewUnzippedDocument;
-(char)_canUnzipDocumentAndPresentOptions;
-(char)_setupForOptionsMenu;
-(void)_unzipFileAndSetupPayload:(/*^block*/id)arg1 ;
-(char)isArchive;
-(char)_canUnzipDocumentForPreview;
-(char)_documentNeedsHelpUnzippingForPreview;
-(char)_setupPreviewController;
-(id)previewController;
-(void)setSourceIsManaged:(char)arg1 ;
-(char)_canUnzipDocumentAndPresentOpenIn;
-(char)_setupForOpenInMenu;
-(void)_presentPreview:(id)arg1 ;
-(void)_presentOptionsMenu:(id)arg1 ;
-(char)presentOptionsMenuFromRect:(CGRect)arg1 inView:(id)arg2 animated:(char)arg3 ;
-(char)presentOpenInMenuFromRect:(CGRect)arg1 inView:(id)arg2 animated:(char)arg3 ;
-(id)annotation;
-(void)_finishedCopyingResource;
-(id)_applicationToOpen;
-(void)_fixupFileExtensionIfNeeded;
-(char)_delegateImplementsLegacyActions;
-(char)_delegateCanPerformAction:(SEL)arg1 ;
-(char)_isImageOrVideo;
-(void)setActivityViewController:(UIActivityViewController *)arg1 ;
-(char)_isValidURL:(id)arg1 ;
-(id)_unzipFileAndSetupPayload:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)dismissMenuAnimated:(char)arg1 ;
-(void)setUTI:(NSString *)arg1 ;
-(char)shouldUnzipDocument;
-(char)presentOptionsMenuFromBarButtonItem:(id)arg1 animated:(char)arg2 ;
-(id)presentingNavigationController;
-(char)presentOpenInMenuFromBarButtonItem:(id)arg1 animated:(char)arg2 ;
-(void)dismissPreviewAnimated:(char)arg1 ;
-(void)_presentOpenIn:(id)arg1 ;
-(void)openResourceOperation:(id)arg1 didFinishCopyingResource:(id)arg2 ;
-(id)_pathsInArchive:(/*^block*/id)arg1 ;
-(void)_setUnzippedDocumentURL:(id)arg1 ;
-(id)_unzippedDocumentURL;
-(char)_isPackageArchive:(id)arg1 ;
-(char)_canSaveToCameraRollForType;
-(void)setAnnotation:(id)arg1 ;
-(void)setUniqueIdentifier:(NSString *)arg1 ;
-(id)subitemsInArchive:(/*^block*/id)arg1 ;
-(id)extractSubitemFromArchive:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

