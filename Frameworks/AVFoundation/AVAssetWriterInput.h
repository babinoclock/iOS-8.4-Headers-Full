/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:36:09 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <AVFoundation/AVFoundation-Structs.h>
@class AVAssetWriterInputInternal, NSString, NSDictionary, NSArray, AVOutputSettings, AVWeakReference, AVAssetWriterInputHelper;

@interface AVAssetWriterInput : NSObject {

	AVAssetWriterInputInternal* _internal;

}

@property (nonatomic,readonly) NSString * mediaType; 
@property (nonatomic,readonly) NSDictionary * outputSettings; 
@property (nonatomic,readonly) opaqueCMFormatDescriptionRef sourceFormatHint; 
@property (nonatomic,copy) NSArray * metadata; 
@property (getter=isReadyForMoreMediaData,nonatomic,readonly) char readyForMoreMediaData; 
@property (assign,nonatomic) char expectsMediaDataInRealTime; 
@property (getter=_outputSettingsObject,nonatomic,readonly) AVOutputSettings * outputSettingsObject; 
@property (getter=_status,nonatomic,readonly) int status; 
@property (getter=_isAttachedToMetadataAdaptor,nonatomic,readonly) char attachedToMetadataAdaptor; 
@property (setter=_setWeakReferenceToAssetWriter:,getter=_weakReferenceToAssetWriter,nonatomic,retain) AVWeakReference * weakReferenceToAssetWriter; 
@property (getter=_trackID,nonatomic,readonly) int trackID; 
@property (assign,setter=_setAlternateGroupID:,getter=_alternateGroupID,nonatomic) short alternateGroupID; 
@property (getter=_trackReferences,nonatomic,readonly) NSDictionary * trackReferences; 
@property (setter=_setHelper:,getter=_helper,nonatomic,retain) AVAssetWriterInputHelper * helper; 
@property (setter=_setSourcePixelBufferAttributes:,getter=_sourcePixelBufferAttributes,nonatomic,copy) NSDictionary * sourcePixelBufferAttributes; 
@property (getter=_pixelBufferPool,nonatomic,readonly) CVPixelBufferPoolRef pixelBufferPool; 
@property (assign,setter=_setAttachedToPixelBufferAdaptor:,getter=_isAttachedToPixelBufferAdaptor,nonatomic) char attachedToPixelBufferAdaptor; 
@property (readonly) int numberOfAppendFailures; 
+(id)keyPathsForValuesAffectingStatus;
+(id)assetWriterInputWithMediaType:(id)arg1 outputSettings:(id)arg2 ;
+(id)assetWriterInputWithMediaType:(id)arg1 outputSettings:(id)arg2 sourceFormatHint:(opaqueCMFormatDescriptionRef)arg3 ;
+(id)keyPathsForValuesAffectingReadyForMoreMediaData;
+(id)keyPathsForValuesAffectingCanPerformMultiplePasses;
+(id)keyPathsForValuesAffectingCurrentPassDescription;
+(void)initialize;
-(void)setExtendedLanguageTag:(id)arg1 ;
-(float)preferredVolume;
-(char)_isAttachedToMetadataAdaptor;
-(int)_status;
-(void)_attachToMetadataAdaptor:(id)arg1 ;
-(id)_trackReferences;
-(id)availableTrackAssociationTypes;
-(void)setNaturalSize:(CGSize)arg1 ;
-(void)setPreferredVolume:(float)arg1 ;
-(id)_outputSettingsObject;
-(opaqueCMFormatDescriptionRef)sourceFormatHint;
-(void)_setWeakReferenceToAssetWriter:(id)arg1 ;
-(void)setMarksOutputTrackAsEnabled:(char)arg1 ;
-(void)_setAlternateGroupID:(short)arg1 ;
-(short)_alternateGroupID;
-(char)expectsMediaDataInRealTime;
-(char)_prepareForWritingWithFigAssetWriter:(OpaqueFigAssetWriterRef)arg1 mediaFileType:(id)arg2 error:(id*)arg3 ;
-(int)_trackID;
-(void)_didStartInitialSession;
-(void)_prepareToEndSession;
-(char)_prepareToFinishWritingReturningError:(id*)arg1 ;
-(void)_transitionToTerminalStatus:(int)arg1 ;
-(id)_weakReferenceToAssetWriter;
-(char)marksOutputTrackAsEnabled;
-(int)mediaTimeScale;
-(void)setMediaTimeScale:(int)arg1 ;
-(void)setExpectsMediaDataInRealTime:(char)arg1 ;
-(char)performsMultiPassEncodingIfSupported;
-(void)setPerformsMultiPassEncodingIfSupported:(char)arg1 ;
-(SCD_Struct_CM4)preferredMediaChunkDuration;
-(void)setPreferredMediaChunkDuration:(SCD_Struct_CM4)arg1 ;
-(int)preferredMediaChunkAlignment;
-(void)setPreferredMediaChunkAlignment:(int)arg1 ;
-(int)preferredMediaChunkSize;
-(void)setPreferredMediaChunkSize:(int)arg1 ;
-(id)sampleReferenceBaseURL;
-(void)setSampleReferenceBaseURL:(id)arg1 ;
-(id)_sourcePixelBufferAttributes;
-(int)numberOfAppendFailures;
-(id)initWithMediaType:(id)arg1 outputSettings:(id)arg2 ;
-(id)initWithMediaType:(id)arg1 outputSettings:(id)arg2 sourceFormatHint:(opaqueCMFormatDescriptionRef)arg3 ;
-(void)_setHelper:(id)arg1 ;
-(char)isReadyForMoreMediaData;
-(char)canPerformMultiplePasses;
-(id)currentPassDescription;
-(void)requestMediaDataWhenReadyOnQueue:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(char)appendSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(void)markCurrentPassAsFinished;
-(char)canAddTrackAssociationWithTrackOfInput:(id)arg1 type:(id)arg2 ;
-(void)addTrackAssociationWithTrackOfInput:(id)arg1 type:(id)arg2 ;
-(id)associatedInputsWithTrackAssociationType:(id)arg1 ;
-(void)_tellAssetWriterToTransitionToFailedStatusWithError:(id)arg1 ;
-(CVPixelBufferPoolRef)_pixelBufferPool;
-(void)_setSourcePixelBufferAttributes:(id)arg1 ;
-(char)_isAttachedToPixelBufferAdaptor;
-(void)_setAttachedToPixelBufferAdaptor:(char)arg1 ;
-(void)respondToEachPassDescriptionOnQueue:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(char)_appendPixelBuffer:(CVBufferRef)arg1 withPresentationTime:(SCD_Struct_CM4)arg2 ;
-(id)_helper;
-(void)dealloc;
-(int)layer;
-(id)init;
-(id)description;
-(void)setTransform:(CGAffineTransform)arg1 ;
-(void)setLayer:(int)arg1 ;
-(CGAffineTransform)transform;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)languageCode;
-(CGSize)naturalSize;
-(NSDictionary *)outputSettings;
-(void)setLanguageCode:(id)arg1 ;
-(void)markAsFinished;
-(void)setMetadata:(NSArray *)arg1 ;
-(NSArray *)metadata;
-(NSString *)mediaType;
-(id)extendedLanguageTag;
-(void)finalize;
@end

