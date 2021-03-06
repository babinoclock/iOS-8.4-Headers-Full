/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:37:50 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/PassKit.framework/PassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PassKit/PassKit-Structs.h>
#import <PassKit/AVCaptureMetadataOutputObjectsDelegate.h>

@protocol OS_dispatch_queue, PKCaptureDelegate;
@class AVCaptureSession, AVCaptureDeviceInput, NSObject, AVCaptureVideoPreviewLayer, NSString;

@interface PKCaptureSession : NSObject <AVCaptureMetadataOutputObjectsDelegate> {

	AVCaptureSession* _captureSession;
	AVCaptureDeviceInput* _deviceInput;
	NSObject*<OS_dispatch_queue> _metadataQueue;
	AVCaptureVideoPreviewLayer* _previewLayer;
	id<PKCaptureDelegate> _delegate;

}

@property (nonatomic,readonly) AVCaptureVideoPreviewLayer * previewLayer;              //@synthesize previewLayer=_previewLayer - In the implementation block
@property (nonatomic,readonly) char isRunning; 
@property (assign,nonatomic) id<PKCaptureDelegate> delegate;                           //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)startRunning;
-(void)stopRunning;
-(void)_changeCameraConfiguration;
-(void)setupCameraSession;
-(void)autoExposeAtPoint:(CGPoint)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id<PKCaptureDelegate>)arg1 ;
-(id<PKCaptureDelegate>)delegate;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(char)isRunning;
-(AVCaptureVideoPreviewLayer *)previewLayer;
-(void)autoFocusAtPoint:(CGPoint)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
@end

