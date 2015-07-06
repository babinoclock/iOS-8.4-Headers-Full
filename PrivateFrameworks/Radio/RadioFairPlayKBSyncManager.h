/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:17 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/Radio.framework/Radio
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableArray;

@interface RadioFairPlayKBSyncManager : NSObject {

	NSObject*<OS_dispatch_queue> _accessQueue;
	unsigned long long _activeAccountIdentifier;
	NSMutableArray* _dpInfoKeyBagSyncDataBlobs;

}
+(id)sharedManager;
-(void)dealloc;
-(id)init;
-(id)popDPInfoKeyBagSyncDataWithCount:(int)arg1 returningAccountIdentifier:(unsigned long long*)arg2 error:(id*)arg3 ;
-(void)pushDPInfoKeyBagSyncData:(id)arg1 forAccountIdentifier:(unsigned long long)arg2 ;
-(void)_accountStoreDidChangeNotification:(id)arg1 ;
@end

