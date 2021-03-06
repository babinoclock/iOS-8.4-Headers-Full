/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:36:16 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/AddressBook.framework/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface ABVCardDateScanner : NSObject {

	NSString* _string;
	unsigned _position;

}

@property (readonly) unsigned position;              //@synthesize position=_position - In the implementation block
+(id)scannerWithString:(id)arg1 ;
-(unsigned)lengthOfCalendarUnit:(unsigned)arg1 ;
-(int)scanComponentValueOfLength:(unsigned)arg1 ;
-(int)scanCalendarUnit:(unsigned)arg1 ;
-(char)scanLeapMarker;
-(unsigned)position;
-(id)initWithString:(id)arg1 ;
-(char)isAtEnd;
-(unsigned short)nextCharacter;
@end

