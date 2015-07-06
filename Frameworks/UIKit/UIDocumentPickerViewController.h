/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:38:30 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIViewController.h>
#import <UIKit/_UIDocumentPickerRemoteViewControllerContaining.h>

@protocol UIDocumentPickerDelegate;
@class _UIDocumentPickerRemoteViewController, _UIRemoteViewService, NSURL, NSMutableArray;

@interface UIDocumentPickerViewController : UIViewController <_UIDocumentPickerRemoteViewControllerContaining> {

	id<UIDocumentPickerDelegate> _weak_delegate;
	unsigned _documentPickerMode;
	_UIDocumentPickerRemoteViewController* _remoteViewController;
	_UIRemoteViewService* _remoteViewService;
	NSURL* _uploadURL;
	NSMutableArray* _stitchingTokens;

}

@property (assign,nonatomic,__weak) id<UIDocumentPickerDelegate> delegate; 
@property (assign,nonatomic) unsigned documentPickerMode;                                                                                                             //@synthesize documentPickerMode=_documentPickerMode - In the implementation block
@property (setter=_setRemoteViewController:,getter=_remoteViewController,nonatomic,retain) _UIDocumentPickerRemoteViewController * remoteViewController;              //@synthesize remoteViewController=_remoteViewController - In the implementation block
@property (nonatomic,retain) _UIRemoteViewService * remoteViewService;                                                                                                //@synthesize remoteViewService=_remoteViewService - In the implementation block
@property (nonatomic,copy) NSURL * uploadURL;                                                                                                                         //@synthesize uploadURL=_uploadURL - In the implementation block
@property (nonatomic,retain) NSMutableArray * stitchingTokens;                                                                                                        //@synthesize stitchingTokens=_stitchingTokens - In the implementation block
+(id)image;
+(id)_extension;
+(id)_identifier;
+(id)localizedName;
+(id)supportedContentTypes;
+(unsigned)supportedModes;
-(void)dealloc;
-(void)setDelegate:(id<UIDocumentPickerDelegate>)arg1 ;
-(id<UIDocumentPickerDelegate>)delegate;
-(void)setStitchingTokens:(NSMutableArray *)arg1 ;
-(void)_setRemoteViewController:(id)arg1 ;
-(void)_dismissViewController;
-(id)_remoteViewController;
-(NSMutableArray *)stitchingTokens;
-(void)_finishStitching;
-(void)_callDelegateWithSelectedURLAndDismiss:(id)arg1 ;
-(void)setDocumentPickerMode:(unsigned)arg1 ;
-(void)_commonInitWithCompletion:(/*^block*/id)arg1 ;
-(void)setUploadURL:(NSURL *)arg1 ;
-(void)_prepareForDeletionIfNecessary;
-(unsigned)documentPickerMode;
-(NSURL *)uploadURL;
-(id)initWithDocumentTypes:(id)arg1 inMode:(unsigned)arg2 ;
-(id)initWithURL:(id)arg1 inMode:(unsigned)arg2 ;
-(void)_didSelectURL:(id)arg1 ;
-(void)_didSelectPicker;
-(void)_dismissWithOption:(id)arg1 ;
-(void)_stitchFileCreationAtURL:(id)arg1 ;
-(void)_displayLocationsMenuFromRect:(CGRect)arg1 ;
-(void)addAuxiliaryOptionWithTitle:(id)arg1 image:(id)arg2 identifier:(id)arg3 ;
-(id)_initWithRemoteViewController:(id)arg1 inMode:(unsigned)arg2 uploadURLOrNil:(id)arg3 ;
-(id)initForSelectingDocumentMatchingTypes:(id)arg1 inMode:(unsigned)arg2 ;
-(id)initWithExistingDocumentAtURL:(id)arg1 inMode:(unsigned)arg2 ;
-(_UIRemoteViewService *)remoteViewService;
-(void)setRemoteViewService:(_UIRemoteViewService *)arg1 ;
@end
