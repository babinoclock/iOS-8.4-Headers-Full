/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:44 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/WDRun.h>

@class WDCharacterProperties, NSDate;

@interface WDDateTime : WDRun {

	WDCharacterProperties* mProperties;
	NSDate* mDate;

}
-(void)clearProperties;
-(void)dealloc;
-(id)date;
-(void)setProperties:(id)arg1 ;
-(id)properties;
-(int)runType;
-(id)initWithParagraph:(id)arg1 date:(id)arg2 ;
@end

