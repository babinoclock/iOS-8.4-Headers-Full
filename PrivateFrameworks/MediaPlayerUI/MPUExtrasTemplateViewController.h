/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:19 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MediaPlayerUI/MPUExtrasElementViewController.h>
#import <MediaPlayerUI/IKAppDocumentDelegate.h>

@class IKViewElement, NSDictionary, IKAppDocument, MPUExtrasContext, NSString;

@interface MPUExtrasTemplateViewController : MPUExtrasElementViewController <IKAppDocumentDelegate> {

	IKViewElement* _displayedTemplate;
	NSDictionary* _options;
	IKAppDocument* _document;
	MPUExtrasContext* _context;

}

@property (nonatomic,readonly) IKAppDocument * document;                       //@synthesize document=_document - In the implementation block
@property (nonatomic,readonly) char showsPlaceholder; 
@property (nonatomic,__weak,readonly) MPUExtrasContext * context;              //@synthesize context=_context - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)templateViewControllerWithDocument:(id)arg1 options:(id)arg2 context:(id)arg3 ;
-(void)dealloc;
-(MPUExtrasContext *)context;
-(void)viewDidLoad;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewDidDisappear:(char)arg1 ;
-(IKAppDocument *)document;
-(void)_showPlaceholder;
-(void)_startBackgroundAudio;
-(char)shouldUpdateByReplacingViewControllerWithTemplate:(id)arg1 ;
-(void)configureBackgroundWithElements:(id)arg1 ;
-(id)initWithDocument:(id)arg1 options:(id)arg2 context:(id)arg3 ;
-(void)documentDidFail:(id)arg1 withError:(id)arg2 ;
-(char)showsPlaceholder;
-(void)documentDidUpdate:(id)arg1 ;
-(void)documentNeedsUpdate:(id)arg1 ;
@end

