/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:37:37 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol MPAVErrorResolverDelegate;
@interface MPAVErrorResolver : NSObject {

	id<MPAVErrorResolverDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MPAVErrorResolverDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)resolveError:(id)arg1 ;
-(void)sendDidResolveError:(id)arg1 withResolution:(int)arg2 ;
-(void)setDelegate:(id<MPAVErrorResolverDelegate>)arg1 ;
-(id<MPAVErrorResolverDelegate>)delegate;
@end
