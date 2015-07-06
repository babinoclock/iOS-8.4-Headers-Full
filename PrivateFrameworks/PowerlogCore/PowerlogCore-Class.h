/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:05 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/PowerlogCore.framework/PowerlogCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_source;
@class NSObject, PLCoreStorage, PLCoreAgent, PLCoreService, PLCoreRail, PLCoreAccountingGroup;

@interface PowerlogCore : NSObject {

	NSObject*<OS_dispatch_source> _fVMPressureSource;
	PLCoreStorage* _storage;
	PLCoreAgent* _agents;
	PLCoreService* _services;
	PLCoreRail* _rails;
	PLCoreAccountingGroup* _accountingGroups;

}

@property (readonly) PLCoreStorage * storage;                               //@synthesize storage=_storage - In the implementation block
@property (readonly) PLCoreAgent * agents;                                  //@synthesize agents=_agents - In the implementation block
@property (readonly) PLCoreService * services;                              //@synthesize services=_services - In the implementation block
@property (readonly) PLCoreRail * rails;                                    //@synthesize rails=_rails - In the implementation block
@property (readonly) PLCoreAccountingGroup * accountingGroups;              //@synthesize accountingGroups=_accountingGroups - In the implementation block
+(char)allowRun;
+(char)isDebugEnabled;
+(id)sharedCore;
-(void)dealloc;
-(id)init;
-(PLCoreStorage *)storage;
-(void)didRecieveMemoryPressureWarning;
-(void)startCore;
-(void)stopCore;
-(PLCoreRail *)rails;
-(PLCoreAccountingGroup *)accountingGroups;
-(PLCoreAgent *)agents;
-(PLCoreService *)services;
@end
