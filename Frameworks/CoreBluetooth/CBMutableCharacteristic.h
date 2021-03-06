/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:36:32 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/CoreBluetooth.framework/CoreBluetooth
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreBluetooth/CBCharacteristic.h>

@class NSNumber, NSMutableArray, NSArray, CBUUID, NSData;

@interface CBMutableCharacteristic : CBCharacteristic {

	NSNumber* _ID;
	unsigned _permissions;
	NSMutableArray* _subscribedCentrals;

}

@property (assign,nonatomic) unsigned permissions;                     //@synthesize permissions=_permissions - In the implementation block
@property (retain,readonly) NSArray * subscribedCentrals;              //@synthesize subscribedCentrals=_subscribedCentrals - In the implementation block
@property (nonatomic,retain) CBUUID * UUID; 
@property (assign,nonatomic) unsigned properties; 
@property (retain) NSData * value; 
@property (retain) NSArray * descriptors; 
@property (retain) NSNumber * ID;                                      //@synthesize ID=_ID - In the implementation block
-(NSNumber *)ID;
-(id)initWithService:(id)arg1 dictionary:(id)arg2 ;
-(char)handleCentralSubscribed:(id)arg1 ;
-(char)handleCentralUnsubscribed:(id)arg1 ;
-(void)handlePowerNotOn;
-(NSArray *)subscribedCentrals;
-(void)dealloc;
-(id)description;
-(void)setProperties:(unsigned)arg1 ;
-(void)setDescriptors:(NSArray *)arg1 ;
-(void)setID:(NSNumber *)arg1 ;
-(id)initWithType:(id)arg1 properties:(unsigned)arg2 value:(id)arg3 permissions:(unsigned)arg4 ;
-(unsigned)permissions;
-(void)setPermissions:(unsigned)arg1 ;
@end

