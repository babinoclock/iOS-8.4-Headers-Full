/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:33 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SoftwareUpdateServices/NSKeyedUnarchiverDelegate.h>

@class SUDownload, SUDescriptor, NSDate, NSString;

@interface SUState : NSObject <NSKeyedUnarchiverDelegate> {

	SUDownload* _lastDownload;
	SUDescriptor* _lastScannedDescriptor;
	NSDate* _lastScannedDescriptorTime;
	NSDate* _scheduledManualDownloadWifiPeriodEndTime;
	NSDate* _scheduledAutodownloadWifiPeriodEndTime;
	NSDate* _scheduledAutodownloadPolicyChangeTime;
	char _autodownloadNeedsOneTimeRetry;
	NSString* _lastProductVersion;
	NSString* _lastProductBuild;
	NSString* _lastProductType;
	NSString* _lastReleaseType;

}

@property (nonatomic,copy) SUDownload * lastDownload;                                        //@synthesize lastDownload=_lastDownload - In the implementation block
@property (nonatomic,copy) SUDescriptor * lastScannedDescriptor;                             //@synthesize lastScannedDescriptor=_lastScannedDescriptor - In the implementation block
@property (nonatomic,retain) NSDate * lastScannedDescriptorTime;                             //@synthesize lastScannedDescriptorTime=_lastScannedDescriptorTime - In the implementation block
@property (nonatomic,retain) NSDate * scheduledManualDownloadWifiPeriodEndTime;              //@synthesize scheduledManualDownloadWifiPeriodEndTime=_scheduledManualDownloadWifiPeriodEndTime - In the implementation block
@property (nonatomic,retain) NSDate * scheduledAutodownloadWifiPeriodEndTime;                //@synthesize scheduledAutodownloadWifiPeriodEndTime=_scheduledAutodownloadWifiPeriodEndTime - In the implementation block
@property (nonatomic,retain) NSDate * scheduledAutodownloadPolicyChangeTime;                 //@synthesize scheduledAutodownloadPolicyChangeTime=_scheduledAutodownloadPolicyChangeTime - In the implementation block
@property (assign,nonatomic) char autodownloadNeedsOneTimeRetry;                             //@synthesize autodownloadNeedsOneTimeRetry=_autodownloadNeedsOneTimeRetry - In the implementation block
@property (nonatomic,retain) NSString * lastProductVersion;                                  //@synthesize lastProductVersion=_lastProductVersion - In the implementation block
@property (nonatomic,retain) NSString * lastProductBuild;                                    //@synthesize lastProductBuild=_lastProductBuild - In the implementation block
@property (nonatomic,retain) NSString * lastProductType;                                     //@synthesize lastProductType=_lastProductType - In the implementation block
@property (nonatomic,retain) NSString * lastReleaseType;                                     //@synthesize lastReleaseType=_lastReleaseType - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)currentState;
+(id)statePath;
-(void)save;
-(Class)unarchiver:(id)arg1 cannotDecodeObjectOfClassName:(id)arg2 originalClasses:(id)arg3 ;
-(void)dealloc;
-(id)init;
-(NSString *)description;
-(void)load;
-(void)setLastScannedDescriptor:(SUDescriptor *)arg1 ;
-(void)setLastScannedDescriptorTime:(NSDate *)arg1 ;
-(void)setScheduledManualDownloadWifiPeriodEndTime:(NSDate *)arg1 ;
-(void)setScheduledAutodownloadWifiPeriodEndTime:(NSDate *)arg1 ;
-(void)setScheduledAutodownloadPolicyChangeTime:(NSDate *)arg1 ;
-(void)setAutodownloadNeedsOneTimeRetry:(char)arg1 ;
-(void)setLastDownload:(SUDownload *)arg1 ;
-(void)resetDownloadAndScanHistory;
-(void)setLastProductVersion:(NSString *)arg1 ;
-(void)setLastProductBuild:(NSString *)arg1 ;
-(void)setLastProductType:(NSString *)arg1 ;
-(void)setLastReleaseType:(NSString *)arg1 ;
-(id)_stateAsDictionary;
-(SUDownload *)lastDownload;
-(SUDescriptor *)lastScannedDescriptor;
-(NSDate *)lastScannedDescriptorTime;
-(NSDate *)scheduledManualDownloadWifiPeriodEndTime;
-(NSDate *)scheduledAutodownloadWifiPeriodEndTime;
-(NSDate *)scheduledAutodownloadPolicyChangeTime;
-(char)autodownloadNeedsOneTimeRetry;
-(NSString *)lastProductVersion;
-(NSString *)lastProductBuild;
-(NSString *)lastProductType;
-(NSString *)lastReleaseType;
-(void)resetAllHistory;
@end

