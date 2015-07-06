/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:32 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Sharing/SFCompanionXPCManagerObserver.h>
#import <Sharing/SFActivityAdvertiserClient.h>

@protocol SFActivityAdvertiserDelegate, SFActivityAdvertiserProtocol;
@class SFInternalAdvertisement, NSString;

@interface SFActivityAdvertiser : NSObject <SFCompanionXPCManagerObserver, SFActivityAdvertiserClient> {

	id<SFActivityAdvertiserDelegate> _delegate;
	id<SFActivityAdvertiserProtocol> _connectionProxy;
	SFInternalAdvertisement* _currentAdvertisement;

}

@property (assign) id<SFActivityAdvertiserDelegate> delegate;                     //@synthesize delegate=_delegate - In the implementation block
@property (retain) id<SFActivityAdvertiserProtocol> connectionProxy;              //@synthesize connectionProxy=_connectionProxy - In the implementation block
@property (retain) SFInternalAdvertisement * currentAdvertisement;                //@synthesize currentAdvertisement=_currentAdvertisement - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedAdvertiser;
-(void)setupXPCConnection;
-(void)dealloc;
-(void)setDelegate:(id<SFActivityAdvertiserDelegate>)arg1 ;
-(id)init;
-(id<SFActivityAdvertiserDelegate>)delegate;
-(void)setConnectionProxy:(id<SFActivityAdvertiserProtocol>)arg1 ;
-(id<SFActivityAdvertiserProtocol>)connectionProxy;
-(void)xpcManagerConnectionInterrupted;
-(SFInternalAdvertisement *)currentAdvertisement;
-(void)setCurrentAdvertisement:(SFInternalAdvertisement *)arg1 ;
-(void)activityPayloadForAdvertisementPayload:(id)arg1 requestedByDevice:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)didSendPayloadForActivityIdentifier:(id)arg1 toDevice:(id)arg2 error:(id)arg3 ;
-(void)advertiseAdvertisementPayload:(id)arg1 options:(id)arg2 ;
@end

