/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:09 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PowerlogCore/PLAgent.h>

@class PLXPCListenerOperatorComposition, PLNSNotificationOperatorComposition, PLXPCResponderOperatorComposition;

@interface PLXPCAgent : PLAgent {

	PLXPCListenerOperatorComposition* _testMarkerXPCListener;
	PLXPCListenerOperatorComposition* _UIKitKeyboardXPCListener;
	PLXPCListenerOperatorComposition* _UIKitActivityXPCListener;
	PLXPCListenerOperatorComposition* _UIKitAlertXPCListener;
	PLXPCListenerOperatorComposition* _DASyncStartXPCListener;
	PLXPCListenerOperatorComposition* _DACalendarItemsDownloadedXPCListener;
	PLXPCListenerOperatorComposition* _DACalendarItemsUploadedXPCListener;
	PLXPCListenerOperatorComposition* _MailFetchXPCListener;
	PLXPCListenerOperatorComposition* _MediaServerdRTCXPCListener;
	PLXPCListenerOperatorComposition* _SafariFetcherXPCListener;
	PLXPCListenerOperatorComposition* _SiriXPCListener;
	PLXPCListenerOperatorComposition* _ApsdXPCListener;
	PLNSNotificationOperatorComposition* _MemoryWarningListener;
	PLXPCListenerOperatorComposition* _AccessoriesXPCListener;
	PLXPCListenerOperatorComposition* _AppAccessoriesXPCListener;
	PLXPCListenerOperatorComposition* _AirDropXPCListener;
	PLXPCListenerOperatorComposition* _SymptomsNetworkAdvisory;
	PLXPCListenerOperatorComposition* _InCallServiceXPCListener;
	PLXPCListenerOperatorComposition* _WebAppXPCListener;
	PLXPCListenerOperatorComposition* _BackgroundTransfer;
	PLXPCListenerOperatorComposition* _Push;
	PLXPCListenerOperatorComposition* _telNotificationXPCListener;
	PLXPCResponderOperatorComposition* _entryRequestResponder;

}

@property (retain) PLXPCListenerOperatorComposition * testMarkerXPCListener;                                                //@synthesize testMarkerXPCListener=_testMarkerXPCListener - In the implementation block
@property (retain) PLXPCListenerOperatorComposition * UIKitKeyboardXPCListener;                                             //@synthesize UIKitKeyboardXPCListener=_UIKitKeyboardXPCListener - In the implementation block
@property (retain) PLXPCListenerOperatorComposition * UIKitActivityXPCListener;                                             //@synthesize UIKitActivityXPCListener=_UIKitActivityXPCListener - In the implementation block
@property (retain) PLXPCListenerOperatorComposition * UIKitAlertXPCListener;                                                //@synthesize UIKitAlertXPCListener=_UIKitAlertXPCListener - In the implementation block
@property (retain) PLXPCListenerOperatorComposition * DASyncStartXPCListener;                                               //@synthesize DASyncStartXPCListener=_DASyncStartXPCListener - In the implementation block
@property (retain) PLXPCListenerOperatorComposition * DACalendarItemsDownloadedXPCListener;                                 //@synthesize DACalendarItemsDownloadedXPCListener=_DACalendarItemsDownloadedXPCListener - In the implementation block
@property (retain) PLXPCListenerOperatorComposition * DACalendarItemsUploadedXPCListener;                                   //@synthesize DACalendarItemsUploadedXPCListener=_DACalendarItemsUploadedXPCListener - In the implementation block
@property (retain) PLXPCListenerOperatorComposition * MailFetchXPCListener;                                                 //@synthesize MailFetchXPCListener=_MailFetchXPCListener - In the implementation block
@property (retain) PLXPCListenerOperatorComposition * MediaServerdRTCXPCListener;                                           //@synthesize MediaServerdRTCXPCListener=_MediaServerdRTCXPCListener - In the implementation block
@property (setter=afariFetcherXPCListener,retain) PLXPCListenerOperatorComposition * SafariFetcherXPCListener;              //@synthesize SafariFetcherXPCListener=_SafariFetcherXPCListener - In the implementation block
@property (setter=iriXPCListener,retain) PLXPCListenerOperatorComposition * SiriXPCListener;                                //@synthesize SiriXPCListener=_SiriXPCListener - In the implementation block
@property (retain) PLXPCListenerOperatorComposition * ApsdXPCListener;                                                      //@synthesize ApsdXPCListener=_ApsdXPCListener - In the implementation block
@property (retain) PLNSNotificationOperatorComposition * MemoryWarningListener;                                             //@synthesize MemoryWarningListener=_MemoryWarningListener - In the implementation block
@property (retain) PLXPCListenerOperatorComposition * AccessoriesXPCListener;                                               //@synthesize AccessoriesXPCListener=_AccessoriesXPCListener - In the implementation block
@property (retain) PLXPCListenerOperatorComposition * AppAccessoriesXPCListener;                                            //@synthesize AppAccessoriesXPCListener=_AppAccessoriesXPCListener - In the implementation block
@property (retain) PLXPCListenerOperatorComposition * AirDropXPCListener;                                                   //@synthesize AirDropXPCListener=_AirDropXPCListener - In the implementation block
@property (setter=ymptomsNetworkAdvisory,retain) PLXPCListenerOperatorComposition * SymptomsNetworkAdvisory;                //@synthesize SymptomsNetworkAdvisory=_SymptomsNetworkAdvisory - In the implementation block
@property (retain) PLXPCListenerOperatorComposition * InCallServiceXPCListener;                                             //@synthesize InCallServiceXPCListener=_InCallServiceXPCListener - In the implementation block
@property (retain) PLXPCListenerOperatorComposition * WebAppXPCListener;                                                    //@synthesize WebAppXPCListener=_WebAppXPCListener - In the implementation block
@property (retain) PLXPCListenerOperatorComposition * BackgroundTransfer;                                                   //@synthesize BackgroundTransfer=_BackgroundTransfer - In the implementation block
@property (retain) PLXPCListenerOperatorComposition * Push;                                                                 //@synthesize Push=_Push - In the implementation block
@property (retain) PLXPCListenerOperatorComposition * telNotificationXPCListener;                                           //@synthesize telNotificationXPCListener=_telNotificationXPCListener - In the implementation block
@property (retain) PLXPCResponderOperatorComposition * entryRequestResponder;                                               //@synthesize entryRequestResponder=_entryRequestResponder - In the implementation block
+(void)load;
+(id)defaults;
+(id)railDefinitions;
+(id)accountingGroupDefinitions;
+(id)entryEventPointDefinitions;
+(id)entryEventForwardDefinitions;
+(id)entryEventBackwardDefinitions;
+(id)entryEventIntervalDefinitions;
+(id)entryEventNoneDefinitions;
+(id)entryAggregateDefinitions;
+(id)entryEventPointDefinitionTestMarkers;
+(id)entryEventPointDefinitionDASyncStart;
+(id)entryEventPointDefinitionDACalendarItemsDownloaded;
+(id)entryEventPointDefinitionDACalendarItemsUploaded;
+(id)entryEventPointDefinitionMailFetch;
+(id)entryEventPointDefinitionJetsam;
+(id)entryEventPointDefinitionApsd;
+(id)entryEventPointDefinitionsSymptomsNetworkAdvisory;
+(id)entryEventPointDefinitionsBackgroundTransfer;
+(id)entryEventPointDefinitionsPush;
+(id)entryEventForwardDefinitionUIKitKeyboard;
+(id)entryEventForwardDefinitionUIKitActivity;
+(id)entryEventForwardDefinitionUIKitAlert;
+(id)entryEventForwardDefinitionSafariFetcher;
+(id)entryEventForwardDefinitionAccessory;
+(id)entryEventForwardDefinitionAppAccessory;
+(id)entryEventForwardDefinitionAirDrop;
+(id)entryEventForwardDefinitionSiri;
+(id)entryEventForwardDefinitionInCallService;
+(id)entryEventForwardDefinitionWebApp;
+(id)bundleIdFromTopic:(id)arg1 ;
-(id)init;
-(void)log;
-(void)initOperatorDependancies;
-(void)logEventPointJetsam:(unsigned long)arg1 ;
-(void)logEventPointTestMarker:(id)arg1 ;
-(void)setTestMarkerXPCListener:(PLXPCListenerOperatorComposition *)arg1 ;
-(void)logEventForwardUIKitKeyboard:(id)arg1 ;
-(void)setUIKitKeyboardXPCListener:(PLXPCListenerOperatorComposition *)arg1 ;
-(void)logEventForwardUIKitActivity:(id)arg1 ;
-(void)setUIKitActivityXPCListener:(PLXPCListenerOperatorComposition *)arg1 ;
-(void)logEventForwardUIKitAlert:(id)arg1 ;
-(void)setUIKitAlertXPCListener:(PLXPCListenerOperatorComposition *)arg1 ;
-(void)logEventPointDASyncStart:(id)arg1 ;
-(void)setDASyncStartXPCListener:(PLXPCListenerOperatorComposition *)arg1 ;
-(void)logEventPointDACalendarItemsDownloaded:(id)arg1 ;
-(void)setDACalendarItemsDownloadedXPCListener:(PLXPCListenerOperatorComposition *)arg1 ;
-(void)logEventPointDACalendarItemsUploaded:(id)arg1 ;
-(void)setDACalendarItemsUploadedXPCListener:(PLXPCListenerOperatorComposition *)arg1 ;
-(void)logEventPointMailFetch:(id)arg1 ;
-(void)setMailFetchXPCListener:(PLXPCListenerOperatorComposition *)arg1 ;
-(void)logEventBackwardNameMediaServerdRTC:(id)arg1 ;
-(void)setMediaServerdRTCXPCListener:(PLXPCListenerOperatorComposition *)arg1 ;
-(void)logEventForwardSafariFetcherStatus:(id)arg1 ;
-(void)setSafariFetcherXPCListener:(PLXPCListenerOperatorComposition *)arg1 ;
-(void)logEventForwardAccessory:(id)arg1 ;
-(void)setAccessoriesXPCListener:(PLXPCListenerOperatorComposition *)arg1 ;
-(void)logEventForwardAppAccessory:(id)arg1 ;
-(void)setAppAccessoriesXPCListener:(PLXPCListenerOperatorComposition *)arg1 ;
-(void)logEventForwardAirDrop:(id)arg1 ;
-(void)setAirDropXPCListener:(PLXPCListenerOperatorComposition *)arg1 ;
-(void)logEventForwardSiri:(id)arg1 ;
-(void)setSiriXPCListener:(PLXPCListenerOperatorComposition *)arg1 ;
-(void)logEventPointApsd:(id)arg1 ;
-(void)setApsdXPCListener:(PLXPCListenerOperatorComposition *)arg1 ;
-(void)logEventPointNetworkSymptomsAdviosry:(id)arg1 ;
-(void)setSymptomsNetworkAdvisory:(PLXPCListenerOperatorComposition *)arg1 ;
-(void)logEventPointBackgroundTransfer:(id)arg1 ;
-(void)setBackgroundTransfer:(PLXPCListenerOperatorComposition *)arg1 ;
-(void)logEventPointPush:(id)arg1 ;
-(void)setPush:(PLXPCListenerOperatorComposition *)arg1 ;
-(void)logEventForwardInCallService:(id)arg1 ;
-(void)setInCallServiceXPCListener:(PLXPCListenerOperatorComposition *)arg1 ;
-(void)logEventForwardWebApp:(id)arg1 ;
-(void)setWebAppXPCListener:(PLXPCListenerOperatorComposition *)arg1 ;
-(id)entryRequestResponseForPayload:(id)arg1 ;
-(void)setEntryRequestResponder:(PLXPCResponderOperatorComposition *)arg1 ;
-(void)logEventAggregateTelNotification:(id)arg1 ;
-(void)setTelNotificationXPCListener:(PLXPCListenerOperatorComposition *)arg1 ;
-(void)createApsdAccountingEvent:(id)arg1 ;
-(void)createAccessoryAccountingEventWithName:(id)arg1 isStartEvent:(char)arg2 ;
-(void)createAirDropAccountingEvent:(id)arg1 ;
-(void)createInCallServiceAccountingEvent:(id)arg1 ;
-(PLXPCListenerOperatorComposition *)testMarkerXPCListener;
-(PLXPCListenerOperatorComposition *)UIKitKeyboardXPCListener;
-(PLXPCListenerOperatorComposition *)UIKitActivityXPCListener;
-(PLXPCListenerOperatorComposition *)UIKitAlertXPCListener;
-(PLXPCListenerOperatorComposition *)DASyncStartXPCListener;
-(PLXPCListenerOperatorComposition *)DACalendarItemsDownloadedXPCListener;
-(PLXPCListenerOperatorComposition *)DACalendarItemsUploadedXPCListener;
-(PLXPCListenerOperatorComposition *)MailFetchXPCListener;
-(PLXPCListenerOperatorComposition *)MediaServerdRTCXPCListener;
-(PLXPCListenerOperatorComposition *)SafariFetcherXPCListener;
-(PLXPCListenerOperatorComposition *)SiriXPCListener;
-(PLXPCListenerOperatorComposition *)ApsdXPCListener;
-(PLNSNotificationOperatorComposition *)MemoryWarningListener;
-(void)setMemoryWarningListener:(PLNSNotificationOperatorComposition *)arg1 ;
-(PLXPCListenerOperatorComposition *)AccessoriesXPCListener;
-(PLXPCListenerOperatorComposition *)AppAccessoriesXPCListener;
-(PLXPCListenerOperatorComposition *)AirDropXPCListener;
-(PLXPCListenerOperatorComposition *)SymptomsNetworkAdvisory;
-(PLXPCListenerOperatorComposition *)InCallServiceXPCListener;
-(PLXPCListenerOperatorComposition *)WebAppXPCListener;
-(PLXPCListenerOperatorComposition *)BackgroundTransfer;
-(PLXPCListenerOperatorComposition *)Push;
-(PLXPCListenerOperatorComposition *)telNotificationXPCListener;
-(PLXPCResponderOperatorComposition *)entryRequestResponder;
@end

