/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:34 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/SplashBoard.framework/SplashBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol FBApplicationLibraryPreInstallClient <FBApplicationLibraryObserver>
@optional
-(void)applicationLibrary:(id)arg1 _willNotify_didAddPlaceholders:(id)arg2 completion:(/*^block*/id)arg3;
-(void)applicationLibrary:(id)arg1 _willNotify_didAddApplications:(id)arg2 completion:(/*^block*/id)arg3;
-(void)applicationLibrary:(id)arg1 _willNotify_didCancelPlaceholders:(id)arg2 completion:(/*^block*/id)arg3;
-(void)applicationLibrary:(id)arg1 _willNotify_didReplaceApplications:(id)arg2 withApplications:(id)arg3 completion:(/*^block*/id)arg4;
-(void)applicationLibrary:(id)arg1 _willNotify_didRemoveApplications:(id)arg2 completion:(/*^block*/id)arg3;

@end
