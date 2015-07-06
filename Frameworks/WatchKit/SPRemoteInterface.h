/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:39:06 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/WatchKit.framework/WatchKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <WatchKit/SPRemoteInterfaceProtocol.h>

@protocol SPRemoteInterfaceDataDelegateProtocol, OS_dispatch_queue;
@class NSMutableArray, NSMutableDictionary, NSObject, NSString;

@interface SPRemoteInterface : NSObject <SPRemoteInterfaceProtocol> {

	id<SPRemoteInterfaceDataDelegateProtocol> _dataDelegate;
	NSMutableArray* _activeComplicationsConnections;
	id _runLoopObserver;
	NSMutableDictionary* _interfaceControllers;
	NSMutableDictionary* _interfaceControllersOwners;
	NSObject*<OS_dispatch_queue> _interfaceControllersAccessQueue;
	NSString* _rootViewControllerID;
	NSString* _navigatingViewControllerID;
	/*^block*/id _textInputCompletion;
	NSMutableArray* _openParentRequests;

}

@property (nonatomic,retain) id<SPRemoteInterfaceDataDelegateProtocol> dataDelegate;                    //@synthesize dataDelegate=_dataDelegate - In the implementation block
@property (nonatomic,retain) NSMutableArray * activeComplicationsConnections;                           //@synthesize activeComplicationsConnections=_activeComplicationsConnections - In the implementation block
@property (nonatomic,retain) id runLoopObserver;                                                        //@synthesize runLoopObserver=_runLoopObserver - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * interfaceControllers;                                //@synthesize interfaceControllers=_interfaceControllers - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * interfaceControllersOwners;                          //@synthesize interfaceControllersOwners=_interfaceControllersOwners - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> interfaceControllersAccessQueue;              //@synthesize interfaceControllersAccessQueue=_interfaceControllersAccessQueue - In the implementation block
@property (nonatomic,retain) NSString * rootViewControllerID;                                           //@synthesize rootViewControllerID=_rootViewControllerID - In the implementation block
@property (nonatomic,retain) NSString * navigatingViewControllerID;                                     //@synthesize navigatingViewControllerID=_navigatingViewControllerID - In the implementation block
@property (nonatomic,copy) id textInputCompletion;                                                      //@synthesize textInputCompletion=_textInputCompletion - In the implementation block
@property (nonatomic,retain) NSMutableArray * openParentRequests;                                       //@synthesize openParentRequests=_openParentRequests - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)cacheIdentifier;
+(void)handleEvent:(/*^block*/id)arg1 ;
+(id)SerializablePropertyValue:(id)arg1 ;
+(void)setController:(id)arg1 key:(id)arg2 property:(id)arg3 value:(id)arg4 ;
+(id)startRemoteInterface;
+(id)_remoteIdentifier;
+(void)_updateAccessibility;
+(void)_setupStorageForController:(id)arg1 ;
+(void)_logDuplicate:(id)arg1 controller:(id)arg2 key:(id)arg3 property:(id)arg4 value:(id)arg5 ;
+(void)controllerPop:(id)arg1 ;
+(void)controllerPopToRoot:(id)arg1 ;
+(void)movePageControllerAtIndex:(int)arg1 toIndex:(int)arg2 ;
+(void)removePageControllerAtIndexes:(id)arg1 ;
+(void)controllerBecomeCurrentPage:(id)arg1 ;
+(void)controllerDismiss:(id)arg1 ;
+(void)controllerDismissTextInputController:(id)arg1 ;
+(char)openParentApplication:(id)arg1 reply:(/*^block*/id)arg2 ;
+(void)sendCacheRequestMessage:(id)arg1 ;
+(void)notificationController:(id)arg1 showNotificationInterfaceType:(int)arg2 ;
+(void)clearStorageForController:(id)arg1 ;
+(id)controller:(id)arg1 setupProperties:(id)arg2 viewControllerID:(id)arg3 tableIndex:(int)arg4 rowIndex:(int)arg5 classForType:(/*function pointer*/void*)arg6 ;
+(void)setControllerActive:(id)arg1 ;
+(void)setControllerInactive:(id)arg1 ;
+(void)controller:(id)arg1 presentInterfaceControllers:(id)arg2 contexts:(id)arg3 ;
+(void)controller:(id)arg1 presentInterfaceController:(id)arg2 context:(id)arg3 ;
+(void)controller:(id)arg1 pushInterfaceController:(id)arg2 context:(id)arg3 ;
+(void)reloadRootControllersWithNames:(id)arg1 contexts:(id)arg2 ;
+(void)insertPageControllerAtIndexes:(id)arg1 withNames:(id)arg2 contexts:(id)arg3 ;
+(void)controller:(id)arg1 presentTextInputControllerWithSuggestions:(id)arg2 allowedInputMode:(id)arg3 completion:(/*^block*/id)arg4 ;
+(void)updateUserActivity:(id)arg1 userInfo:(id)arg2 webpageURL:(id)arg3 interfaceController:(id)arg4 ;
+(void)sendCacheRequest:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)applicationDidBecomeActive:(id)arg1 ;
-(void)applicationWillResignActive:(id)arg1 ;
-(id)runLoopObserver;
-(void)setRunLoopObserver:(id)arg1 ;
-(void)fetchNotificationForNotificationID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_setupSignalHandlers;
-(void)setDataDelegate:(id<SPRemoteInterfaceDataDelegateProtocol>)arg1 ;
-(void)_dumpInterfaceDictionary;
-(id)_setupSignal:(int)arg1 handler:(/*^block*/id)arg2 ;
-(NSMutableArray *)activeComplicationsConnections;
-(void)sendPlist:(id)arg1 clientIdentifiers:(id)arg2 ;
-(id)_interfaceControllerID:(id)arg1 ;
-(id)_interfaceControllerClientIDForControllerID:(id)arg1 ;
-(void)_sendOpenParentApplicationRequest;
-(id)_interfaceControllerWithID:(id)arg1 ;
-(id)storeInterfaceCreationContext:(id)arg1 ;
-(void)controller:(id)arg1 pushInterfaceController:(id)arg2 initializationContextID:(id)arg3 ;
-(void)controllerPop:(id)arg1 ;
-(void)controllerPopToRoot:(id)arg1 ;
-(void)reloadRootControllersWithNames:(id)arg1 initializationContextIDs:(id)arg2 ;
-(void)insertPageControllerAtIndexes:(id)arg1 withNames:(id)arg2 initializationContextIDs:(id)arg3 ;
-(void)movePageControllerAtIndex:(int)arg1 toIndex:(int)arg2 ;
-(void)removePageControllerAtIndexes:(id)arg1 ;
-(void)controllerBecomeCurrentPage:(id)arg1 ;
-(void)controller:(id)arg1 presentInterfaceController:(id)arg2 initializationContextID:(id)arg3 ;
-(void)controller:(id)arg1 presentInterfaceControllers:(id)arg2 initializationContextIDs:(id)arg3 ;
-(void)controllerDismiss:(id)arg1 ;
-(void)controllerPresentTextInputController:(id)arg1 allowedInputMode:(id)arg2 suggestions:(id)arg3 ;
-(void)setTextInputCompletion:(id)arg1 ;
-(void)controllerDismissTextInputController:(id)arg1 ;
-(void)updateUserActivity:(id)arg1 userInfo:(id)arg2 webpageURL:(id)arg3 controller:(id)arg4 ;
-(char)openParentApplication:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)sendCacheRequestMessage:(id)arg1 ;
-(void)notificationController:(id)arg1 showNotificationInterfaceType:(int)arg2 ;
-(void)setNavigatingViewControllerID:(NSString *)arg1 ;
-(id)_interfaceControllerIDsForClientID:(id)arg1 ;
-(void)_deregisterInterfaceControllerID:(id)arg1 ;
-(id)interfaceCreationContextForID:(id)arg1 ;
-(void)_registerInterfaceController:(id)arg1 interfaceControllerID:(id)arg2 interfaceControllerClientID:(id)arg3 applicationRootController:(char)arg4 ;
-(void)sendWillActivateReplyForController:(id)arg1 ;
-(void)_callDidDeactivate;
-(NSString *)navigatingViewControllerID;
-(void)_fillDataWithRandom:(id)arg1 length:(int)arg2 ;
-(void)sendTimingInfo:(id)arg1 clientIdentifiers:(id)arg2 index:(int)arg3 ;
-(void)applicationDidFinishConnecting:(id)arg1 ;
-(void)dataInterfaceDidBecomeActive:(id)arg1 ;
-(void)getComplicationData:(id)arg1 ;
-(void)removeInterfaceControllersForClient:(id)arg1 ;
-(void)dataInterfaceWillResignActive:(id)arg1 ;
-(void)receiveData:(id)arg1 fromIdentifier:(id)arg2 ;
-(void)receiveProtoData:(id)arg1 fromIdentifier:(id)arg2 ;
-(void)applicationDidTerminate:(id)arg1 ;
-(void)applicationContentsDidReset:(id)arg1 ;
-(void)applicationIsStillActive;
-(void)sendComplicationObject:(id)arg1 ;
-(id)controllerMethods:(id)arg1 ;
-(id<SPRemoteInterfaceDataDelegateProtocol>)dataDelegate;
-(void)setActiveComplicationsConnections:(NSMutableArray *)arg1 ;
-(NSMutableDictionary *)interfaceControllers;
-(void)setInterfaceControllers:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)interfaceControllersOwners;
-(void)setInterfaceControllersOwners:(NSMutableDictionary *)arg1 ;
-(NSObject*<OS_dispatch_queue>)interfaceControllersAccessQueue;
-(void)setInterfaceControllersAccessQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSString *)rootViewControllerID;
-(void)setRootViewControllerID:(NSString *)arg1 ;
-(id)textInputCompletion;
-(NSMutableArray *)openParentRequests;
-(void)setOpenParentRequests:(NSMutableArray *)arg1 ;
@end
