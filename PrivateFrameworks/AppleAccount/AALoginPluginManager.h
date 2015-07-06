/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:39:27 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue, AASetupAssistantDelegateService;
@class NSArray, NSObject;

@interface AALoginPluginManager : NSObject {

	NSArray* _plugins;
	char _shouldStashLoginResponse;
	char _hasStashedLoginResponse;
	NSObject*<OS_dispatch_queue> _pluginNotificationQueue;
	id<AASetupAssistantDelegateService> _idsPlugin;
	char _shouldSkipiTunesPlugin;

}

@property (assign,nonatomic) char shouldSkipiTunesPlugin;                //@synthesize shouldSkipiTunesPlugin=_shouldSkipiTunesPlugin - In the implementation block
@property (assign,nonatomic) char shouldStashLoginResponse; 
+(id)sharedInstance;
-(id)init;
-(void)_loadPlugins;
-(char)_notifyServicesOfLoginResponse:(id)arg1 forAppleID:(id)arg2 password:(id)arg3 ;
-(void)_stashServiceTokensFromResponse:(id)arg1 ;
-(id)collectParametersForLoginRequest;
-(id)collectParametersForIdentityEstablishmentRequest;
-(void)notifyServicesOfLoginResponse:(id)arg1 forAppleID:(id)arg2 password:(id)arg3 completion:(/*^block*/id)arg4 ;
-(char)shouldStashLoginResponse;
-(void)setShouldStashLoginResponse:(char)arg1 ;
-(void)unstashLoginResponse;
-(char)shouldSkipiTunesPlugin;
-(void)setShouldSkipiTunesPlugin:(char)arg1 ;
@end
