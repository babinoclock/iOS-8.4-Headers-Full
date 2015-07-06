/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:39:52 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface CKAudioSessionController : NSObject {

	char _active;
	char _shouldUseSpeaker;
	char _dirty;

}

@property (getter=isActive) char active;               //@synthesize active=_active - In the implementation block
@property (assign) char shouldUseSpeaker;              //@synthesize shouldUseSpeaker=_shouldUseSpeaker - In the implementation block
@property (getter=isDirty) char dirty;                 //@synthesize dirty=_dirty - In the implementation block
+(id)shareInstance;
+(id)queue;
-(void)setDirty:(char)arg1 ;
-(void)dealloc;
-(id)init;
-(char)isActive;
-(void)deactivate;
-(void)setActive:(char)arg1 ;
-(void)activateUsingSpeaker:(char)arg1 completion:(/*^block*/id)arg2 ;
-(void)setShouldUseSpeaker:(char)arg1 ;
-(void)audioSessionInterruption:(id)arg1 ;
-(char)shouldUseSpeaker;
-(void)audioSessionRouteChange:(id)arg1 ;
-(void)audioSessionMediaServicesWereLost:(id)arg1 ;
-(void)audioSessionMediaServicesWereReset:(id)arg1 ;
-(void)setActive:(char)arg1 shouldUseSpeaker:(char)arg2 completion:(/*^block*/id)arg3 ;
-(void)configureAudioSession:(char)arg1 ;
-(char)isDirty;
@end

