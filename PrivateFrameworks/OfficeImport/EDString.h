/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:43 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/NSCopying.h>
#import <OfficeImport/EDImmutableObject.h>

@class NSString, EDRunsCollection, EDPhoneticInfo;

@interface EDString : NSObject <NSCopying, EDImmutableObject> {

	NSString* mString;
	EDRunsCollection* mRuns;
	EDPhoneticInfo* mPhoneticInfo;
	BOOL mDoNotModify;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)string;
+(id)edStringWithString:(id)arg1 ;
+(id)edStringWithString:(id)arg1 runs:(id)arg2 ;
-(char)isEqualToString:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(void)appendString:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEmpty;
-(id)string;
-(id)initWithString:(id)arg1 ;
-(void)setString:(id)arg1 ;
-(id)runs;
-(void)setRuns:(id)arg1 ;
-(BOOL)areThereRuns;
-(id)firstRunFont;
-(id)phoneticInfo;
-(id)initWithString:(id)arg1 runs:(id)arg2 ;
-(char)isEqualToEDString:(id)arg1 ;
-(void)setPhoneticInfo:(id)arg1 ;
-(void)prependString:(id)arg1 ;
-(void)setDoNotModify:(BOOL)arg1 ;
@end

