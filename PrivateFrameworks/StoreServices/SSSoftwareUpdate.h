/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:57 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSDictionary, NSDate, NSString;

@interface SSSoftwareUpdate : NSObject {

	NSDictionary* _dictionary;
	NSDate* _installDate;
	int _updateState;

}

@property (nonatomic,readonly) NSDictionary * updateDictionary;              //@synthesize dictionary=_dictionary - In the implementation block
@property (nonatomic,readonly) NSString * bundleIdentifier; 
@property (nonatomic,copy) NSDate * installDate;                             //@synthesize installDate=_installDate - In the implementation block
@property (nonatomic,readonly) int parentalControlsRank; 
@property (nonatomic,readonly) long long storeItemIdentifier; 
@property (assign,nonatomic) int updateState;                                //@synthesize updateState=_updateState - In the implementation block
-(long long)storeItemIdentifier;
-(void)dealloc;
-(NSString *)bundleIdentifier;
-(int)updateState;
-(int)parentalControlsRank;
-(id)initWithUpdateDictionary:(id)arg1 ;
-(void)setUpdateState:(int)arg1 ;
-(void)setInstallDate:(NSDate *)arg1 ;
-(NSDate *)installDate;
-(NSDictionary *)updateDictionary;
@end

