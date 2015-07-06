/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:40:22 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACardDAV.framework/DADaemonCardDAV.bundle/DADaemonCardDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <DADaemonCardDAV/DADaemonCardDAV-Structs.h>
#import <DADaemonCardDAV/CardDAVDaemonAccount.h>
#import <DADaemonCardDAV/NSURLConnectionDelegate.h>

@class NSMutableData, NSError, NSString;

@interface CardDAViCloudDaemonAccount : CardDAVDaemonAccount <NSURLConnectionDelegate> {

	char _fetchingImageData;
	NSMutableData* _fetchedImageData;
	NSError* _fetchImageError;
	NSString* _hostOverride;
	int _useSSLOverride;
	int _portOverride;

}

@property (assign,nonatomic) char fetchingImageData;                        //@synthesize fetchingImageData=_fetchingImageData - In the implementation block
@property (nonatomic,retain) NSMutableData * fetchedImageData;              //@synthesize fetchedImageData=_fetchedImageData - In the implementation block
@property (nonatomic,retain) NSError * fetchImageError;                     //@synthesize fetchImageError=_fetchImageError - In the implementation block
@property (nonatomic,retain) NSString * hostOverride;                       //@synthesize hostOverride=_hostOverride - In the implementation block
@property (assign,nonatomic) int useSSLOverride;                            //@synthesize useSSLOverride=_useSSLOverride - In the implementation block
@property (assign,nonatomic) int portOverride;                              //@synthesize portOverride=_portOverride - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)host;
-(void)connection:(id)arg1 didFailWithError:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveData:(id)arg2 ;
-(void)connectionDidFinishLoading:(id)arg1 ;
-(void)connection:(id)arg1 didReceiveResponse:(id)arg2 ;
-(int)port;
-(void)setHost:(id)arg1 ;
-(void)setPort:(int)arg1 ;
-(void)noteHomeSetOnDifferentHost:(id)arg1 ;
-(char)shouldHandleHTTPCookiesForURL:(id)arg1 ;
-(char)shouldSendClientInfoHeaderForURL:(id)arg1 ;
-(char)shouldCompressRequests;
-(char)updateMeCardWithWithConsumer:(id)arg1 ;
-(char)setBestMeCard;
-(char)_handleOrphanarium:(CFArrayRef)arg1 toBeCreatedContainersByURL:(id)arg2 ;
-(void*)newABSourceForContainer:(id)arg1 ;
-(void)_reallySyncAddressBookURLsWithConsumer:(id)arg1 ;
-(id)copyImageContentsAtURL:(id)arg1 outError:(id*)arg2 ;
-(void)setHostOverride:(NSString *)arg1 ;
-(void)setUseSSLOverride:(int)arg1 ;
-(void)setPortOverride:(int)arg1 ;
-(NSString *)hostOverride;
-(int)useSSLOverride;
-(int)portOverride;
-(void)setFetchingImageData:(char)arg1 ;
-(char)fetchingImageData;
-(void)setFetchedImageData:(NSMutableData *)arg1 ;
-(void)setFetchImageError:(NSError *)arg1 ;
-(char)_shouldWipeDataOnUpgradeFromAccountVersion:(int)arg1 ;
-(NSMutableData *)fetchedImageData;
-(NSError *)fetchImageError;
-(char)useSSL;
-(id)initWithBackingAccountInfo:(id)arg1 ;
-(void)resetAccountID;
-(void)setUseSSL:(char)arg1 ;
-(id)connection:(id)arg1 willCacheResponse:(id)arg2 ;
-(void)connection:(id)arg1 willSendRequestForAuthenticationChallenge:(id)arg2 ;
@end

