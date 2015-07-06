/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:02 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSArray, NSUUID;

@interface HMDHomeData : NSObject {

	NSArray* _homes;
	NSArray* _accessories;
	NSUUID* _primaryHomeUUID;
	NSArray* _uuidsOfRemovedHomes;

}

@property (nonatomic,copy,readonly) NSArray * homes;                            //@synthesize homes=_homes - In the implementation block
@property (nonatomic,copy,readonly) NSArray * accessories;                      //@synthesize accessories=_accessories - In the implementation block
@property (nonatomic,copy,readonly) NSUUID * primaryHomeUUID;                   //@synthesize primaryHomeUUID=_primaryHomeUUID - In the implementation block
@property (nonatomic,copy,readonly) NSArray * uuidsOfRemovedHomes;              //@synthesize uuidsOfRemovedHomes=_uuidsOfRemovedHomes - In the implementation block
-(NSArray *)accessories;
-(id)initWithHomes:(id)arg1 accessories:(id)arg2 primaryHomeUUID:(id)arg3 uuidsOfRemovedHomes:(id)arg4 ;
-(NSArray *)homes;
-(NSUUID *)primaryHomeUUID;
-(NSArray *)uuidsOfRemovedHomes;
@end
