/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:39 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/MFObject.h>

@class NSMutableArray;

@interface MFPalette : NSObject <MFObject> {

	NSMutableArray* m_colours;

}
+(id)paletteWithColours:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)getColour:(int)arg1 ;
-(char)setEntries:(int)arg1 :(id)arg2 ;
-(char)resize:(int)arg1 ;
-(int)selectInto:(id)arg1 ;
-(id)initWithColours:(id)arg1 ;
@end

