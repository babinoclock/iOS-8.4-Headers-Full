/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:38:44 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <UIKit/UIKit-Structs.h>
@class NSString, NSURL, NSArray, UIImage, NSMutableData, NSURLConnection;

@interface UIWebClip : NSObject {

	NSString* identifier;
	NSURL* pageURL;
	NSArray* icons;
	unsigned currentIconIndex;
	NSURL* startupImageURL;
	NSURL* startupLandscapeImageURL;
	NSString* title;
	char fullScreen;
	char classicMode;
	char removalDisallowed;
	char iconIsScreenShotBased;
	char iconIsPrecomposed;
	char iconIsPrerendered;
	unsigned supportedOrientations;
	int statusBarStyle;
	UIImage* iconImage;
	UIImage* startupImage;
	UIImage* startupLandscapeImage;
	UIImage* initialLaunchImage;
	id delegate;
	NSMutableData* _customIconData;
	NSURLConnection* _iconConnection;
	NSMutableData* _customStartupImageData;
	NSURLConnection* _startupImageConnection;
	NSMutableData* _customStartupLandscapeImageData;
	NSURLConnection* _startupLandscapeImageConnection;

}

@property (copy) NSString * identifier; 
@property (nonatomic,retain) NSURL * pageURL; 
@property (retain) NSArray * icons; 
@property (retain) NSURL * startupImageURL; 
@property (retain) NSURL * startupLandscapeImageURL; 
@property (nonatomic,copy) NSString * title; 
@property (assign) char fullScreen; 
@property (assign) char classicMode; 
@property (assign) char removalDisallowed; 
@property (readonly) char iconIsScreenShotBased; 
@property (readonly) char iconIsPrecomposed; 
@property (readonly) char iconIsPrerendered; 
@property (assign) unsigned supportedOrientations; 
@property (assign) int statusBarStyle; 
@property (readonly) NSString * iconImagePath; 
@property (nonatomic,retain,readonly) UIImage * iconImage; 
@property (nonatomic,retain) UIImage * startupImage; 
@property (nonatomic,retain) UIImage * startupLandscapeImage; 
@property (nonatomic,retain) UIImage * initialLaunchImage; 
@property (assign) id delegate; 
+(char)_webClipFullScreenValueForMetaTagContent:(id)arg1 ;
+(int)_webClipStatusBarStyleForMetaTagContent:(id)arg1 ;
+(unsigned)_webClipOrientationsForMetaTagContent:(id)arg1 ;
+(id)urlForWebClipWithIdentifier:(id)arg1 ;
+(id)pathForWebClipWithIdentifier:(id)arg1 ;
+(id)webClipWithIdentifier:(id)arg1 ;
+(id)webClipsDirectoryPath;
+(id)_contentForMetaName:(id)arg1 inWebDocumentView:(id)arg2 ;
+(id)_webClipLinkTagsFromWebDocumentView:(id)arg1 ;
+(id)webClipIconsForWebClipLinkTags:(id)arg1 pageURL:(id)arg2 ;
+(id)webClipWithURL:(id)arg1 ;
+(id)webClips;
+(char)bundleIdentifierContainsWebClipIdentifier:(id)arg1 ;
+(id)webClipIdentifierFromBundleIdentifier:(id)arg1 ;
+(int)webClipStatusBarStyleForWebDocumentView:(id)arg1 ;
+(char)webClipFullScreenValueForWebDocumentView:(id)arg1 ;
+(id)webClipTitleForWebDocumentView:(id)arg1 ;
+(char)webClipClassicModeValueForWebDocumentView:(id)arg1 ;
+(unsigned)webClipOrientationsForWebDocumentView:(id)arg1 ;
+(id)webClipIconsForWebDocumentView:(id)arg1 ;
+(id)pathForWebClipStorageWithIdentifier:(id)arg1 ;
+(id)pathForWebClipCacheWithIdentifier:(id)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(id)delegate;
-(id)bundleIdentifier;
-(int)statusBarStyle;
-(void)setStatusBarStyle:(int)arg1 ;
-(NSString *)identifier;
-(NSString *)title;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSArray *)icons;
-(id)_info;
-(void)setFullScreen:(char)arg1 ;
-(void)setSupportedOrientations:(unsigned)arg1 ;
-(void)updateCustomMediaLocationsWithWebClipLinkTags:(id)arg1 baseURL:(id)arg2 ;
-(void)setPageURL:(NSURL *)arg1 ;
-(void)setClassicMode:(char)arg1 ;
-(void)setRemovalDisallowed:(char)arg1 ;
-(void)_readPropertiesFromBundle:(CFBundleRef)arg1 ;
-(void)_reloadProperties;
-(char)_writeImage:(id)arg1 toDiskWithFileName:(id)arg2 ;
-(void)setStartupImage:(UIImage *)arg1 ;
-(void)setStartupLandscapeImage:(UIImage *)arg1 ;
-(void)setInitialLaunchImage:(UIImage *)arg1 ;
-(char)updateOnDisk;
-(id)_bundleResourceWithName:(id)arg1 ;
-(UIImage *)iconImage;
-(char)iconIsPrecomposed;
-(id)_bundleImageWithName:(id)arg1 ;
-(void)_setIconImage:(id)arg1 isPrecomposed:(char)arg2 isScreenShotBased:(char)arg3 ;
-(void)cancelMediaUpdate;
-(id)_initWithIdentifier:(id)arg1 ;
-(void)stopLoadingCustomIcon;
-(void)stopLoadingStartupImage;
-(void)stopLoadingStartupLandscapeImage;
-(char)fullScreen;
-(void)setIcons:(NSArray *)arg1 ;
-(void)setStartupImageURL:(NSURL *)arg1 ;
-(void)setStartupLandscapeImageURL:(NSURL *)arg1 ;
-(void)requestCustomIconUpdate;
-(void)requestCustomPortraitStartupImageUpdate;
-(void)requestCustomLandscapeStartupImageUpdate;
-(char)tryLoadingNextCustomIcon;
-(void)setIconImage:(id)arg1 isPrecomposed:(char)arg2 ;
-(void)requestIconUpdateInSpringBoard;
-(void)connection:(id)arg1 didFailWithError:(id)arg2 ;
-(UIImage *)startupImage;
-(UIImage *)startupLandscapeImage;
-(void)configureWithMetaTags:(id)arg1 linkTags:(id)arg2 ;
-(NSURL *)pageURL;
-(char)createOnDisk;
-(char)removeFromDisk;
-(NSString *)iconImagePath;
-(id)generateIconImageForFormat:(int)arg1 scale:(float)arg2 ;
-(void)setIconImageFromScreenshot:(id)arg1 ;
-(UIImage *)initialLaunchImage;
-(void)connection:(id)arg1 didReceiveData:(id)arg2 ;
-(void)updateCustomMediaLocationsFromWebDocumentView:(id)arg1 ;
-(void)connectionDidFinishLoading:(id)arg1 ;
-(void)connection:(id)arg1 didReceiveResponse:(id)arg2 ;
-(id)getStartupImage:(int)arg1 ;
-(NSURL *)startupImageURL;
-(NSURL *)startupLandscapeImageURL;
-(char)classicMode;
-(char)removalDisallowed;
-(char)iconIsScreenShotBased;
-(char)iconIsPrerendered;
-(unsigned)supportedOrientations;
@end

