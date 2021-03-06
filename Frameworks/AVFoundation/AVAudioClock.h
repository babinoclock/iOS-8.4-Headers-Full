/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:36:14 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/libAVFAudio.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <libAVFAudio.dylib/libAVFAudio.dylib-Structs.h>
@class AVAudioTime;

@interface AVAudioClock : NSObject {

	void* _impl;

}

@property (nonatomic,readonly) AVAudioTime * currentTime; 
-(AudioTimeStamp)currentAudioTimeStamp;
-(id)awaitIOCycle:(unsigned*)arg1 ;
-(void)dealloc;
-(id)init;
-(id)initWithNode:(AVAudioNodeImplBase*)arg1 ;
-(AVAudioTime *)currentTime;
@end

