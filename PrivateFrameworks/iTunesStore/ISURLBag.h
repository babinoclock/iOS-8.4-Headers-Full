/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:43:26 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class SSURLBagContext, SSNetworkConstraints, NSDictionary, NSArray, NSSet, NSString;

@interface ISURLBag : NSObject {

	SSURLBagContext* _context;
	SSNetworkConstraints* _defaultConstraints;
	NSDictionary* _dictionary;
	NSArray* _guidPatterns;
	NSSet* _guidSchemes;
	NSDictionary* _headerPatterns;
	double _invalidationTime;
	char _loadedFromDiskCache;
	NSString* _storeFrontIdentifier;

}

@property (readonly) NSSet * availableStorefrontItemKinds; 
@property (getter=isValid,nonatomic,readonly) char valid; 
@property (assign,nonatomic) double invalidationTime;                        //@synthesize invalidationTime=_invalidationTime - In the implementation block
@property (assign,nonatomic) char loadedFromDiskCache;                       //@synthesize loadedFromDiskCache=_loadedFromDiskCache - In the implementation block
@property (nonatomic,copy) NSString * storeFrontIdentifier;                  //@synthesize storeFrontIdentifier=_storeFrontIdentifier - In the implementation block
@property (nonatomic,copy) SSURLBagContext * URLBagContext; 
@property (nonatomic,readonly) NSDictionary * URLBagDictionary; 
@property (nonatomic,readonly) long long versionIdentifier; 
+(void)_loadItemKindURLBagKeyMap;
+(char)_allowUnsignedBags;
+(id)copyExtraHeadersForURL:(id)arg1 inBagContext:(id)arg2 ;
+(id)networkConstraintsForDownloadKind:(id)arg1 inBagContext:(id)arg2 ;
+(char)shouldSendGUIDForURL:(id)arg1 inBagContext:(id)arg2 ;
+(id)urlBagForContext:(id)arg1 ;
+(id)urlForKey:(id)arg1 inBagContext:(id)arg2 ;
+(char)urlIsTrusted:(id)arg1 inBagContext:(id)arg2 ;
+(id)valueForKey:(id)arg1 inBagContext:(id)arg2 ;
+(id)storeFrontURLBagKeyForItemKind:(id)arg1 ;
-(NSString *)storeFrontIdentifier;
-(id)initWithURLBagContext:(id)arg1 ;
-(id)valueForKey:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(char)writeToFile:(id)arg1 options:(unsigned)arg2 error:(id*)arg3 ;
-(char)isValid;
-(id)initWithContentsOfFile:(id)arg1 ;
-(id)urlForKey:(id)arg1 ;
-(long long)versionIdentifier;
-(NSDictionary *)URLBagDictionary;
-(char)urlIsTrusted:(id)arg1 ;
-(SSURLBagContext *)URLBagContext;
-(char)shouldSendAnonymousMachineIdentifierForURL:(id)arg1 ;
-(void)setStoreFrontIdentifier:(NSString *)arg1 ;
-(id)initWithRawDictionary:(id)arg1 ;
-(void)_setDictionary:(id)arg1 ;
-(id)_copyGUIDPatternsFromDictionary:(id)arg1 ;
-(id)_copyGUIDSchemesFromDictionary:(id)arg1 ;
-(id)_copyHeaderPatternsFromDictionary:(id)arg1 ;
-(id)_networkConstraintsCachePath;
-(void)_writeNetworkConstraintsCacheFile;
-(void)_writeURLResolutionCacheFile;
-(double)invalidationTime;
-(void)setInvalidationTime:(double)arg1 ;
-(id)copyExtraHeadersForURL:(id)arg1 ;
-(char)shouldSendGUIDForURL:(id)arg1 ;
-(void)_preprocessURLResolutionCacheDictionary:(id)arg1 ;
-(char)loadFromDictionary:(id)arg1 returningError:(id*)arg2 ;
-(NSSet *)availableStorefrontItemKinds;
-(void)setInvalidationTimeWithExprationInterval:(double)arg1 ;
-(id)sanitizedURLForURL:(id)arg1 ;
-(void)setURLBagContext:(SSURLBagContext *)arg1 ;
-(char)loadedFromDiskCache;
-(void)setLoadedFromDiskCache:(char)arg1 ;
-(id)URLForURL:(id)arg1 clientIdentifier:(id)arg2 ;
-(id)searchQueryParametersForClientIdentifier:(id)arg1 networkType:(int)arg2 ;
-(id)networkConstraintsForDownloadKind:(id)arg1 ;
@end

