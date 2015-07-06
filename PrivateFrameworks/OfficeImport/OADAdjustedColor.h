/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:37 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/OADColor.h>

@class OADColor;

@interface OADAdjustedColor : OADColor {

	OADColor* mBaseColor;
	int mAdjustmentType;
	unsigned char mAdjustmentParam;
	char mInvert;
	char mInvert128;
	char mGray;

}
-(char)invert;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithBaseColor:(id)arg1 adjustmentType:(int)arg2 adjustmentParam:(unsigned char)arg3 invert:(char)arg4 invert128:(char)arg5 gray:(char)arg6 ;
-(id)baseColor;
-(char)gray;
-(unsigned char)adjustmentParam;
-(char)invert128;
-(int)adjustmentType;
@end

