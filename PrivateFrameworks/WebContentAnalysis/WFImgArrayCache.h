/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:43:17 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/WebContentAnalysis.framework/WebContentAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableString;

@interface WFImgArrayCache : NSObject {

	NSMutableString* imageAlternativeDescriptions;
	int numberOfUnknownSizedImages;
	int numberOfKnownImagePixels;

}
+(id)imgArrayCacheWithArray:(id)arg1 ;
-(void)dealloc;
-(id)initWithArray:(id)arg1 ;
-(int)numberOfKnownImagePixels;
-(id)imageAlternativeDescriptions;
-(int)numberOfUnknownSizedImages;
@end

