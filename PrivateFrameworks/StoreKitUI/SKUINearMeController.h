/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:48 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/CLLocationManagerDelegate.h>
#import <StoreKitUI/SKUIItemStateCenterObserver.h>

@protocol OS_dispatch_source;
@class NSArray, SSLookupRequest, CLLocationManager, NSObject, NSDictionary, SKUIClientContext, NSString;

@interface SKUINearMeController : NSObject <CLLocationManagerDelegate, SKUIItemStateCenterObserver> {

	NSArray* _items;
	int _status;
	char _isMonitoring;
	SSLookupRequest* _lookupRequest;
	CLLocationManager* _locationManager;
	int _authorizationStatus;
	NSObject*<OS_dispatch_source> _locationTimeoutTimer;
	int _locationTimeoutCount;
	NSObject*<OS_dispatch_source> _refreshTimer;
	NSDictionary* _responseDictionary;
	SKUIClientContext* _clientContext;

}

@property (nonatomic,retain) SKUIClientContext * clientContext;                //@synthesize clientContext=_clientContext - In the implementation block
@property (nonatomic,readonly) NSArray * items; 
@property (nonatomic,readonly) NSDictionary * responseDictionary;              //@synthesize responseDictionary=_responseDictionary - In the implementation block
@property (nonatomic,readonly) int status;                                     //@synthesize status=_status - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedController;
-(void)_startMonitoringLocation;
-(void)_stopMonitoringLocation;
-(id)init;
-(NSArray *)items;
-(void)_applicationWillEnterForeground:(id)arg1 ;
-(int)status;
-(void)locationManager:(id)arg1 didUpdateLocations:(id)arg2 ;
-(void)locationManager:(id)arg1 didFailWithError:(id)arg2 ;
-(void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2 ;
-(NSDictionary *)responseDictionary;
-(void)setClientContext:(SKUIClientContext *)arg1 ;
-(void)itemStateCenterRestrictionsChanged:(id)arg1 ;
-(SKUIClientContext *)clientContext;
-(void)_disableNearMe;
-(void)_setItems:(id)arg1 responseDictionary:(id)arg2 error:(id)arg3 status:(int)arg4 ;
-(void)_lookupItemsForLocation:(id)arg1 ;
-(void)_stopRefreshTimer;
-(void)_monitorLocationTimeout;
-(void)_startRefreshTimer;
-(void)_finishLookupWithItems:(id)arg1 response:(id)arg2 error:(id)arg3 ;
-(void)_refreshTimeout;
-(void)getItems;
-(void)disable;
@end

