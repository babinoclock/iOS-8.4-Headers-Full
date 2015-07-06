/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:35 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/SFUOutputStream.h>

@protocol SFUOutputStream;
@class OISFUCryptor, NSString;

@interface OISFUCryptoOutputStream : NSObject <SFUOutputStream> {

	id<SFUOutputStream> mBaseStream;
	OISFUCryptor* mCryptor;
	char mIsClosed;
	char mComputeCrc32;
	unsigned mCrc32;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(unsigned long long)encodedLengthForDataLength:(unsigned long long)arg1 key:(id)arg2 ;
-(unsigned)crc32;
-(void)dealloc;
-(long long)offset;
-(void)close;
-(id)inputStream;
-(id)initForEncryptionWithOutputStream:(id)arg1 key:(id)arg2 computeCrc32:(char)arg3 ;
-(id)initForEncryptionWithOutputStream:(id)arg1 key:(id)arg2 ;
-(void)seekToOffset:(long long)arg1 whence:(int)arg2 ;
-(char)canCreateInputStream;
-(id)closeLocalStream;
-(void)writeBuffer:(const char*)arg1 size:(unsigned long)arg2 ;
-(char)canSeek;
@end

