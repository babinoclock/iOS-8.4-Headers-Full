/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:39:27 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface AAUIServerSuppliedProfilePictureCache : NSObject {

	NSMutableDictionary* _personIDToEntryMap;
	float _pictureDiameter;

}

@property (nonatomic,readonly) float pictureDiameter; 
+(id)sharedCache;
-(id)init;
-(void)_ensureMinimumPictureDiameter_mustBeSynchronized:(float)arg1 ;
-(float)pictureDiameter;
-(id)profilePictureForPersonID:(id)arg1 diameter:(float)arg2 serverFetchBlock:(/*^block*/id)arg3 ;
-(void)profilePictureForPersonID:(id)arg1 diameter:(float)arg2 completion:(/*^block*/id)arg3 ;
-(char)updateProfilePicture:(id)arg1 didReceiveNewPicture:(char)arg2 serverCacheTag:(id)arg3 forPersonID:(id)arg4 ;
@end
