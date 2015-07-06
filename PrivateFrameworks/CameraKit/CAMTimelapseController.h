/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:39:37 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CameraKit/CAMStillImageCaptureRequestDelegate.h>
#import <UIKit/UIAlertViewDelegate.h>

@protocol OS_dispatch_source;
@class CAMTimelapseState, NSObject, NSCountedSet, NSMutableSet, CAMLowDiskSpaceAlertView, NSDate, NSString;

@interface CAMTimelapseController : NSObject <CAMStillImageCaptureRequestDelegate, UIAlertViewDelegate> {

	char __ignoringTimerCallbacksForTearDown;
	char __ignoringTimerCallbacksWaitingForCaptureResponse;
	char __backendRecoveryNeeded;
	char __previewStarted;
	CAMTimelapseState* __state;
	NSObject*<OS_dispatch_source> __captureTimer;
	NSCountedSet* __inFlightTimelapseUUIDs;
	NSMutableSet* __pendingCompletedStates;
	CAMLowDiskSpaceAlertView* __diskSpaceAlert;

}

@property (getter=isCapturing,nonatomic,readonly) char capturing; 
@property (nonatomic,readonly) NSDate * captureStartTime; 
@property (nonatomic,readonly) CAMTimelapseState * _state;                                               //@synthesize _state=__state - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_source> _captureTimer;                              //@synthesize _captureTimer=__captureTimer - In the implementation block
@property (nonatomic,readonly) char _ignoringTimerCallbacksForTearDown;                                  //@synthesize _ignoringTimerCallbacksForTearDown=__ignoringTimerCallbacksForTearDown - In the implementation block
@property (nonatomic,readonly) char _ignoringTimerCallbacksWaitingForCaptureResponse;                    //@synthesize _ignoringTimerCallbacksWaitingForCaptureResponse=__ignoringTimerCallbacksWaitingForCaptureResponse - In the implementation block
@property (nonatomic,readonly) NSCountedSet * _inFlightTimelapseUUIDs;                                   //@synthesize _inFlightTimelapseUUIDs=__inFlightTimelapseUUIDs - In the implementation block
@property (nonatomic,readonly) NSMutableSet * _pendingCompletedStates;                                   //@synthesize _pendingCompletedStates=__pendingCompletedStates - In the implementation block
@property (nonatomic,readonly) CAMLowDiskSpaceAlertView * _diskSpaceAlert;                               //@synthesize _diskSpaceAlert=__diskSpaceAlert - In the implementation block
@property (assign,setter=_setBackendRecoveryNeeded:,nonatomic) char _backendRecoveryNeeded;              //@synthesize _backendRecoveryNeeded=__backendRecoveryNeeded - In the implementation block
@property (assign,setter=_setPreviewStarted:,nonatomic) char _previewStarted;                            //@synthesize _previewStarted=__previewStarted - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(id)createPlaceholderAssetResponseForTimelapseState:(id)arg1 ;
+(void)recoverFromCrashIfNeededForceEndLastSession:(char)arg1 ;
+(id)_videoPreviewImageForTimelapseState:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2 ;
-(CAMTimelapseState *)_state;
-(void)_applicationDidEnterBackground:(id)arg1 ;
-(void)_applicationWillEnterForeground:(id)arg1 ;
-(void)_previewStarted:(id)arg1 ;
-(char)isCapturing;
-(void)stopCapturingWithReasons:(int)arg1 ;
-(void)_deviceStarted:(id)arg1 ;
-(void)_sessionStarted:(id)arg1 ;
-(void)_sessionRuntimeErrored:(id)arg1 ;
-(void)_dismissDiskSpaceAlert;
-(void)_teardownCaptureTimer;
-(void)_restoreCaptureStateFromDisk;
-(void)_prepareForTimelapseCapture;
-(void)_setBackendRecoveryNeeded:(char)arg1 ;
-(void)_triggerBackendCrashRecoveryIfNeeded;
-(char)_backendRecoveryNeeded;
-(char)_previewStarted;
-(void)_updateFocusAndExposureForStartCapturing;
-(void)_startCaptureTimer;
-(char)_startCapturing;
-(void)_notifyAGGDForDidStartCapturingWithState:(id)arg1 ;
-(void)_stopCapturingWithReasons:(int)arg1 ;
-(void)_setNewCaptureState;
-(char)_reserveDiskSpaceForTimelapseUUID:(id)arg1 ;
-(void)_saveStateToDisk:(id)arg1 ;
-(void)_updateFocusAndExposureForStopCapturing;
-(id)_createPlaceholderAssetForTimelapseState:(id)arg1 ;
-(void)_notifyAGGDForDidStopCapturingWithState:(id)arg1 ;
-(void)_notifyInsufficientDiskSpaceForStartingCaptureWithNeededBytes:(long long)arg1 availableBytes:(long long)arg2 ;
-(void)_captureTimerFired;
-(void)_updateLocationIfNecessary;
-(char)_enqueueCaptureRequest;
-(void)_notifyInsufficientDiskSpaceForContinuingCapture;
-(void)_updateFocusLensPosition:(float)arg1 forTimelapseUUID:(id)arg2 forceUpdate:(char)arg3 ;
-(void)_resetIgnoringTimerCallbacksWaitingForCaptureResponse;
-(void)_setPreviewStarted:(char)arg1 ;
-(void)captureController:(id)arg1 didGenerateResponse:(id)arg2 forStillImageRequest:(id)arg3 error:(id)arg4 ;
-(void)captureController:(id)arg1 didFinishWriteForResponse:(id)arg2 forStillImageRequest:(id)arg3 error:(id)arg4 ;
-(void)restoreConfiguration;
-(char)startCapturing;
-(NSDate *)captureStartTime;
-(NSObject*<OS_dispatch_source>)_captureTimer;
-(char)_ignoringTimerCallbacksForTearDown;
-(char)_ignoringTimerCallbacksWaitingForCaptureResponse;
-(NSCountedSet *)_inFlightTimelapseUUIDs;
-(NSMutableSet *)_pendingCompletedStates;
-(CAMLowDiskSpaceAlertView *)_diskSpaceAlert;
@end

