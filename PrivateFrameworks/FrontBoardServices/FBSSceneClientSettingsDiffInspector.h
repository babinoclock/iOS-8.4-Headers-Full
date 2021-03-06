/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:40:32 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class BSMutableSettings;

@interface FBSSceneClientSettingsDiffInspector : NSObject {

	BSMutableSettings* _observerInfo;
	char _iteratingObservers;

}
-(void)dealloc;
-(id)init;
-(id)description;
-(void)inspectDiff:(id)arg1 withContext:(void*)arg2 ;
-(void)observeOtherSetting:(unsigned)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)observeOcclusionsWithBlock:(/*^block*/id)arg1 ;
-(void)_addObserver:(id)arg1 forSetting:(unsigned)arg2 inInfo:(id)arg3 ;
-(void)removeAllObservers;
-(void)observeClassWithBlock:(/*^block*/id)arg1 ;
-(void)observePreferredLevelWithBlock:(/*^block*/id)arg1 ;
-(void)observePreferredInterfaceOrientationWithBlock:(/*^block*/id)arg1 ;
@end

