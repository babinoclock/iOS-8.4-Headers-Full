/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:35 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/OISFUBufferedInputStream.h>

@class NSData, NSString;

@interface OISFUMemoryInputStream : NSObject <OISFUBufferedInputStream> {

	NSData* mData;
	const char* mStart;
	const char* mCurrent;
	const char* mEnd;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)initWithData:(id)arg1 ;
-(long long)offset;
-(void)close;
-(id)initWithData:(id)arg1 offset:(unsigned long)arg2 length:(unsigned long)arg3 ;
-(char)seekWithinBufferToOffset:(long long)arg1 ;
-(void)seekToOffset:(long long)arg1 ;
-(unsigned long)readToBuffer:(char*)arg1 size:(unsigned long)arg2 ;
-(void)disableSystemCaching;
-(void)enableSystemCaching;
-(id)closeLocalStream;
-(unsigned long)readToOwnBuffer:(const char**)arg1 size:(unsigned long)arg2 ;
-(char)canSeek;
@end

