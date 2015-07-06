/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:36:46 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/CoreText.framework/CoreText
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <CoreText/CoreText-Structs.h>
@class NSMutableDictionary, NSSet;

@interface FontAssetDownloadManager : NSObject {

	TCFRef<const __CFArray *>* fDescriptors;
	TCFRef<const __CFSet *>* fMandatoryAttributes;
	/*^block*/id fProgressCallbackBlock;
	NSMutableDictionary* fProgressParams;
	NSMutableDictionary* fDownloadOptions;
	NSSet* fPreciousFontLanguages;

}
+(Class)getASAssetQueryClass;
+(char)shouldIgnoreFontAsset:(id)arg1 ;
+(char)shouldTryServer;
+(char)shouldRetryWithServer;
+(id)enabledKeyboardLanguages;
+(id)displayNameForCurrentUser:(id)arg1 ;
+(id)availableFontAttributesArray;
-(char)callProgressCallbak:(unsigned)arg1 ;
-(id)getUnmatchedDescriptors;
-(id)mobileAssetsForUnmatched:(id)arg1 andFontFilePaths:(id)arg2 ;
-(unsigned long)calculateDownloadSize:(id)arg1 ;
-(void)setProgressParam:(id)arg1 forKey:(id)arg2 ;
-(char)executeDownloadingFontAssets:(id)arg1 forDescriptors:(id)arg2 andFontFilePaths:(id)arg3 ;
-(id)doFinalMatching;
-(id)availableMobileAssets:(char)arg1 error:(id*)arg2 ;
-(id)extractMatchingAssetsForDescriptor:(CTFontDescriptorRef)arg1 from:(id)arg2 withFailInfo:(char*)arg3 andFontFilePaths:(id)arg4 ;
-(void)setDownloadOptionsForMobileAsset;
-(char)assetStalled:(id)arg1 ;
-(void)setGarbageCollectionBehaviorForAsset:(id)arg1 ;
-(char)activateFontsFromAssetURL:(id)arg1 ;
-(id)preciousFontLanguages;
-(id)initWithDescriptors:(CFArrayRef)arg1 andMandatoryAttributes:(CFSetRef)arg2 withBlock:(/*^block*/id)arg3 ;
-(void)downloadFontAssets;
-(void)dealloc;
@end
