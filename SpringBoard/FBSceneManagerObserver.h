/*
* This header is generated by classdump-dyld 0.7
* on Monday, July 6, 2015 at 12:14:44 AM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol FBSceneManagerObserver <NSObject>
@required
-(void)sceneManager:(id)arg1 didCreateScene:(id)arg2 withClient:(id)arg3;
-(void)sceneManager:(id)arg1 willUpdateScene:(id)arg2 withSettings:(id)arg3 transitionContext:(id)arg4;
-(void)sceneManager:(id)arg1 willCommitUpdateForScene:(id)arg2 transactionID:(unsigned)arg3;
-(void)sceneManager:(id)arg1 didCommitUpdateForScene:(id)arg2 transactionID:(unsigned)arg3;
-(void)sceneManager:(id)arg1 willDestroyScene:(id)arg2;
-(void)sceneManager:(id)arg1 didDestroyScene:(id)arg2;

@end

