/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:36:11 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <AVFoundation/AVFoundation-Structs.h>
@class AVCaptureOutputInternal, NSArray;

@interface AVCaptureOutput : NSObject {

	AVCaptureOutputInternal* _outputInternal;

}

@property (nonatomic,readonly) NSArray * connections; 
+(void)initialize;
-(id)liveConnections;
-(id)connectionWithMediaType:(id)arg1 ;
-(id)connectionMediaTypes;
-(int)changeSeed;
-(id)_inputForConnection:(id)arg1 ;
-(char)appliesMirroringWithPhysicalFlipForConnection:(id)arg1 ;
-(char)appliesOrientationWithPhysicalRotationForConnection:(id)arg1 ;
-(id)firstEnabledConnectionForMediaType:(id)arg1 ;
-(char)canAddConnectionForMediaType:(id)arg1 ;
-(id)transformedMetadataObjectForMetadataObject:(id)arg1 connection:(id)arg2 ;
-(CGRect)metadataOutputRectOfInterestForRect:(CGRect)arg1 ;
-(CGRect)rectForMetadataOutputRectOfInterest:(CGRect)arg1 ;
-(id)addConnection:(id)arg1 error:(id*)arg2 ;
-(void)removeConnection:(id)arg1 ;
-(void)bumpChangeSeed;
-(id)recommendedOutputSettingsForConnection:(id)arg1 sourceSettings:(id)arg2 fileType:(id)arg3 ;
-(void)attachSafelyToFigCaptureSession:(OpaqueFigCaptureSessionRef)arg1 ;
-(void)detachSafelyFromFigCaptureSession:(OpaqueFigCaptureSessionRef)arg1 ;
-(id)sinkID;
-(void)performFigCaptureSessionOperationSafelyUsingBlock:(/*^block*/id)arg1 ;
-(void)setSinkID:(id)arg1 ;
-(void)attachToFigCaptureSession:(OpaqueFigCaptureSessionRef)arg1 ;
-(void)detachFromFigCaptureSession:(OpaqueFigCaptureSessionRef)arg1 ;
-(void)performBlockOnSessionNotifyingThread:(/*^block*/id)arg1 ;
-(char)hasRequiredOutputFormatForConnection:(id)arg1 ;
-(CGSize)outputSizeForSourceFormat:(id)arg1 ;
-(void)updateMetadataTransformForSourceFormat:(id)arg1 ;
-(id)_recommendedVideoOutputSettingsForConnection:(id)arg1 sourceSettings:(id)arg2 ;
-(id)_recommendedAudioOutputSettingsForConnection:(id)arg1 sourceSettings:(id)arg2 fileType:(id)arg3 ;
-(int)requiredOutputFormatForConnection:(id)arg1 ;
-(NSArray *)connections;
-(void)dealloc;
-(id)init;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)session;
-(void)setSession:(id)arg1 ;
@end

