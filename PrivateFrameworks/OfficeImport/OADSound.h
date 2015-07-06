/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:38 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/OCDDelayedMedia.h>

@class NSData, NSString;

@interface OADSound : OCDDelayedMedia {

	NSData* mSoundData;
	NSString* mName;
	long mSizeInBytes;

}
-(void)dealloc;
-(id)init;
-(id)description;
-(void)setName:(id)arg1 ;
-(id)name;
-(BOOL)isLoaded;
-(void)setSizeInBytes:(long)arg1 ;
-(void)setSoundData:(id)arg1 ;
-(long)sizeInBytes;
-(id)soundData;
@end

