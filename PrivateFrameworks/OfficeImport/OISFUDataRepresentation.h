/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:35 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@class NSData;

@interface OISFUDataRepresentation : NSObject {

	char mHasHash;
	unsigned mHash;
	char mHasSha1Hash;
	NSData* mSha1Hash;

}
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(int)compare:(id)arg1 ;
-(id)inputStream;
-(xmlTextReaderRef)xmlReaderWithReadCallback:(/*function pointer*/void*)arg1 ;
-(xmlTextReaderRef)xmlReaderForGzippedDataWithInputStream:(id*)arg1 ;
-(unsigned)uint32Hash;
-(id)bufferedInputStreamWithBufferSize:(unsigned long)arg1 ;
-(xmlDoc*)xmlDocument;
-(xmlTextReaderRef)xmlReader;
-(xmlTextReaderRef)xmlReaderForGzippedData;
-(CGDataProviderRef)cgDataProvider;
-(unsigned long)readIntoData:(id)arg1 ;
-(id)sha1Hash;
-(char)hasSameLocationAs:(id)arg1 ;
-(char)isReadable;
-(id)bufferedInputStream;
-(long long)encodedLength;
-(char)isEncrypted;
-(long long)dataLength;
@end

