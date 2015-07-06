/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:43:14 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <VoiceMemos/VoiceMemos-Structs.h>
#import <VoiceMemos/RCFileInputWaveformDataSource.h>

@interface _RCTimeRangeFileInputWaveformDataSource : RCFileInputWaveformDataSource {

	char _isDecomposedFragment;
	double _destinationBeginTime;
	SCD_Struct_RC4 _sourceTimeRange;

}

@property (assign,nonatomic) char isDecomposedFragment;                   //@synthesize isDecomposedFragment=_isDecomposedFragment - In the implementation block
@property (assign,nonatomic) double destinationBeginTime;                 //@synthesize destinationBeginTime=_destinationBeginTime - In the implementation block
@property (assign,nonatomic) SCD_Struct_RC4 sourceTimeRange;              //@synthesize sourceTimeRange=_sourceTimeRange - In the implementation block
-(void)saveGeneratedWaveformIfNecessary;
-(void)setSourceTimeRange:(SCD_Struct_RC4)arg1 ;
-(void)setDestinationBeginTime:(double)arg1 ;
-(void)setIsDecomposedFragment:(char)arg1 ;
-(double)destinationBeginTime;
-(SCD_Struct_RC4)sourceTimeRange;
-(char)isDecomposedFragment;
@end

