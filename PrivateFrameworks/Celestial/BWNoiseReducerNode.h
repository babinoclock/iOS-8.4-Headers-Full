/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:39:43 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/BWNode.h>

@class NSDictionary;

@interface BWNoiseReducerNode : BWNode {

	NSDictionary* _cameraTuningOptions;
	NSDictionary* _noiseReductionOptions;
	opaqueCMFormatDescriptionRef _outputFormatDescription;
	NoiseReductionCtx_sRef _context;
	int _contextSynchronization;
	int _gpuPriority;
	char _threaded;
	char _processLuma;
	char _useInPlaceAlgorithm;

}
+(void)initialize;
-(void)dealloc;
-(id)nodeType;
-(void)configurationWithID:(long long)arg1 updatedFormat:(id)arg2 didBecomeLiveForInput:(id)arg3 ;
-(void)didReachEndOfDataForInput:(id)arg1 ;
-(id)nodeSubType;
-(void)renderSampleBuffer:(opaqueCMSampleBufferRef)arg1 forInput:(id)arg2 ;
-(void)didSelectFormat:(id)arg1 forInput:(id)arg2 ;
-(void)prepareForCurrentConfigurationToBecomeLive;
-(id)initWithCameraTuningDictionary:(id)arg1 sensorIDDictionary:(id)arg2 ;
@end

