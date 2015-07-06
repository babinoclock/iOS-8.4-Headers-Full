/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:39:55 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudDocsDaemon/BRCLowDiskDelegate.h>

@class CKContainer, NSString, CDAttribute, CDBudget, BRCAccountSession, BRCThrottleBase, BRCTransferStream, BRCUserDefaults;

@interface BRCSyncContext : NSObject <BRCLowDiskDelegate> {

	CKContainer* _ckContainer;
	NSString* _contextIdentifier;
	CDAttribute* _duetAttribute;
	CDBudget* _energyBudget;
	CDBudget* _dataBudget;
	NSString* _admissionTicket;
	char _isInLowDisk;
	char _isShared;
	char _isCancelled;
	BRCAccountSession* _session;
	BRCThrottleBase* _readerThrottle;
	BRCThrottleBase* _applyThrottle;
	BRCThrottleBase* _downloadThrottle;
	BRCThrottleBase* _uploadThrottle;
	BRCTransferStream* _uploader;
	BRCTransferStream* _downloader;

}

@property (nonatomic,readonly) BRCAccountSession * session;                     //@synthesize session=_session - In the implementation block
@property (nonatomic,readonly) NSString * contextIdentifier;                    //@synthesize contextIdentifier=_contextIdentifier - In the implementation block
@property (nonatomic,readonly) BRCUserDefaults * defaults; 
@property (nonatomic,readonly) char isShared;                                   //@synthesize isShared=_isShared - In the implementation block
@property (nonatomic,readonly) CKContainer * ckContainer; 
@property (nonatomic,readonly) BRCTransferStream * uploader;                    //@synthesize uploader=_uploader - In the implementation block
@property (nonatomic,readonly) BRCTransferStream * downloader;                  //@synthesize downloader=_downloader - In the implementation block
@property (nonatomic,readonly) NSString * admissionTicket; 
@property (nonatomic,readonly) CDBudget * energyBudget;                         //@synthesize energyBudget=_energyBudget - In the implementation block
@property (nonatomic,readonly) CDBudget * dataBudget;                           //@synthesize dataBudget=_dataBudget - In the implementation block
@property (nonatomic,readonly) BRCThrottleBase * readerThrottle;                //@synthesize readerThrottle=_readerThrottle - In the implementation block
@property (nonatomic,readonly) BRCThrottleBase * applyThrottle;                 //@synthesize applyThrottle=_applyThrottle - In the implementation block
@property (nonatomic,readonly) BRCThrottleBase * uploadThrottle;                //@synthesize uploadThrottle=_uploadThrottle - In the implementation block
@property (nonatomic,readonly) BRCThrottleBase * downloadThrottle;              //@synthesize downloadThrottle=_downloadThrottle - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)contextIdentifierForZone:(id)arg1 ;
-(void)cancel;
-(NSString *)description;
-(void)addOperation:(id)arg1 ;
-(void)resume;
-(void)close;
-(void)setupIfNeeded;
-(BRCAccountSession *)session;
-(char)isShared;
-(BRCThrottleBase *)applyThrottle;
-(NSString *)contextIdentifier;
-(BRCTransferStream *)downloader;
-(BRCThrottleBase *)downloadThrottle;
-(CKContainer *)ckContainer;
-(id)initWithZone:(id)arg1 ;
-(void)notifyDuetFromAccessByBundleID:(id)arg1 ;
-(BRCTransferStream *)uploader;
-(void)lowDiskStatusChangedForDevice:(int)arg1 hasEnoughSpace:(char)arg2 ;
-(BRCUserDefaults *)defaults;
-(BRCThrottleBase *)uploadThrottle;
-(BRCThrottleBase *)readerThrottle;
-(id)initWithSession:(id)arg1 contextIdentifier:(id)arg2 isShared:(char)arg3 ;
-(void)_setupDuetIfNeeded;
-(char)allowsCellularAccess;
-(NSString *)admissionTicket;
-(CDBudget *)energyBudget;
-(CDBudget *)dataBudget;
@end

