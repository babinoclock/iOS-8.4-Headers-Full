/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:43:13 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <VoiceMemos/VoiceMemos-Structs.h>
#import <VoiceMemos/RCWaveform.h>

@interface RCMutableWaveform : RCWaveform
-(id)classForCoder;
-(void)removeAllSegments;
-(id)segments;
-(void)setSegments:(id)arg1 ;
-(void)addSegment:(id)arg1 ;
-(char)clipToTimeRange:(SCD_Struct_RC4)arg1 ;
-(void)addSegments:(id)arg1 ;
-(void)removeSegment:(id)arg1 ;
@end

