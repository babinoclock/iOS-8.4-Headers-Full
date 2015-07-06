/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:44 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/WDRun.h>

@class NSString;

@interface WDFormField : WDRun {

	unsigned mPosition;
	char mLinkAbsolute;
	char mLinkSpecifyingNamedLocation;
	NSString* mNamedLocation;
	NSString* mURI;
	NSString* mMacName;
	NSString* mDosName;

}
-(void)setURI:(id)arg1 ;
-(id)URI;
-(void)dealloc;
-(void)setPosition:(unsigned)arg1 ;
-(unsigned)position;
-(int)runType;
-(id)initWithParagraph:(id)arg1 ;
-(char)linkAbsolute;
-(void)setLinkAbsolute:(char)arg1 ;
-(char)linkSpecifyingNamedLocation;
-(void)setLinkSpecifyingNamedLocation:(char)arg1 ;
-(id)namedLocation;
-(void)setNamedLocation:(id)arg1 ;
-(id)macName;
-(void)setMacName:(id)arg1 ;
-(id)dosName;
-(void)setDosName:(id)arg1 ;
@end

