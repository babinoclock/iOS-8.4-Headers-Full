/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:40:06 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Preferences/PSListController.h>
#import <CommunicationsSetupUI/IDSServiceDelegate.h>

@class IDSService, NSString;

@interface CKSettingSMSRelayController : PSListController <IDSServiceDelegate> {

	IDSService* _relayService;

}

@property (nonatomic,retain) IDSService * relayService;              //@synthesize relayService=_relayService - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)deviceIsAuthorized:(id)arg1 ;
+(id)authorizedSMSRelayDevices;
+(unsigned)numberOfActiveDevices;
+(char)shouldShowSMSRelaySettings;
-(void)dealloc;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)systemApplicationWillEnterForeground;
-(void)setRelayService:(IDSService *)arg1 ;
-(IDSService *)relayService;
-(void)setDeviceActive:(id)arg1 specifier:(id)arg2 ;
-(id)getDeviceActive:(id)arg1 ;
-(void)service:(id)arg1 devicesChanged:(id)arg2 ;
-(id)specifiers;
@end

