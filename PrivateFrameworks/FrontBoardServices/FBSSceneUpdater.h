/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:40:32 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol FBSSceneUpdater <NSObject>
@required
-(void)scene:(id)arg1 didReceiveActions:(id)arg2;
-(void)registerDelegate:(id)arg1 forSceneID:(id)arg2;
-(void)unregisterDelegateForSceneID:(id)arg1;
-(char)willObserveContextsManually;
-(void)scene:(id)arg1 didAttachContext:(id)arg2;
-(void)scene:(id)arg1 didReceiveUpdateToContext:(id)arg2;
-(void)scene:(id)arg1 didDetachContext:(id)arg2;
-(void)scene:(id)arg1 didUpdateClientSettings:(id)arg2 withDiff:(id)arg3 transitionContext:(id)arg4;

@end

