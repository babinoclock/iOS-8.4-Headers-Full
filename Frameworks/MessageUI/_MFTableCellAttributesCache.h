/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:37:41 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSCache;

@interface _MFTableCellAttributesCache : NSObject {

	NSCache* _attributesCache;

}
+(id)sharedInstance;
-(void)_didReceiveFontSizeChangeNotification:(id)arg1 ;
-(id)cachedAttributesForIdentifier:(id)arg1 constructionBlock:(/*^block*/id)arg2 ;
-(void)dealloc;
-(id)init;
@end

