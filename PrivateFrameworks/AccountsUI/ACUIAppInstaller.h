/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:39:22 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/AccountsUI.framework/AccountsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol ACUIAppInstallerDelegate;
@class ACUIAppDescription, NSDate, NSURL;

@interface ACUIAppInstaller : NSObject {

	ACUIAppDescription* _app;
	NSDate* _dateOfLastReachabilityCheck;
	char _cachedReachabilityResult;
	NSDate* _dateOfLastInstallationCheck;
	char _resultOfLastInstallationCheck;
	char _needsAvailableInStoreCheck;
	char _availableInStoreResult;
	NSURL* _publisherURL;
	id<ACUIAppInstallerDelegate> _delegate;

}

@property (nonatomic,readonly) char isInstalled; 
@property (nonatomic,retain) NSURL * publisherURL;                                                    //@synthesize publisherURL=_publisherURL - In the implementation block
@property (nonatomic,readonly) char isDownloadable; 
@property (nonatomic,readonly) char requiresReachabilityCheckToDetermineDownloadability; 
@property (nonatomic,readonly) char isAvailableInStore; 
@property (assign,nonatomic,__weak) id<ACUIAppInstallerDelegate> delegate;                            //@synthesize delegate=_delegate - In the implementation block
+(id)currentStoreFront;
-(char)isDownloadable;
-(void)setDelegate:(id<ACUIAppInstallerDelegate>)arg1 ;
-(id<ACUIAppInstallerDelegate>)delegate;
-(void)start;
-(char)_quicklyGenerateCachedReachabilityResultConsideringPublisherURL:(char)arg1 ;
-(void)_setCachedReachabilityResult:(char)arg1 ;
-(char)_isGreenTeaAvailable;
-(void)fetchDownloadability:(/*^block*/id)arg1 ;
-(void)_performReachabilityCheck:(/*^block*/id)arg1 ;
-(void)_setAvailableInStoreResult:(char)arg1 ;
-(void)checkAvailabilityInStore:(/*^block*/id)arg1 ;
-(void)_performAvailabilityCheck:(/*^block*/id)arg1 ;
-(id)initForAppWithDescription:(id)arg1 ;
-(char)requiresReachabilityCheckToDetermineDownloadability;
-(char)isAvailableInStore;
-(NSURL *)publisherURL;
-(void)setPublisherURL:(NSURL *)arg1 ;
-(char)isInstalled;
@end

