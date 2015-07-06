/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:43:27 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStore/iTunesStore-Structs.h>
#import <iTunesStore/ISDataProvider.h>
#import <iTunesStore/NSCopying.h>

@interface ISProtocolDataProvider : ISDataProvider <NSCopying> {

	char _shouldPostFooterSectionChanged;
	char _shouldProcessAccount;
	char _shouldProcessAuthenticationDialogs;
	char _shouldProcessDialogs;
	char _shouldProcessProtocol;
	char _shouldTriggerDownloads;

}

@property (assign) char shouldPostFooterSectionChanged;                  //@synthesize shouldPostFooterSectionChanged=_shouldPostFooterSectionChanged - In the implementation block
@property (assign) char shouldProcessAccount;                            //@synthesize shouldProcessAccount=_shouldProcessAccount - In the implementation block
@property (assign) char shouldProcessAuthenticationDialogs;              //@synthesize shouldProcessAuthenticationDialogs=_shouldProcessAuthenticationDialogs - In the implementation block
@property (assign) char shouldProcessDialogs;                            //@synthesize shouldProcessDialogs=_shouldProcessDialogs - In the implementation block
@property (assign) char shouldProcessProtocol;                           //@synthesize shouldProcessProtocol=_shouldProcessProtocol - In the implementation block
@property (assign) char shouldTriggerDownloads;                          //@synthesize shouldTriggerDownloads=_shouldTriggerDownloads - In the implementation block
-(void)setShouldProcessProtocol:(char)arg1 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setShouldTriggerDownloads:(char)arg1 ;
-(void)setShouldProcessDialogs:(char)arg1 ;
-(void)setShouldProcessAuthenticationDialogs:(char)arg1 ;
-(char)shouldProcessProtocol;
-(char)processDialogFromDictionary:(id)arg1 error:(id*)arg2 ;
-(char)processDictionary:(id)arg1 error:(id*)arg2 ;
-(void)setShouldProcessAccount:(char)arg1 ;
-(char)_shouldFailWithTokenErrorForDialog:(id)arg1 dictionary:(id)arg2 error:(id*)arg3 ;
-(void)_performActionsForResponse:(id)arg1 ;
-(char)_processFailureTypeFromDictionary:(id)arg1 error:(id*)arg2 ;
-(char)shouldTriggerDownloads;
-(void)_checkDownloadQueues;
-(void)_selectFooterSection:(id)arg1 ;
-(char)shouldProcessAccount;
-(void)_checkInAppPurchaseQueueForAction:(id)arg1 ;
-(char)shouldPostFooterSectionChanged;
-(void)_presentDialog:(id)arg1 ;
-(void)setShouldPostFooterSectionChanged:(char)arg1 ;
-(char)shouldProcessAuthenticationDialogs;
-(char)shouldProcessDialogs;
-(char)parseData:(id)arg1 returningError:(id*)arg2 ;
@end

