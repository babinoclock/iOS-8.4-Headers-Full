/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:39:25 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppSupport/AppSupport-Structs.h>
#import <Foundation/NSString.h>

@class NSString;

@interface _CPBundleIdentifierString : NSString {

	NSString* _executablePath;
	NSString* _bundleIdentifierOrProcessName;
	char _isProcessName;

}
-(void)dealloc;
-(unsigned)length;
-(unsigned short)characterAtIndex:(unsigned)arg1 ;
-(void)getCharacters:(unsigned short*)arg1 range:(NSRange)arg2 ;
-(void)_loadBundleIdentifierOrProcessName;
-(id)_initWithExecutablePath:(id)arg1 ;
-(char)_isProcessName;
@end

