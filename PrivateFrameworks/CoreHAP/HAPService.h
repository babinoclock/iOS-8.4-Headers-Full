/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:40:09 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSNumber, HAPAccessory, NSArray;

@interface HAPService : NSObject {

	NSString* _type;
	NSNumber* _instanceID;
	HAPAccessory* _accessory;
	NSArray* _characteristics;
	NSArray* _includedServices;

}

@property (nonatomic,copy) NSString * type;                                //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) NSNumber * instanceID;                          //@synthesize instanceID=_instanceID - In the implementation block
@property (assign,nonatomic,__weak) HAPAccessory * accessory;              //@synthesize accessory=_accessory - In the implementation block
@property (nonatomic,retain) NSArray * characteristics;                    //@synthesize characteristics=_characteristics - In the implementation block
@property (nonatomic,readonly) NSArray * includedServices;                 //@synthesize includedServices=_includedServices - In the implementation block
-(id)description;
-(void)setType:(NSString *)arg1 ;
-(NSString *)type;
-(NSArray *)characteristics;
-(void)setAccessory:(HAPAccessory *)arg1 ;
-(NSNumber *)instanceID;
-(char)isEqualToService:(id)arg1 ;
-(void)setCharacteristics:(NSArray *)arg1 ;
-(id)initWithType:(id)arg1 instanceID:(id)arg2 parsedCharacteristics:(id)arg3 ;
-(HAPAccessory *)accessory;
-(char)_updateAndValidateCharacteristics;
-(char)_validateServiceCharacteristics;
-(char)_updateCharacteristic:(id)arg1 ;
-(char)_validateMandatoryCharacteristics;
-(id)initWithType:(id)arg1 instanceID:(id)arg2 ;
-(void)setInstanceID:(NSNumber *)arg1 ;
-(NSArray *)includedServices;
@end

