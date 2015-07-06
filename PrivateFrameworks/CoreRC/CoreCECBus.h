/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:40:15 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/CoreRC.framework/CoreRC
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreRC/CoreRC-Structs.h>
#import <CoreRC/CoreRCBus.h>

@class CoreCECDevice, NSString;

@interface CoreCECBus : CoreRCBus {

	char _hasLink;
	CECLanguage _tvLanguageCodeASCII;
	unsigned _physicalAddress;
	unsigned _systemAudioModeStatus;
	CECOSDName _osdNameASCII;

}

@property (assign,nonatomic) unsigned physicalAddress;                     //@synthesize physicalAddress=_physicalAddress - In the implementation block
@property (assign,nonatomic) char hasLink;                                 //@synthesize hasLink=_hasLink - In the implementation block
@property (nonatomic,readonly) CoreCECDevice * activeSource; 
@property (nonatomic,readonly) NSString * osdName; 
@property (nonatomic,readonly) NSString * tvLanguageCode; 
@property (assign,nonatomic) unsigned systemAudioModeStatus;               //@synthesize systemAudioModeStatus=_systemAudioModeStatus - In the implementation block
@property (assign,nonatomic) CECOSDName osdNameASCII;                      //@synthesize osdNameASCII=_osdNameASCII - In the implementation block
@property (assign,nonatomic) CECLanguage tvLanguageCodeASCII;              //@synthesize tvLanguageCodeASCII=_tvLanguageCodeASCII - In the implementation block
+(char)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(id)init;
-(id)description;
-(id)delegate;
-(id)initWithBus:(id)arg1 ;
-(char)hasLink;
-(CECOSDName)osdNameASCII;
-(unsigned)physicalAddress;
-(CECLanguage)tvLanguageCodeASCII;
-(unsigned)systemAudioModeStatus;
-(NSString *)osdName;
-(NSString *)tvLanguageCode;
-(CoreCECDevice *)activeSource;
-(void)setOsdNameASCII:(CECOSDName)arg1 ;
-(void)setTvLanguageCodeASCII:(CECLanguage)arg1 ;
-(id)initWithPhysicalAddress:(unsigned)arg1 ;
-(id)addDeviceWithType:(unsigned)arg1 error:(id*)arg2 ;
-(id)rootPhysicalDevice;
-(char)setOSDName:(id)arg1 error:(id*)arg2 ;
-(char)setTvLanguageCode:(id)arg1 error:(id*)arg2 ;
-(id)deviceOnBusWithLogicalAddress:(unsigned char)arg1 ;
-(void)notifyDelegateActiveSourceChangedFrom:(id)arg1 newActiveSource:(id)arg2 ;
-(void)notifyDelegateLinkStateUpdated;
-(void)setPhysicalAddress:(unsigned)arg1 ;
-(void)setHasLink:(char)arg1 ;
-(void)setSystemAudioModeStatus:(unsigned)arg1 ;
@end

