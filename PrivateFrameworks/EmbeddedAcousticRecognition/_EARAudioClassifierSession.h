/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:40:28 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/EmbeddedAcousticRecognition.framework/EmbeddedAcousticRecognition
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol _EARAudioClassifierSessionDelegate;
#import <EmbeddedAcousticRecognition/EmbeddedAcousticRecognition-Structs.h>
@interface _EARAudioClassifierSession : NSObject {

	RecogAudioBuffer* _bufferedSource;
	id<_EARAudioClassifierSessionDelegate> _delegate;
	double _frameDuration;

}

@property (nonatomic,readonly) double frameDuration;              //@synthesize frameDuration=_frameDuration - In the implementation block
-(double)frameDuration;
-(void)cancel;
-(void)finish;
-(id)initWithDelegate:(id)arg1 frameDuration:(double)arg2 ;
-(void)appendAudioSamples:(const float*)arg1 count:(unsigned)arg2 ;
@end

