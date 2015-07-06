/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:36:14 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/libAVFAudio.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <libAVFAudio.dylib/libAVFAudio.dylib-Structs.h>
@interface AVVCAudioBuffer : NSObject {

	void* _impl;

}

@property (readonly) int channels; 
@property (readonly) int bytesCapacity; 
@property (assign) int bytesDataSize; 
@property (readonly) void* data; 
@property (readonly) int packetDescriptionCapacity; 
@property (readonly) int packetDescriptionCount; 
@property (readonly) AudioStreamPacketDescription* packetDescriptions; 
-(id)initWithAudioQueueBuffer:(MyAudioQueueBuffer*)arg1 channels:(int)arg2 ;
-(int)bytesCapacity;
-(void)setBytesDataSize:(int)arg1 ;
-(int)packetDescriptionCapacity;
-(void)setPacketDescriptions:(const AudioStreamPacketDescription*)arg1 count:(int)arg2 ;
-(int)channels;
-(void)dealloc;
-(void*)data;
-(int)packetDescriptionCount;
-(int)bytesDataSize;
-(AudioStreamPacketDescription*)packetDescriptions;
-(void)finalize;
@end

