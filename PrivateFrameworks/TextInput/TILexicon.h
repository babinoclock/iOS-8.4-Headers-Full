/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:43:02 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <TextInput/TextInput-Structs.h>
#import <TextInput/NSCopying.h>
#import <TextInput/NSSecureCoding.h>

@class NSArray;

@interface TILexicon : NSObject <NSCopying, NSSecureCoding> {

	NSArray* _entries;

}

@property (nonatomic,readonly) NSArray * entries;              //@synthesize entries=_entries - In the implementation block
+(char)supportsSecureCoding;
+(void)requestLexiconFromBundlePath:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
+(id)lexiconWithEntries:(id)arg1 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSArray *)entries;
@end

