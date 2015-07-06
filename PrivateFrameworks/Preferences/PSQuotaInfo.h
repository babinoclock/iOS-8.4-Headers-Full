/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:12 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface PSQuotaInfo : NSObject {

	NSMutableDictionary* _mediaKindDict;
	unsigned long long _totalStorage;
	unsigned long long _usedStorage;

}

@property (assign,nonatomic) unsigned long long totalStorage;              //@synthesize totalStorage=_totalStorage - In the implementation block
@property (assign,nonatomic) unsigned long long usedStorage;               //@synthesize usedStorage=_usedStorage - In the implementation block
-(void)dealloc;
-(id)init;
-(unsigned)storageInUseForMediaKind:(int)arg1 ;
-(unsigned long long)totalStorage;
-(unsigned long long)usedStorage;
-(void)setStorageInUse:(unsigned)arg1 forMediaKind:(int)arg2 ;
-(void)setTotalStorage:(unsigned long long)arg1 ;
-(void)setUsedStorage:(unsigned long long)arg1 ;
@end

