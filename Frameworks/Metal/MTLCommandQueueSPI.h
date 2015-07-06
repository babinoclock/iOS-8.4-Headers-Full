/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:37:43 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol MTLCommandQueueSPI <MTLCommandQueue>
@property (assign) int backgroundTrackingPID; 
@property (assign) char skipRender; 
@property (assign) char executionEnabled; 
@property (getter=isProfilingEnabled) char profilingEnabled; 
@required
-(char)isProfilingEnabled;
-(int)backgroundTrackingPID;
-(void)setBackgroundTrackingPID:(int)arg1;
-(char)skipRender;
-(void)setSkipRender:(char)arg1;
-(char)executionEnabled;
-(void)setExecutionEnabled:(char)arg1;
-(void)setProfilingEnabled:(char)arg1;
-(void)finish;

@end
