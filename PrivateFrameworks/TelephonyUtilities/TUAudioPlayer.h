/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:43:01 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol TUAudioPlayerDelegateProtocol;
@interface TUAudioPlayer : NSObject {

	id<TUAudioPlayerDelegateProtocol> _delegate;

}

@property (assign,nonatomic) id<TUAudioPlayerDelegateProtocol> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) char playingSound; 
-(void)dealloc;
-(void)setDelegate:(id<TUAudioPlayerDelegateProtocol>)arg1 ;
-(id<TUAudioPlayerDelegateProtocol>)delegate;
-(void)stop;
-(void)playSelectedSound;
-(void)playSound:(int)arg1 numOfLoops:(int)arg2 pauseDuration:(float)arg3 ;
-(char)playingSound;
@end

