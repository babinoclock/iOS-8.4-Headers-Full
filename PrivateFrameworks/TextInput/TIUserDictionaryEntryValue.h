/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:43:03 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <TextInput/NSSecureCoding.h>
#import <TextInput/TIUserDictionaryEntry.h>

@class NSString, NSNumber;

@interface TIUserDictionaryEntryValue : NSObject <NSSecureCoding, TIUserDictionaryEntry> {

	NSString* _phrase;
	NSString* _shortcut;
	NSNumber* _timestamp;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * phrase;                       //@synthesize phrase=_phrase - In the implementation block
@property (nonatomic,copy) NSString * shortcut;                     //@synthesize shortcut=_shortcut - In the implementation block
@property (nonatomic,retain) NSNumber * timestamp;                  //@synthesize timestamp=_timestamp - In the implementation block
+(char)supportsSecureCoding;
+(id)valueWithEntry:(id)arg1 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)description;
-(NSNumber *)timestamp;
-(void)setTimestamp:(NSNumber *)arg1 ;
-(char)matchesEntry:(id)arg1 ;
-(id)shortcutForSorting;
-(NSString *)phrase;
-(void)setPhrase:(NSString *)arg1 ;
-(NSString *)shortcut;
-(void)setShortcut:(NSString *)arg1 ;
@end

