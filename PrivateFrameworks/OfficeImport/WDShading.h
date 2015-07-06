/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:45 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/NSCopying.h>

@class OITSUColor;

@interface WDShading : NSObject <NSCopying> {

	int mStyle;
	OITSUColor* mForegroundColor;
	OITSUColor* mBackgroundColor;

}
+(id)autoForegroundColor;
+(id)autoBackgroundColor;
+(id)nullShading;
-(void)dealloc;
-(id)init;
-(char)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)style;
-(void)setStyle:(int)arg1 ;
-(id)background;
-(void)setBackground:(id)arg1 ;
-(id)foreground;
-(void)setForeground:(id)arg1 ;
-(void)setShading:(id)arg1 ;
-(char)isEqualToShading:(id)arg1 ;
@end

