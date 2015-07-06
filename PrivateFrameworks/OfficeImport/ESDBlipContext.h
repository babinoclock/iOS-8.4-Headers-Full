/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:38 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/OCDDelayedMediaContext.h>

@class NSString;

@interface ESDBlipContext : NSObject <OCDDelayedMediaContext> {

	SsrwOOStream* mStream;
	unsigned mStreamID;
	unsigned mStartOffset;
	unsigned mByteCount;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)loadDelayedNode:(id)arg1 ;
-(id)dataRep;
-(id)initWithOffset:(unsigned)arg1 byteCount:(unsigned)arg2 stream:(SsrwOOStream*)arg3 streamID:(unsigned)arg4 ;
-(BOOL)saveDelayedMedia:(id)arg1 toFile:(id)arg2 ;
-(SsrwOOStream*)stream;
@end
