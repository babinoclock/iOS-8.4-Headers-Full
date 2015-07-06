/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:46 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/OABReaderState.h>

@class WBReader;

@interface WBOfficeArtReaderState : OABReaderState {

	WBReader* mReader;
	int mCurrentTextType;

}

@property (assign,nonatomic) WBReader * reader; 
@property (assign,nonatomic) int currentTextType; 
-(id)initWithClient:(Class)arg1 ;
-(WBReader *)reader;
-(void)setReader:(WBReader *)arg1 ;
-(void)setCurrentTextType:(int)arg1 ;
-(int)currentTextType;
@end

