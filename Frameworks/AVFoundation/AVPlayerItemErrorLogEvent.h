/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:36:12 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/NSCopying.h>

@class AVPlayerItemErrorLogEventInternal, NSDate, NSString;

@interface AVPlayerItemErrorLogEvent : NSObject <NSCopying> {

	AVPlayerItemErrorLogEventInternal* _playerItemErrorLogEvent;

}

@property (nonatomic,readonly) NSDate * date; 
@property (nonatomic,readonly) NSString * URI; 
@property (nonatomic,readonly) NSString * serverAddress; 
@property (nonatomic,readonly) NSString * playbackSessionID; 
@property (nonatomic,readonly) int errorStatusCode; 
@property (nonatomic,readonly) NSString * errorDomain; 
@property (nonatomic,readonly) NSString * errorComment; 
-(NSString *)URI;
-(NSString *)serverAddress;
-(NSString *)playbackSessionID;
-(int)errorStatusCode;
-(NSString *)errorComment;
-(void)dealloc;
-(id)init;
-(id)initWithDictionary:(id)arg1 ;
-(NSDate *)date;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)errorDomain;
-(void)finalize;
@end

