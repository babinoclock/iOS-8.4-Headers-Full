/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:35 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/OITSUProgress.h>

@class OITSUBasicProgressStorage;

@interface OITSUBasicProgress : OITSUProgress {

	OITSUBasicProgressStorage* mStorage;

}

@property (assign) double value; 
@property (getter=isIndeterminate) char indeterminate; 
-(double)maxValue;
-(void)dealloc;
-(id)init;
-(double)value;
-(void)setValue:(double)arg1 ;
-(char)isIndeterminate;
-(void)setIndeterminate:(char)arg1 ;
-(id)initWithMaxValue:(double)arg1 ;
@end

