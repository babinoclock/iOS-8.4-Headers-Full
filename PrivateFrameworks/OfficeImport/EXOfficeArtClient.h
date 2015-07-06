/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:43 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/OAXClient.h>

@interface EXOfficeArtClient : OAXClient {

	char mAutoChartFillIsHollow;
	char mAutoChartStrokeIsHollow;

}

@property (assign) char autoChartFillIsHollow; 
@property (assign) char autoChartStrokeIsHollow; 
-(void)readClientDataFromNode:(xmlNode*)arg1 toDrawable:(id)arg2 state:(id)arg3 ;
-(char)chartAutoFillIsHollow;
-(char)chartAutoStrokeIsHollow;
-(void)setAutoChartFillIsHollow:(char)arg1 ;
-(void)setAutoChartStrokeIsHollow:(char)arg1 ;
-(char)autoChartFillIsHollow;
-(char)autoChartStrokeIsHollow;
@end
