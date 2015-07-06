/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:37:55 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface QLDisplayBundleLoader : NSObject {

	NSMutableDictionary* _displayBundlesById;

}
+(id)sharedLoader;
-(void)_lookForDisplayBundles;
-(Class)loadDisplayBundle:(id)arg1 ;
-(Class)displayBundleClassForDocumentType:(id)arg1 ;
-(id)copyDisplayBundleWithPreviewItem:(id)arg1 displayBundleIdentifier:(id)arg2 ;
-(void)dealloc;
-(id)init;
@end

