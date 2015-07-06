/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:43:13 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <VoiceMemos/VoiceMemos-Structs.h>
#import <VoiceMemos/RCTrimCompositionOperation.h>

@class RCSavedRecording;

@interface RCTrimSavedRecordingOperation : RCTrimCompositionOperation {

	RCSavedRecording* _sourceRecording;
	RCSavedRecording* _destinationRecording;

}

@property (nonatomic,readonly) RCSavedRecording * sourceRecording;                   //@synthesize sourceRecording=_sourceRecording - In the implementation block
@property (nonatomic,readonly) RCSavedRecording * destinationRecording;              //@synthesize destinationRecording=_destinationRecording - In the implementation block
-(void)main;
-(id)initWithSourceRecording:(id)arg1 destinationRecording:(id)arg2 timeRange:(SCD_Struct_RC4)arg3 trimMode:(int)arg4 ;
-(RCSavedRecording *)sourceRecording;
-(RCSavedRecording *)destinationRecording;
@end

