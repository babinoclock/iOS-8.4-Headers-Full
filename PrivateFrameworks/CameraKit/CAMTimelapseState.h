/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:39:37 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CameraKit/CameraKit-Structs.h>
#import <CameraKit/NSCoding.h>
#import <CameraKit/NSCopying.h>

@class NSString, NSDate, CLLocation;

@interface CAMTimelapseState : NSObject <NSCoding, NSCopying> {

	char _usingFrontCamera;
	char _allFramesWritten;
	NSString* _timelapseUUID;
	int _captureOrientation;
	NSDate* _startTime;
	CLLocation* _startLocation;
	NSDate* _lastFrameResponseTime;
	NSDate* _stopTime;
	int _stopReasons;
	int _frameIndexStride;
	int _nextFrameIndex;
	float _focusLensPosition;
	double _captureTimeInterval;

}

@property (nonatomic,retain) NSString * timelapseUUID;                                     //@synthesize timelapseUUID=_timelapseUUID - In the implementation block
@property (assign,getter=isUsingFrontCamera,nonatomic) char usingFrontCamera;              //@synthesize usingFrontCamera=_usingFrontCamera - In the implementation block
@property (assign,nonatomic) int captureOrientation;                                       //@synthesize captureOrientation=_captureOrientation - In the implementation block
@property (nonatomic,retain) NSDate * startTime;                                           //@synthesize startTime=_startTime - In the implementation block
@property (nonatomic,retain) CLLocation * startLocation;                                   //@synthesize startLocation=_startLocation - In the implementation block
@property (nonatomic,retain) NSDate * lastFrameResponseTime;                               //@synthesize lastFrameResponseTime=_lastFrameResponseTime - In the implementation block
@property (nonatomic,retain) NSDate * stopTime;                                            //@synthesize stopTime=_stopTime - In the implementation block
@property (assign,nonatomic) int stopReasons;                                              //@synthesize stopReasons=_stopReasons - In the implementation block
@property (assign,nonatomic) char allFramesWritten;                                        //@synthesize allFramesWritten=_allFramesWritten - In the implementation block
@property (nonatomic,readonly) double captureTimeInterval;                                 //@synthesize captureTimeInterval=_captureTimeInterval - In the implementation block
@property (nonatomic,readonly) int frameIndexStride;                                       //@synthesize frameIndexStride=_frameIndexStride - In the implementation block
@property (nonatomic,readonly) int nextFrameIndex;                                         //@synthesize nextFrameIndex=_nextFrameIndex - In the implementation block
@property (assign,nonatomic) float focusLensPosition;                                      //@synthesize focusLensPosition=_focusLensPosition - In the implementation block
@property (nonatomic,readonly) int connectionMode; 
+(double)maxTimeToWaitForWrittenFrameAfterStop;
+(id)stateWithContentsOfFile:(id)arg1 ;
-(CLLocation *)startLocation;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(char)isEqual:(id)arg1 ;
-(id)description;
-(void)setStartTime:(NSDate *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setStartLocation:(CLLocation *)arg1 ;
-(NSDate *)startTime;
-(int)stopReasons;
-(char)addStopReasons:(int)arg1 stopTime:(id)arg2 ;
-(char)mergeSecondaryState:(id)arg1 ;
-(NSString *)timelapseUUID;
-(char)canContinueCapture;
-(void)forceCompleted;
-(int)frameIndexStride;
-(char)isReadyForWritingMovie;
-(char)isUsingFrontCamera;
-(int)captureOrientation;
-(char)isEqualToState:(id)arg1 ;
-(int)nextFrameIndex;
-(void)setStopReasons:(int)arg1 ;
-(char)allFramesWritten;
-(void)setAllFramesWritten:(char)arg1 ;
-(char)incrementFrameIndex;
-(id)filePathForNextFrameIndex;
-(char)writeToFile:(id)arg1 createDirectoryIfNeeded:(char)arg2 ;
-(int)connectionMode;
-(void)setTimelapseUUID:(NSString *)arg1 ;
-(void)setUsingFrontCamera:(char)arg1 ;
-(void)setCaptureOrientation:(int)arg1 ;
-(NSDate *)lastFrameResponseTime;
-(void)setLastFrameResponseTime:(NSDate *)arg1 ;
-(double)captureTimeInterval;
-(float)focusLensPosition;
-(void)setFocusLensPosition:(float)arg1 ;
-(void)setStopTime:(NSDate *)arg1 ;
-(NSDate *)stopTime;
@end

