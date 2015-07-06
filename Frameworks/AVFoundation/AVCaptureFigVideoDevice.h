/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:36:10 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVCaptureDevice.h>
#import <AVFoundation/MCProfileConnectionObserver.h>

@protocol OS_dispatch_queue;
@class NSObject, NSDictionary, NSString, NSArray, AVCaptureDeviceFormat, AVCaptureDeviceControlRequestQueue, AVWeakReference, NSMutableArray, NSMutableDictionary;

@interface AVCaptureFigVideoDevice : AVCaptureDevice <MCProfileConnectionObserver> {

	NSObject*<OS_dispatch_queue> _fcsQueue;
	OpaqueFigCaptureSourceRef _fcs;
	NSDictionary* _fcsAttributes;
	NSObject*<OS_dispatch_queue> _devicePropsQueue;
	NSString* _fcsUID;
	int _position;
	NSString* _localizedName;
	NSArray* _formats;
	AVCaptureDeviceFormat* _activeFormat;
	SCD_Struct_CM4 _activeMinFrameDuration;
	char _activeMinFrameDurationSetByClient;
	SCD_Struct_CM4 _activeMaxFrameDuration;
	char _activeMaxFrameDurationSetByClient;
	char _cachesFigCaptureSourceConfigurationChanges;
	int _focusMode;
	CGPoint _focusPointOfInterest;
	float _lensPositionKVO;
	char _adjustingFocus;
	int _autoFocusRangeRestriction;
	char _smoothAutoFocusEnabled;
	int _exposureMode;
	SCD_Struct_CM4 _exposureDurationKVO;
	float _ISOKVO;
	float _exposureTargetBias;
	float _exposureTargetOffsetKVO;
	CGPoint _exposurePointOfInterest;
	char _adjustingExposure;
	char _waitingForExposureAdjustmentBeforeLocking;
	int _wbMode;
	SCD_Struct_AV39 _deviceWhiteBalanceGainsKVO;
	SCD_Struct_AV39 _grayWorldDeviceWhiteBalanceGainsKVO;
	char _adjustingWB;
	unsigned long _wbCalibrationCount;
	CGPoint* _wbCalibrationTemperatures;
	double* _wbCalibrationMatrices;
	double _wbLastTargetMix;
	double _wbSeedMix;
	double _wbSeedScale;
	char _providesStortorgetMetadata;
	char _automaticallyAdjustsImageControlMode;
	AVCaptureDeviceControlRequestQueue* _manualFocusControlRequests;
	AVCaptureDeviceControlRequestQueue* _manualExposureControlRequests;
	AVCaptureDeviceControlRequestQueue* _biasedExposureControlRequests;
	AVCaptureDeviceControlRequestQueue* _manualWhiteBalanceControlRequests;
	SCD_Struct_CM4 _lastCustomExposureDuration;
	float _lastCustomExposureISO;
	int _imageControlMode;
	int _flashMode;
	char _flashActive;
	char _flashAvailable;
	int _torchMode;
	char _torchActive;
	float _torchLevel;
	char _torchAvailable;
	char _isConnected;
	char _subjectMonitoringEnabled;
	char _faceDetectionDrivenImageProcessingEnabled;
	CGRect _faceRectangle;
	int _faceRectangleAngle;
	char _automaticallyEnablesLowLightBoostWhenAvailable;
	char _lowLightBoostEnabled;
	char _highDynamicRangeSceneDetectionEnabled;
	char _automaticallyAdjustsVideoHDREnabled;
	char _videoHDREnabled;
	char _sceneIsHighDynamicRange;
	float _saturation;
	float _contrast;
	int _videoZoomDownscaleStageHint;
	int _videoZoomUpscaleStageHint;
	float _videoZoomFactor;
	float _videoZoomRampTarget;
	int _videoZoomRampCounter;
	float _videoZoomRampAcceleration;
	char _videoZoomDrawOverlay;
	AVWeakReference* _weakReference;
	NSMutableArray* _captureSourceSupportedMetadata;
	NSDictionary* _supportedOptionalFaceDetectionFeatures;
	char _eyeDetectionEnabled;
	char _eyeClosedDetectionEnabled;
	char _smileDetectionEnabled;
	NSArray* _availableBoxedMetadataFormatDescriptions;
	NSDictionary* _sessionPresetCompressionSettings;
	NSDictionary* _h264EncoderLimitations;
	NSObject*<OS_dispatch_queue> _observedHighFrequencyPropertiesQueue;
	NSMutableDictionary* _observedHighFrequencyPropertyCounts;
	NSMutableDictionary* _propertyToFigCaptureSourcePropertyMap;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_devices;
+(id)_newFigCaptureSources;
+(char)_cameraAccessIsEnabled;
+(void)initialize;
+(char)automaticallyNotifiesObserversForKey:(id)arg1 ;
+(id)alloc;
-(void)_handleNotification:(CFStringRef)arg1 payload:(id)arg2 ;
-(id)activeFormat;
-(char)isVideoStabilizationSupported;
-(SCD_Struct_CM4)activeVideoMinFrameDuration;
-(void)_setActiveVideoMinFrameDuration:(SCD_Struct_CM4)arg1 ;
-(SCD_Struct_CM4)activeVideoMaxFrameDuration;
-(void)_setActiveVideoMaxFrameDuration:(SCD_Struct_CM4)arg1 ;
-(char)isActiveVideoMinFrameDurationSet;
-(char)isEyeDetectionSupported;
-(char)isEyeClosedDetectionSupported;
-(char)isSmileDetectionSupported;
-(id)modelID;
-(char)hasMediaType:(id)arg1 ;
-(char)supportsAVCaptureSessionPreset:(id)arg1 ;
-(char)isSubjectAreaChangeMonitoringEnabled;
-(void)setSubjectAreaChangeMonitoringEnabled:(char)arg1 ;
-(char)isFaceDetectionSupported;
-(char)isFaceDetectionDuringVideoPreviewSupported;
-(char)isFaceDetectionDrivenImageProcessingEnabled;
-(void)setFaceDetectionDrivenImageProcessingEnabled:(char)arg1 ;
-(CGRect)faceRectangle;
-(int)faceRectangleAngle;
-(char)providesStortorgetMetadata;
-(void)setProvidesStortorgetMetadata:(char)arg1 ;
-(char)isHighDynamicRangeSceneDetectionSupported;
-(char)isHighDynamicRangeSceneDetectionEnabled;
-(void)setHighDynamicRangeSceneDetectionEnabled:(char)arg1 ;
-(char)isHighDynamicRangeScene;
-(void)setCachesFigCaptureSourceConfigurationChanges:(char)arg1 ;
-(char)cachesFigCaptureSourceConfigurationChanges;
-(void)_setVideoHDREnabled:(char)arg1 ;
-(void)_setStillImageStabilizationAutomaticallyEnabled:(char)arg1 ;
-(char)isMachineReadableCodeDetectionSupported;
-(char)isInUseByAnotherApplication;
-(id)formats;
-(void)setActiveFormat:(id)arg1 ;
-(void)setActiveVideoMinFrameDuration:(SCD_Struct_CM4)arg1 ;
-(void)setActiveVideoMaxFrameDuration:(SCD_Struct_CM4)arg1 ;
-(char)isActiveVideoMaxFrameDurationSet;
-(OpaqueCMClockRef)deviceClock;
-(char)isLockedForConfiguration;
-(char)lockForConfiguration:(id*)arg1 ;
-(void)unlockForConfiguration;
-(char)hasFlash;
-(char)isFlashAvailable;
-(char)isFlashActive;
-(char)isFlashModeSupported:(int)arg1 ;
-(int)flashMode;
-(void)setFlashMode:(int)arg1 ;
-(char)hasTorch;
-(float)torchLevel;
-(char)isTorchModeSupported:(int)arg1 ;
-(char)isTorchAvailable;
-(char)isTorchActive;
-(int)torchMode;
-(void)setTorchMode:(int)arg1 ;
-(char)setTorchModeOnWithLevel:(float)arg1 error:(id*)arg2 ;
-(char)isFocusModeSupported:(int)arg1 ;
-(int)focusMode;
-(void)setFocusMode:(int)arg1 ;
-(char)isFocusPointOfInterestSupported;
-(CGPoint)focusPointOfInterest;
-(char)isAdjustingFocus;
-(void)setFocusPointOfInterest:(CGPoint)arg1 ;
-(char)isAutoFocusRangeRestrictionSupported;
-(int)autoFocusRangeRestriction;
-(void)setAutoFocusRangeRestriction:(int)arg1 ;
-(char)isSmoothAutoFocusSupported;
-(char)isSmoothAutoFocusEnabled;
-(void)setSmoothAutoFocusEnabled:(char)arg1 ;
-(float)lensPosition;
-(void)setFocusModeLockedWithLensPosition:(float)arg1 completionHandler:(/*^block*/id)arg2 ;
-(float)lensAperture;
-(char)isExposureModeSupported:(int)arg1 ;
-(int)exposureMode;
-(void)setExposureMode:(int)arg1 ;
-(char)isExposurePointOfInterestSupported;
-(CGPoint)exposurePointOfInterest;
-(void)setExposurePointOfInterest:(CGPoint)arg1 ;
-(SCD_Struct_CM4)exposureDuration;
-(float)ISO;
-(float)ISODigitalThreshold;
-(void)setExposureModeCustomWithDuration:(SCD_Struct_CM4)arg1 ISO:(float)arg2 completionHandler:(/*^block*/id)arg3 ;
-(float)exposureTargetOffset;
-(float)exposureTargetBias;
-(float)minExposureTargetBias;
-(float)maxExposureTargetBias;
-(void)setExposureTargetBias:(float)arg1 completionHandler:(/*^block*/id)arg2 ;
-(char)isAdjustingExposure;
-(char)isWhiteBalanceModeSupported:(int)arg1 ;
-(int)whiteBalanceMode;
-(void)setWhiteBalanceMode:(int)arg1 ;
-(char)isAdjustingWhiteBalance;
-(SCD_Struct_AV39)deviceWhiteBalanceGains;
-(SCD_Struct_AV39)grayWorldDeviceWhiteBalanceGains;
-(float)maxWhiteBalanceGain;
-(void)setWhiteBalanceModeLockedWithDeviceWhiteBalanceGains:(SCD_Struct_AV39)arg1 completionHandler:(/*^block*/id)arg2 ;
-(CGPoint)chromaticityValuesForDeviceWhiteBalanceGains:(SCD_Struct_AV39)arg1 ;
-(SCD_Struct_AV39)deviceWhiteBalanceGainsForChromaticityValues:(CGPoint)arg1 ;
-(CGPoint)temperatureAndTintValuesForDeviceWhiteBalanceGains:(SCD_Struct_AV39)arg1 ;
-(SCD_Struct_AV39)deviceWhiteBalanceGainsForTemperatureAndTintValues:(CGPoint)arg1 ;
-(char)isImageControlModeSupported:(int)arg1 ;
-(char)automaticallyAdjustsImageControlMode;
-(void)setAutomaticallyAdjustsImageControlMode:(char)arg1 ;
-(int)imageControlMode;
-(void)setImageControlMode:(int)arg1 ;
-(char)automaticallyAdjustsVideoHDREnabled;
-(void)setAutomaticallyAdjustsVideoHDREnabled:(char)arg1 ;
-(char)isVideoHDREnabled;
-(void)setVideoHDREnabled:(char)arg1 ;
-(float)saturation;
-(void)setSaturation:(float)arg1 ;
-(float)videoZoomFactor;
-(void)setVideoZoomFactor:(float)arg1 ;
-(void)rampToVideoZoomFactor:(float)arg1 withRate:(float)arg2 ;
-(char)isRampingVideoZoom;
-(void)cancelVideoZoomRamp;
-(char)isHDRSupported;
-(char)isRawStillImageCaptureSupported;
-(char)isLowLightBoostSupported;
-(char)isLowLightBoostEnabled;
-(char)automaticallyEnablesLowLightBoostWhenAvailable;
-(void)setAutomaticallyEnablesLowLightBoostWhenAvailable:(char)arg1 ;
-(id)supportedMetadataObjectIdentifiers;
-(void)setEyeDetectionEnabled:(char)arg1 ;
-(void)setEyeClosedDetectionEnabled:(char)arg1 ;
-(void)setSmileDetectionEnabled:(char)arg1 ;
-(char)eyeDetectionEnabled;
-(char)eyeClosedDetectionEnabled;
-(char)smileDetectionEnabled;
-(id)availableBoxedMetadataFormatDescriptions;
-(id)AVVideoSettingsForSessionPreset:(id)arg1 ;
-(SCD_Struct_AV37)maxH264PhotoDimensions;
-(SCD_Struct_AV37)maxH264VideoDimensions;
-(OpaqueFigCaptureSourceRef)figCaptureSource;
-(id)_initWithFigCaptureSource:(OpaqueFigCaptureSourceRef)arg1 ;
-(void)_setFigCaptureSource:(OpaqueFigCaptureSourceRef)arg1 ;
-(id)_copyFigCaptureSourceProperty:(CFStringRef)arg1 ;
-(id)_copyFormatsArray;
-(void)_incrementObserverCountForHighFrequencyProperty:(id)arg1 ;
-(void)_decrementObserverCountForHighFrequencyProperty:(id)arg1 ;
-(void)_updateFigCaptureSourceObserverCounts;
-(long)_setFigCaptureSourceProperty:(CFStringRef)arg1 withValue:(id)arg2 ;
-(void)_drainManualControlRequestQueues;
-(void)_performBlockOnMainThread:(/*^block*/id)arg1 ;
-(long)_setActiveVideoMaxFrameDurationInternal:(SCD_Struct_CM4)arg1 ;
-(long)_setActiveVideoMinFrameDurationInternal:(SCD_Struct_CM4)arg1 ;
-(long)_setFocusWithMode:(int)arg1 lensPosition:(float)arg2 requestID:(int)arg3 ;
-(char)_hasKeyValueObserversForHighFrequencyProperty:(id)arg1 ;
-(void)_handleManualControlCompletionForRequestQueue:(id)arg1 withPayload:(id)arg2 ;
-(long)_setExposureWithMode:(int)arg1 duration:(SCD_Struct_CM4)arg2 ISO:(float)arg3 requestID:(int)arg4 newMaxFrameDuration:(SCD_Struct_CM4*)arg5 ;
-(long)_setWhiteBalanceWithMode:(int)arg1 gains:(SCD_Struct_AV39)arg2 requestID:(int)arg3 ;
-(char)_ensureWhiteBalanceCalibrationUnpacked;
-(double)_predictedMixForGains:(SCD_Struct_AV39)arg1 ;
-(CGPoint)_chromaticityValuesForDeviceWhiteBalanceGains:(SCD_Struct_AV39)arg1 atMix:(double)arg2 ;
-(SCD_Struct_AV39)_deviceWhiteBalanceGainsForChromaticityValues:(CGPoint)arg1 temperature:(float)arg2 ;
-(void)_setFlashActive:(char)arg1 ;
-(long)_setTorchMode:(int)arg1 withLevel:(float)arg2 ;
-(id)_supportedOptionalFaceDetectionFeaturesDictionary;
-(long)_setFaceDetectionFeatureEnabled:(char)arg1 enabledState:(char*)arg2 ;
-(id)_faceDetectionConfigurationDictionary;
-(void)_setAdjustingFocus:(char)arg1 ;
-(void)_setAdjustingExposure:(char)arg1 ;
-(void)_setAdjustingWhiteBalance:(char)arg1 ;
-(void)_setFlashAvailable:(char)arg1 ;
-(void)_setTorchActive:(char)arg1 ;
-(void)_setTorchAvailable:(char)arg1 ;
-(void)_setTorchLevel:(float)arg1 ;
-(void)_setImageControlMode:(int)arg1 ;
-(void)_setHighDynamicRangeScene:(char)arg1 ;
-(void)_setVideoZoomFactor:(float)arg1 ;
-(void)_setLowLightBoostEnabled:(char)arg1 ;
-(void)_drainManualControlRequestQueue:(id)arg1 ;
-(float)videoZoomRampAcceleration;
-(void)setVideoZoomRampAcceleration:(float)arg1 ;
-(char)videoZoomDrawOverlay;
-(void)setVideoZoomDrawOverlay:(char)arg1 ;
-(int)videoZoomDownscaleStageHint;
-(void)setVideoZoomDownscaleStageHint:(int)arg1 ;
-(int)videoZoomUpscaleStageHint;
-(void)setVideoZoomUpscaleStageHint:(int)arg1 ;
-(char)isSISSupported;
-(id)deviceFormatForSessionPreset:(id)arg1 videoFormat:(int)arg2 ;
-(void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2 ;
-(void)dealloc;
-(id)init;
-(void)setContrast:(float)arg1 ;
-(int)position;
-(id)localizedName;
-(void)addObserver:(id)arg1 forKeyPath:(id)arg2 options:(unsigned)arg3 context:(void*)arg4 ;
-(void)removeObserver:(id)arg1 forKeyPath:(id)arg2 context:(void*)arg3 ;
-(void)removeObserver:(id)arg1 forKeyPath:(id)arg2 ;
-(float)contrast;
-(char)isConnected;
-(id)uniqueID;
@end

