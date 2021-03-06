/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:06 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/IMAVCore.framework/IMAVCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface IMAVCamera : NSObject {

	id _internalDevice;

}

@property (nonatomic,retain,readonly) NSString * name; 
@property (nonatomic,retain,readonly) NSString * uniqueID; 
@property (nonatomic,readonly) int cameraStyle; 
@property (nonatomic,readonly) char isWideScreen; 
@property (nonatomic,readonly) char hasShutter; 
@property (nonatomic,readonly) char isShutterOpen; 
@property (nonatomic,readonly) char isSuspended; 
-(char)isSuspended;
-(void)dealloc;
-(id)init;
-(id)description;
-(NSString *)name;
-(int)cameraStyle;
-(id)_initWithAVCamera:(id)arg1 ;
-(char)isWideScreen;
-(char)hasShutter;
-(char)isShutterOpen;
-(id)_AVCamera;
-(NSString *)uniqueID;
@end

