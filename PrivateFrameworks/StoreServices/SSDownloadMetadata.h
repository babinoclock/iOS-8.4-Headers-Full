/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:54 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreServices/StoreServices-Structs.h>
#import <StoreServices/SSXPCCoding.h>
#import <StoreServices/NSCoding.h>
#import <StoreServices/NSCopying.h>

@class NSMutableDictionary, NSLock, NSString, NSURL, NSDate, NSNumber, SSItemImageCollection, NSDictionary, NSData, NSArray;

@interface SSDownloadMetadata : NSObject <SSXPCCoding, NSCoding, NSCopying> {

	NSMutableDictionary* _dictionary;
	int _keyStyle;
	NSLock* _lock;

}

@property (assign) unsigned long long artistIdentifier; 
@property (copy) NSString * artistName; 
@property (retain) NSURL * fullSizeImageURL; 
@property (retain) NSString * genre; 
@property (assign) unsigned long long genreIdentifier; 
@property (assign) unsigned long long itemIdentifier; 
@property (retain) NSString * kind; 
@property (copy) NSString * longDescription; 
@property (retain) NSDate * releaseDate; 
@property (retain) NSNumber * releaseYear; 
@property (copy) NSString * shortDescription; 
@property (retain) NSString * subtitle; 
@property (retain) NSString * title; 
@property (retain) NSString * transactionIdentifier; 
@property (readonly) SSItemImageCollection * thumbnailImageCollection; 
@property (retain) NSString * thumbnailNewsstandBindingEdge; 
@property (retain) NSString * thumbnailNewsstandBindingType; 
@property (retain) NSURL * thumbnailImageURL; 
@property (readonly) NSDictionary * primaryAssetDictionary; 
@property (assign) int keyStyle; 
@property (retain,readonly) NSData * appReceiptData; 
@property (getter=isAutomaticDownload) char automaticDownload; 
@property (retain) NSURL * cancelDownloadURL; 
@property (retain) NSString * copyright; 
@property (retain) NSDictionary * dictionary; 
@property (retain) NSString * downloadKey; 
@property (readonly) NSNumber * downloaderAccountIdentifier; 
@property (retain) NSData * epubRightsData; 
@property (retain) NSString * fileExtension; 
@property (retain) NSURL * launchExtrasUrl; 
@property (readonly) NSArray * MD5HashStrings; 
@property (readonly) NSNumber * numberOfBytesToHash; 
@property (copy) NSString * pageProgressionDirection; 
@property (assign) unsigned long long preOrderIdentifier; 
@property (retain) NSURL * primaryAssetURL; 
@property (copy) NSString * preferredAssetFlavor; 
@property (copy) NSURL * transitMapDataURL; 
@property (copy) NSString * redownloadActionParameters; 
@property (getter=isRedownloadDownload) char redownloadDownload; 
@property (retain) NSString * releaseDateString; 
@property (copy) id requiredDeviceCapabilities; 
@property (getter=isContentRestricted,readonly) char contentRestricted; 
@property (assign) char shouldDownloadAutomatically; 
@property (retain) NSString * sortArtistName; 
@property (retain) NSString * sortCollectionName; 
@property (retain) NSString * sortTitle; 
@property (retain) NSArray * sinfs; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)isRental;
-(NSArray *)sinfs;
-(void)setSinfs:(NSArray *)arg1 ;
-(NSString *)downloadKey;
-(void)setItemIdentifier:(unsigned long long)arg1 ;
-(id)copyXPCEncoding;
-(id)initWithXPCEncoding:(id)arg1 ;
-(void)setFullSizeImageURL:(NSURL *)arg1 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(void)setTitle:(NSString *)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSDictionary *)dictionary;
-(id)bundleIdentifier;
-(NSString *)title;
-(id)applicationIdentifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithItem:(id)arg1 ;
-(NSString *)subtitle;
-(void)setSubtitle:(NSString *)arg1 ;
-(NSString *)shortDescription;
-(NSString *)kind;
-(void)setKind:(NSString *)arg1 ;
-(void)setBundleIdentifier:(id)arg1 ;
-(id)cloudIdentifier;
-(void)setComposerName:(id)arg1 ;
-(void)setNetworkName:(id)arg1 ;
-(void)setSeasonNumber:(id)arg1 ;
-(id)seasonNumber;
-(id)networkName;
-(void)setGenre:(NSString *)arg1 ;
-(NSString *)genre;
-(id)contentRating;
-(void)setContentRating:(id)arg1 ;
-(NSString *)artistName;
-(void)setArtistName:(NSString *)arg1 ;
-(void)setCompilation:(char)arg1 ;
-(void)setRental:(char)arg1 ;
-(char)isHighDefinition;
-(char)isCompilation;
-(unsigned long long)genreIdentifier;
-(unsigned long long)artistIdentifier;
-(id)collectionArtistName;
-(id)composerName;
-(id)episodeIdentifier;
-(id)episodeSortIdentifier;
-(id)indexInCollection;
-(id)numberOfCollectionsInCollectionGroup;
-(id)numberOfItemsInCollection;
-(id)podcastEpisodeGUID;
-(id)podcastFeedURL;
-(NSDate *)releaseDate;
-(id)seriesName;
-(char)isExplicitContent;
-(id)durationInMilliseconds;
-(void)setSortTitle:(NSString *)arg1 ;
-(void)setExplicitContent:(char)arg1 ;
-(void)setShortDescription:(NSString *)arg1 ;
-(void)setCopyright:(NSString *)arg1 ;
-(NSString *)sortTitle;
-(NSString *)copyright;
-(id)initWithKind:(id)arg1 ;
-(NSString *)longDescription;
-(unsigned long long)itemIdentifier;
-(void)setLongDescription:(NSString *)arg1 ;
-(NSString *)fileExtension;
-(void)setCollectionIdentifier:(unsigned long long)arg1 ;
-(void)setCollectionName:(id)arg1 ;
-(id)collectionName;
-(unsigned long long)collectionIdentifier;
-(void)setDictionary:(NSDictionary *)arg1 ;
-(void)setFileExtension:(NSString *)arg1 ;
-(char)isSample;
-(void)setRequiredDeviceCapabilities:(id)arg1 ;
-(NSString *)releaseDateString;
-(void)setReleaseDateString:(NSString *)arg1 ;
-(NSURL *)primaryAssetURL;
-(void)setThumbnailImageURL:(NSURL *)arg1 ;
-(void)setHighDefinition:(char)arg1 ;
-(void)setIndexInCollection:(id)arg1 ;
-(NSURL *)thumbnailImageURL;
-(void)setTransactionIdentifier:(NSString *)arg1 ;
-(id)_assetDictionary;
-(NSNumber *)downloaderAccountIdentifier;
-(id)newDownloadProperties;
-(NSURL *)fullSizeImageURL;
-(void)setValuesFromDownload:(id)arg1 ;
-(id)initWithItem:(id)arg1 offer:(id)arg2 ;
-(unsigned long long)preOrderIdentifier;
-(void)setPreOrderIdentifier:(unsigned long long)arg1 ;
-(void)setArtistIdentifier:(unsigned long long)arg1 ;
-(void)setCollectionArtistName:(id)arg1 ;
-(id)collectionIndexInCollectionGroup;
-(void)setCollectionIndexInCollectionGroup:(id)arg1 ;
-(void)setEpisodeIdentifier:(id)arg1 ;
-(void)setEpisodeSortIdentifier:(id)arg1 ;
-(void)setGenreIdentifier:(unsigned long long)arg1 ;
-(void)setNumberOfCollectionsInCollectionGroup:(id)arg1 ;
-(void)setNumberOfItemsInCollection:(id)arg1 ;
-(void)setPodcastEpisodeGUID:(id)arg1 ;
-(void)setSeriesName:(id)arg1 ;
-(void)setVideoDetailsDictionary:(id)arg1 ;
-(void)setValue:(id)arg1 forMetadataKey:(id)arg2 ;
-(void)setDurationInMilliseconds:(id)arg1 ;
-(void)setArtworkIsPrerendered:(char)arg1 ;
-(void)setThumbnailNewsstandBindingEdge:(NSString *)arg1 ;
-(void)setThumbnailNewsstandBindingType:(NSString *)arg1 ;
-(void)setReleaseYear:(NSNumber *)arg1 ;
-(void)setReleaseDate:(NSDate *)arg1 ;
-(void)setPodcastType:(id)arg1 ;
-(void)setPodcastFeedURL:(id)arg1 ;
-(void)setPrimaryAssetURL:(NSURL *)arg1 ;
-(void)setDownloadKey:(NSString *)arg1 ;
-(id)valueForFirstAvailableKey:(id)arg1 ;
-(id)_stringValueForValue:(id)arg1 ;
-(id)_urlValueForValue:(id)arg1 ;
-(id)_dateValueForValue:(id)arg1 ;
-(id)_releaseDateValue;
-(int)keyStyle;
-(void)_setValueCopy:(id)arg1 forMetadataKey:(id)arg2 ;
-(id)_newImageCollectionWithURLString:(id)arg1 ;
-(id)_thumbnailArtworkImage;
-(id)documentTargetIdentifier;
-(id)longSeasonDescription;
-(NSString *)pageProgressionDirection;
-(id)podcastType;
-(NSNumber *)releaseYear;
-(id)purchaseDate;
-(NSString *)transactionIdentifier;
-(NSURL *)cancelDownloadURL;
-(NSString *)redownloadActionParameters;
-(NSString *)thumbnailNewsstandBindingEdge;
-(NSString *)thumbnailNewsstandBindingType;
-(id)viewStoreItemURL;
-(id)valueForMetadataKey:(id)arg1 ;
-(char)artworkIsPrerendered;
-(unsigned long long)composerIdentifier;
-(id)_valueForFirstAvailableTopLevelKey:(id)arg1 ;
-(id)_newDateFormatter;
-(void)_setValue:(id)arg1 forTopLevelKey:(id)arg2 ;
-(void)setCancelDownloadURL:(NSURL *)arg1 ;
-(void)setCloudIdentifier:(id)arg1 ;
-(void)setDocumentTargetIdentifier:(id)arg1 ;
-(void)setLongSeasonDescription:(id)arg1 ;
-(void)setPageProgressionDirection:(NSString *)arg1 ;
-(void)setPurchaseDate:(id)arg1 ;
-(void)setRedownloadActionParameters:(NSString *)arg1 ;
-(void)setViewStoreItemURL:(id)arg1 ;
-(void)setComposerIdentifier:(unsigned long long)arg1 ;
-(void)setAutomaticDownload:(char)arg1 ;
-(void)setSample:(char)arg1 ;
-(void)setPreferredAssetFlavor:(NSString *)arg1 ;
-(SSItemImageCollection *)thumbnailImageCollection;
-(NSURL *)launchExtrasUrl;
-(NSDictionary *)primaryAssetDictionary;
-(unsigned long long)sagaIdentifier;
-(void)setLaunchExtrasUrl:(NSURL *)arg1 ;
-(void)setSagaIdentifier:(unsigned long long)arg1 ;
-(void)setSortArtistName:(NSString *)arg1 ;
-(void)setSortCollectionName:(NSString *)arg1 ;
-(NSString *)sortArtistName;
-(NSString *)sortCollectionName;
-(id)videoDetailsDictionary;
-(NSData *)appReceiptData;
-(id)copyWritableMetadata;
-(NSData *)epubRightsData;
-(char)isAutomaticDownload;
-(char)isContentRestricted;
-(char)isRedownloadDownload;
-(NSArray *)MD5HashStrings;
-(NSNumber *)numberOfBytesToHash;
-(NSString *)preferredAssetFlavor;
-(id)requiredDeviceCapabilities;
-(void)setEpubRightsData:(NSData *)arg1 ;
-(void)setKeyStyle:(int)arg1 ;
-(void)setMD5HashStrings:(id)arg1 numberOfBytesToHash:(id)arg2 ;
-(void)setRedownloadDownload:(char)arg1 ;
-(void)setShouldDownloadAutomatically:(char)arg1 ;
-(void)setTransitMapDataURL:(NSURL *)arg1 ;
-(char)shouldDownloadAutomatically;
-(NSURL *)transitMapDataURL;
@end
