/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:36:13 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <AVFoundation/AVFoundation-Structs.h>
@class AVCaptureInputInternal_FigRecorder, NSArray;

@interface AVCaptureInput_FigRecorder : NSObject {

	AVCaptureInputInternal_FigRecorder* _inputInternal;

}

@property (nonatomic,readonly) NSArray * ports; 
-(void)_applyOverridesToCaptureOptions:(id)arg1 ;
-(void)didStopForSession:(id)arg1 error:(id)arg2 ;
-(void)didStartForSession:(id)arg1 ;
-(void)handleNotification:(id)arg1 payload:(id)arg2 ;
-(id)notReadyError;
-(NSArray *)ports;
-(void)willStartForSession:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(char)isKindOfClass:(Class)arg1 ;
-(id)session;
-(void)setSession:(id)arg1 ;
-(OpaqueCMClockRef)clock;
@end

