/*
* This header is generated by classdump-dyld 0.7
* on Monday, July 6, 2015 at 12:14:47 AM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/NSXPCListenerDelegate.h>
#import <SpringBoard/SBStatusBarStyleOverridesAssertionServer.h>

@protocol OS_dispatch_queue;
@class NSXPCListener, NSMapTable, NSObject, NSString;

@interface SBStatusBarStyleOverridesAssertionManager : NSObject <NSXPCListenerDelegate, SBStatusBarStyleOverridesAssertionServer> {

	NSXPCListener* _xpcListener;
	NSMapTable* _assertionsByClientConnection;
	NSMapTable* _assertionsByStyleOverride;
	NSObject*<OS_dispatch_queue> _internalQueue;
	int _statusBarStyleOverrides;
	int _exclusiveStatusBarStyleOverrides;

}

@property (nonatomic,retain) NSXPCListener * xpcListener;                             //@synthesize xpcListener=_xpcListener - In the implementation block
@property (nonatomic,retain) NSMapTable * assertionsByClientConnection;               //@synthesize assertionsByClientConnection=_assertionsByClientConnection - In the implementation block
@property (nonatomic,retain) NSMapTable * assertionsByStyleOverride;                  //@synthesize assertionsByStyleOverride=_assertionsByStyleOverride - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> internalQueue;              //@synthesize internalQueue=_internalQueue - In the implementation block
@property (assign,nonatomic) int statusBarStyleOverrides;                             //@synthesize statusBarStyleOverrides=_statusBarStyleOverrides - In the implementation block
@property (assign,nonatomic) int exclusiveStatusBarStyleOverrides;                    //@synthesize exclusiveStatusBarStyleOverrides=_exclusiveStatusBarStyleOverrides - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(void)invalidateStatusBarStyleOverridesAssertions:(id)arg1 ;
-(id)_internalQueue_removeAssertionByStyleOverrides:(id)arg1 returningRemovedStyleOverrides:(int*)arg2 ;
-(void)_invalidateAssertionsWithIdentifiers:(id)arg1 forClientConnection:(id)arg2 ;
-(void)_updateAppSceneSettingsForPIDs:(id)arg1 andPostAddedStyleOverrides:(int)arg2 removedStyleOverrides:(int)arg3 ;
-(void)_postStatusStringsByStyle:(id)arg1 ;
-(void)_mainQueue_getStatusBarStyleOverridesToSuppressAndStatusStringsByStyleForForegroundApplications:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)_internalQueue_deactivateStatusBarStyleOverridesAssertions:(id)arg1 forClientConnection:(id)arg2 ;
-(id)_internalQueue_addAssertionByStyleOverrides:(id)arg1 returningAddedStyleOverrides:(int*)arg2 ;
-(id)_statusStringsByStyleForBackgroundAssertionsByStyleOverride:(id)arg1 foregroundAssertionsByStyleOverride:(id)arg2 ;
-(void)postStatusStringsForForegroundApplications:(id)arg1 ;
-(void)_mainQueue_getStatusBarStyleOverridesToSuppressForApplications:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(NSMapTable *)assertionsByClientConnection;
-(void)setAssertionsByClientConnection:(NSMapTable *)arg1 ;
-(NSMapTable *)assertionsByStyleOverride;
-(void)setAssertionsByStyleOverride:(NSMapTable *)arg1 ;
-(int)exclusiveStatusBarStyleOverrides;
-(void)setExclusiveStatusBarStyleOverrides:(int)arg1 ;
-(void)dealloc;
-(id)init;
-(char)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(NSXPCListener *)xpcListener;
-(void)setXpcListener:(NSXPCListener *)arg1 ;
-(int)statusBarStyleOverrides;
-(void)setStatusBarStyleOverrides:(int)arg1 ;
-(void)activateStatusBarStyleOverridesAssertions:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)deactivateStatusBarStyleOverridesAssertionsWithIdentifiers:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)internalQueue;
-(void)setInternalQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

