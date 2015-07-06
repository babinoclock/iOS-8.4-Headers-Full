/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:39:31 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/BookmarkDAV.framework/BookmarkDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableDictionary, NSURL, NSDictionary, NSString, NSNumber;

@interface BookmarkDAVSyncData : NSObject {

	void* _db;
	NSMutableDictionary* _backingDict;
	char _hasChanges;

}

@property (nonatomic,readonly) char hasChanges;                              //@synthesize hasChanges=_hasChanges - In the implementation block
@property (nonatomic,retain) NSURL * homeURL; 
@property (assign,nonatomic) char initialSyncDone; 
@property (nonatomic,retain) NSDictionary * pushTransports; 
@property (nonatomic,retain) NSString * pushKey; 
@property (nonatomic,retain) NSString * ctag; 
@property (nonatomic,retain) NSString * ptag; 
@property (nonatomic,retain) NSString * etag; 
@property (nonatomic,retain) NSString * syncToken; 
@property (nonatomic,retain) NSDictionary * bulkRequests; 
@property (assign,nonatomic) char supportsSyncCollection; 
@property (nonatomic,retain) NSString * bookmarksBarId; 
@property (nonatomic,retain) NSString * bookmarksMenuId; 
@property (assign,nonatomic) unsigned bookmarksBarOrder; 
@property (assign,nonatomic) unsigned bookmarksMenuOrder; 
@property (nonatomic,retain) NSDictionary * heldAsideOrderings; 
@property (assign,nonatomic) char hasHitQuotaLimit; 
@property (nonatomic,retain) NSNumber * knownQuotaRemaining; 
@property (assign,nonatomic) unsigned clientVersion; 
@property (nonatomic,retain) NSString * accountPrsId; 
@property (nonatomic,retain) NSURL * principalURL; 
-(NSDictionary *)bulkRequests;
-(void)setBulkRequests:(NSDictionary *)arg1 ;
-(NSString *)pushKey;
-(void)setPushKey:(NSString *)arg1 ;
-(void)dealloc;
-(id)initWithBookmarkDatabase:(void*)arg1 ;
-(void)writeToBookmarkDB;
-(void)setInitialSyncDone:(char)arg1 ;
-(void)setPtag:(NSString *)arg1 ;
-(void)setSupportsSyncCollection:(char)arg1 ;
-(char)hasHitQuotaLimit;
-(NSNumber *)knownQuotaRemaining;
-(void)setHasHitQuotaLimit:(char)arg1 ;
-(void)setKnownQuotaRemaining:(NSNumber *)arg1 ;
-(NSString *)bookmarksBarId;
-(unsigned)bookmarksBarOrder;
-(NSString *)bookmarksMenuId;
-(unsigned)bookmarksMenuOrder;
-(void)setBookmarksBarOrder:(unsigned)arg1 ;
-(void)setBookmarksMenuOrder:(unsigned)arg1 ;
-(char)initialSyncDone;
-(void)setBookmarksBarId:(NSString *)arg1 ;
-(void)setBookmarksMenuId:(NSString *)arg1 ;
-(NSString *)ptag;
-(NSDictionary *)heldAsideOrderings;
-(void)setHeldAsideOrderings:(NSDictionary *)arg1 ;
-(NSString *)accountPrsId;
-(char)supportsSyncCollection;
-(void)setAccountPrsId:(NSString *)arg1 ;
-(void)setEtag:(NSString *)arg1 ;
-(NSString *)etag;
-(NSDictionary *)pushTransports;
-(NSString *)syncToken;
-(void)setPushTransports:(NSDictionary *)arg1 ;
-(void)setSyncToken:(NSString *)arg1 ;
-(void)setPrincipalURL:(NSURL *)arg1 ;
-(NSURL *)homeURL;
-(NSString *)ctag;
-(void)setCtag:(NSString *)arg1 ;
-(void)setHomeURL:(NSURL *)arg1 ;
-(NSURL *)principalURL;
-(char)hasChanges;
-(unsigned)clientVersion;
-(void)setClientVersion:(unsigned)arg1 ;
@end

