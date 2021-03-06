/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:37:22 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSURL;

@interface NSFileAccessIntent : NSObject {

	NSURL* _url;
	char _isRead;
	int _options;

}

@property (copy) NSURL * URL;                              //@synthesize url=_url - In the implementation block
@property (readonly) char isRead;                          //@synthesize isRead=_isRead - In the implementation block
@property (readonly) unsigned readingOptions; 
@property (readonly) unsigned writingOptions; 
+(id)writingIntentWithURL:(id)arg1 options:(unsigned)arg2 ;
+(id)readingIntentWithURL:(id)arg1 options:(unsigned)arg2 ;
-(unsigned)readingOptions;
-(unsigned)writingOptions;
-(void)dealloc;
-(id)description;
-(NSURL *)URL;
-(void)setURL:(NSURL *)arg1 ;
-(char)isRead;
@end

