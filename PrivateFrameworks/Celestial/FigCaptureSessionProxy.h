/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:39:44 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol FigCaptureSessionPreviewTapDelegate;
#import <Celestial/Celestial-Structs.h>
@interface FigCaptureSessionProxy : NSObject {

	OpaqueFigCaptureSessionRef _session;
	long long _identifier;
	char _previewTapOpened;
	id<FigCaptureSessionPreviewTapDelegate> _previewTapDelegate;

}

@property (readonly) long long identifier; 
+(void)initialize;
-(void)dealloc;
-(long long)identifier;
-(long)openPreviewTapWithDelegate:(id)arg1 ;
-(void)closePreviewTap;
-(id)initWithFigCaptureSession:(OpaqueFigCaptureSessionRef)arg1 identifier:(long long)arg2 ;
@end

