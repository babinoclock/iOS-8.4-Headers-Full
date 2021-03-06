/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:40:33 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol MusicEntityValueProviding, MusicJSNativeViewControllerFactory;
@class MusicEntityValueProviderWrapper, MusicEntityValueContext, MPUContentItemIdentifierCollection, UIViewController, NSDictionary, NSString;

@interface MusicShareOperation : NSObject {

	MusicEntityValueProviderWrapper* _playlistWrapper;
	char _container;
	MusicEntityValueContext* _entityValueContext;
	MPUContentItemIdentifierCollection* _identifierCollection;
	id<MusicEntityValueProviding> _entityValueProvider;
	UIViewController*<MusicJSNativeViewControllerFactory> _viewControllerWithJSNativeViewController;
	NSDictionary* _extraInfo;
	NSString* _jsButtonIdentifier;
	UIViewController* _presentationViewController;

}

@property (nonatomic,readonly) MusicEntityValueContext * entityValueContext;                                                              //@synthesize entityValueContext=_entityValueContext - In the implementation block
@property (nonatomic,readonly) MPUContentItemIdentifierCollection * identifierCollection;                                                 //@synthesize identifierCollection=_identifierCollection - In the implementation block
@property (nonatomic,readonly) id<MusicEntityValueProviding> entityValueProvider;                                                         //@synthesize entityValueProvider=_entityValueProvider - In the implementation block
@property (getter=isContainer,nonatomic,readonly) char container;                                                                         //@synthesize container=_container - In the implementation block
@property (nonatomic,readonly) NSString * sharingTitle; 
@property (getter=isSharingDisabled,nonatomic,readonly) char sharingDisabled; 
@property (nonatomic,retain) UIViewController*<MusicJSNativeViewControllerFactory> viewControllerWithJSNativeViewController;              //@synthesize viewControllerWithJSNativeViewController=_viewControllerWithJSNativeViewController - In the implementation block
@property (nonatomic,retain) NSDictionary * extraInfo;                                                                                    //@synthesize extraInfo=_extraInfo - In the implementation block
@property (nonatomic,copy) NSString * jsButtonIdentifier;                                                                                 //@synthesize jsButtonIdentifier=_jsButtonIdentifier - In the implementation block
@property (assign,nonatomic,__weak) UIViewController * presentationViewController;                                                        //@synthesize presentationViewController=_presentationViewController - In the implementation block
+(id)_localizedShareStringForContentType:(unsigned)arg1 ;
+(char)canShareWithEntityValueContext:(id)arg1 forContainer:(char)arg2 ;
-(char)isContainer;
-(void)setExtraInfo:(NSDictionary *)arg1 ;
-(id)initWithMusicEntityValueContext:(id)arg1 forContainer:(char)arg2 ;
-(void)setViewControllerWithJSNativeViewController:(UIViewController*<MusicJSNativeViewControllerFactory>)arg1 ;
-(void)setPresentationViewController:(UIViewController *)arg1 ;
-(void)dispatchEvent;
-(void)_dispatchEventForPlaylist;
-(void)_dispatchEvent;
-(void)_presentHUD:(id)arg1 ;
-(NSString *)sharingTitle;
-(char)isSharingDisabled;
-(MusicEntityValueContext *)entityValueContext;
-(MPUContentItemIdentifierCollection *)identifierCollection;
-(UIViewController*<MusicJSNativeViewControllerFactory>)viewControllerWithJSNativeViewController;
-(NSDictionary *)extraInfo;
-(NSString *)jsButtonIdentifier;
-(void)setJsButtonIdentifier:(NSString *)arg1 ;
-(UIViewController *)presentationViewController;
-(id<MusicEntityValueProviding>)entityValueProvider;
@end

