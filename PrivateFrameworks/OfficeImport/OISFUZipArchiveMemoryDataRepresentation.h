/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:35 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/OISFUDataRepresentation.h>
#import <OfficeImport/SFUZipArchiveDataRepresentation.h>

@class NSData, NSString;

@interface OISFUZipArchiveMemoryDataRepresentation : OISFUDataRepresentation <SFUZipArchiveDataRepresentation> {

	NSData* mData;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)data;
-(id)initWithData:(id)arg1 ;
-(id)inputStream;
-(id)bufferedInputStreamWithBufferSize:(unsigned long)arg1 ;
-(char)hasSameLocationAs:(id)arg1 ;
-(char)isReadable;
-(id)inputStreamWithOffset:(long long)arg1 length:(long long)arg2 ;
-(id)bufferedInputStream;
-(id)bufferedInputStreamWithOffset:(long long)arg1 length:(long long)arg2 ;
-(long long)dataLength;
@end

