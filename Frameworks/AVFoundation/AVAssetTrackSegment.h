/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:36:11 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <AVFoundation/AVFoundation-Structs.h>
@interface AVAssetTrackSegment : NSObject {

	SCD_Struct_CM6 _timeMapping;

}

@property (nonatomic,readonly) SCD_Struct_CM6 timeMapping;              //@synthesize timeMapping=_timeMapping - In the implementation block
@property (getter=isEmpty,nonatomic,readonly) char empty; 
-(SCD_Struct_CM6)timeMapping;
-(id)_initWithTimeMapping:(SCD_Struct_CM6)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(char)isEmpty;
@end

