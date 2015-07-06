/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:40:32 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FrontBoardServices/FBSScene.h>

@protocol FBSSceneDelegate, FBSSceneUpdater, OS_dispatch_queue;
@class NSString, FBSSceneSettings, FBSSceneClientSettings, CADisplay, FBSDisplay, FBSSerialQueue, NSObject, NSMutableArray;

@interface FBSSceneImpl : FBSScene {

	id<FBSSceneDelegate> _delegate;
	NSString* _identifier;
	FBSSceneSettings* _settings;
	FBSSceneClientSettings* _clientSettings;
	id<FBSSceneUpdater> _updater;
	CADisplay* _display;
	FBSDisplay* _fbsDisplay;
	FBSSerialQueue* _callOutQueue;
	NSObject*<OS_dispatch_queue> _queue;
	NSMutableArray* _contexts;
	char _shouldObserveContexts;

}
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)description;
-(id)delegate;
-(id)fbsDisplay;
-(id)settings;
-(id)clientSettings;
-(void)sendActions:(id)arg1 ;
-(id)display;
-(id)identifier;
-(void)attachContext:(id)arg1 ;
-(void)detachContext:(id)arg1 ;
-(id)initWithQueue:(id)arg1 identifier:(id)arg2 display:(id)arg3 settings:(id)arg4 clientSettings:(id)arg5 ;
-(void)updateClientSettingsWithBlock:(/*^block*/id)arg1 ;
-(id)contexts;
-(void)updater:(id)arg1 didUpdateSettings:(id)arg2 withDiff:(id)arg3 transitionContext:(id)arg4 completion:(/*^block*/id)arg5 ;
-(id)_initWithInternalQueue:(id)arg1 callOutQueue:(id)arg2 updater:(id)arg3 identifier:(id)arg4 display:(id)arg5 settings:(id)arg6 clientSettings:(id)arg7 ;
-(void)updater:(id)arg1 didReceiveActions:(id)arg2 ;
-(id)_descriptionWithMultilinePrefix:(id)arg1 ;
-(void)_queue_invalidate;
-(void)updateClientSettings:(id)arg1 withTransitionContext:(id)arg2 ;
-(void)attachSceneContext:(id)arg1 ;
-(void)detachSceneContext:(id)arg1 ;
-(void)_performDelegateCallOut:(/*^block*/id)arg1 ;
-(id)_initWithQueue:(id)arg1 callOutQueue:(id)arg2 identifier:(id)arg3 display:(id)arg4 settings:(id)arg5 clientSettings:(id)arg6 ;
-(void)_updateContext:(id)arg1 ;
-(id)_initWithWorkspace:(id)arg1 updater:(id)arg2 identifier:(id)arg3 display:(id)arg4 settings:(id)arg5 clientSettings:(id)arg6 ;
-(id)_initWithCallOutQueue:(id)arg1 updater:(id)arg2 identifier:(id)arg3 display:(id)arg4 settings:(id)arg5 clientSettings:(id)arg6 ;
-(char)sceneContextShouldObserveUpdates:(id)arg1 ;
-(void)sceneContextDidUpdate:(id)arg1 ;
-(void)sceneContextDidInvalidate:(id)arg1 ;
@end

