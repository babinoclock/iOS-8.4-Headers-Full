/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:35 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol SFUInputBundle <NSObject>
@required
-(char)hasEntryWithName:(id)arg1;
-(id)inputStreamForEntry:(id)arg1;
-(id)bufferedInputStreamForEntry:(id)arg1;
-(long long)lengthOfEntry:(id)arg1;
-(unsigned)crc32ForEntry:(id)arg1;
-(void)copyEntry:(id)arg1 toFile:(id)arg2;

@end

