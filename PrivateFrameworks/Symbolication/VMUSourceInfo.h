/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:58 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <Symbolication/Symbolication-Structs.h>
@class NSString;

@interface VMUSourceInfo : NSObject {

	NSString* _path;
	NSString* _fileName;
	unsigned _lineNumber;

}
-(id)fileName;
-(unsigned)lineNumber;
-(void)dealloc;
-(id)path;
-(id)initWithSymbolicator:(CSTypeRef)arg1 address:(unsigned long long)arg2 ;
@end

