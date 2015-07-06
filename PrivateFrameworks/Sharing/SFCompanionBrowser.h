/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:32 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Sharing/Sharing-Structs.h>
#import <Sharing/SFCompanionXPCManagerObserver.h>
#import <Sharing/SFCompanionBrowserClient.h>

@protocol SFCompanionBrowserDelegate, SFCompanionBrowserProtocol;
@class NSMutableDictionary, NSMutableArray, NSString;

@interface SFCompanionBrowser : NSObject <SFCompanionXPCManagerObserver, SFCompanionBrowserClient> {

	SFBrowserRef _browser;
	NSMutableDictionary* _nodes;
	NSMutableArray* _lostPeople;
	NSMutableArray* _foundPeople;
	NSMutableArray* _serviceTypes;
	NSMutableDictionary* _foundServices;
	NSMutableDictionary* _deviceServices;
	char _foundDevices;
	id<SFCompanionBrowserDelegate> _delegate;
	NSString* _identifier;
	id<SFCompanionBrowserProtocol> _connectionProxy;

}

@property (assign) id<SFCompanionBrowserDelegate> delegate;                     //@synthesize delegate=_delegate - In the implementation block
@property (copy,readonly) NSString * serviceType; 
@property (assign) char foundDevices;                                           //@synthesize foundDevices=_foundDevices - In the implementation block
@property (retain) NSString * identifier;                                       //@synthesize identifier=_identifier - In the implementation block
@property (retain) id<SFCompanionBrowserProtocol> connectionProxy;              //@synthesize connectionProxy=_connectionProxy - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithServiceType:(id)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id<SFCompanionBrowserDelegate>)arg1 ;
-(id<SFCompanionBrowserDelegate>)delegate;
-(NSString *)identifier;
-(void)stop;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)start;
-(void)clearCache;
-(id)serviceNames;
-(id)initWithServiceTypes:(id)arg1 ;
-(void)stopBrowsing;
-(NSString *)serviceType;
-(id)serviceTypes;
-(void)startBrowsing;
-(void)setConnectionProxy:(id<SFCompanionBrowserProtocol>)arg1 ;
-(id<SFCompanionBrowserProtocol>)connectionProxy;
-(void)xpcManagerConnectionInterrupted;
-(char)foundDevices;
-(void)setFoundDevices:(char)arg1 ;
-(void)receivedActivitiesList:(id)arg1 fromDeviceWithIdentifier:(id)arg2 ;
-(id)_initWithServiceTypes:(id)arg1 ;
-(void)startBluetooth;
-(void)stopBluetooth;
-(void)handleNoDevices;
-(void)handleNewActivities:(id)arg1 forDevice:(id)arg2 ;
-(void)handleBrowserCallback;
@end

