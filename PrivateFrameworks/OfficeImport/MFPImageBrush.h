/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:39 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/MFPBrush.h>

@class OITSUImage, OITSUColor;

@interface MFPImageBrush : MFPBrush {

	OITSUImage* mPhoneImage;
	OITSUColor* mPhonePatternColor;

}
-(void)dealloc;
-(id)color;
-(void)fillPath:(id)arg1 ;
-(id)initWithPhoneImage:(id)arg1 ;
@end

