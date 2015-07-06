/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:40:11 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreMediaStream/CoreMediaStream-Structs.h>
#import <CoreMediaStream/MMCSAsset.h>
#import <CoreMediaStream/NSSecureCoding.h>
#import <CoreMediaStream/NSCopying.h>

@protocol NSCoding;
@class NSString, NSData, NSError, NSDate, NSDictionary, NSURL;

@interface MSAsset : NSObject <MMCSAsset, NSSecureCoding, NSCopying> {

	char _assetDataAvailableOnServer;
	NSData* _masterAssetHash;
	NSDictionary* _metadata;
	NSString* _path;
	NSURL* _MMCSURL;
	NSData* _fileData;
	NSError* _error;
	NSString* _type;
	NSData* _fileHash;
	NSString* _MMCSAccessHeader;
	NSDate* _MMCSAccessHeaderTimeStamp;
	NSString* _MMCSReceipt;
	NSString* _GUID;
	NSString* _assetCollectionGUID;
	NSDate* _batchCreationDate;
	NSDate* _photoCreationDate;
	id<NSCoding> _userInfo;
	unsigned _mediaAssetType;
	unsigned long long _protocolFileSize;

}

@property (getter=UID,nonatomic,retain) NSString * GUID;                       //@synthesize GUID=_GUID - In the implementation block
@property (nonatomic,retain) NSData * masterAssetHash;                         //@synthesize masterAssetHash=_masterAssetHash - In the implementation block
@property (nonatomic,retain) NSDictionary * metadata;                          //@synthesize metadata=_metadata - In the implementation block
@property (nonatomic,retain) NSString * path;                                  //@synthesize path=_path - In the implementation block
@property (nonatomic,retain) NSURL * MMCSURL;                                  //@synthesize MMCSURL=_MMCSURL - In the implementation block
@property (nonatomic,retain) NSData * fileData;                                //@synthesize fileData=_fileData - In the implementation block
@property (nonatomic,retain) NSString * assetCollectionGUID;                   //@synthesize assetCollectionGUID=_assetCollectionGUID - In the implementation block
@property (nonatomic,retain) NSDate * batchCreationDate;                       //@synthesize batchCreationDate=_batchCreationDate - In the implementation block
@property (nonatomic,retain) NSDate * photoCreationDate;                       //@synthesize photoCreationDate=_photoCreationDate - In the implementation block
@property (nonatomic,retain) NSError * error;                                  //@synthesize error=_error - In the implementation block
@property (nonatomic,retain) id<NSCoding> userInfo;                            //@synthesize userInfo=_userInfo - In the implementation block
@property (assign,nonatomic) unsigned mediaAssetType;                          //@synthesize mediaAssetType=_mediaAssetType - In the implementation block
@property (assign,nonatomic) char assetDataAvailableOnServer;                  //@synthesize assetDataAvailableOnServer=_assetDataAvailableOnServer - In the implementation block
@property (nonatomic,retain) NSData * fileHash; 
@property (nonatomic,retain) NSString * type; 
@property (assign,nonatomic) unsigned long long protocolFileSize; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) NSString * MMCSUTI;                               //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) unsigned long long MMCSItemID; 
@property (nonatomic,retain) NSData * MMCSHash;                                //@synthesize fileHash=_fileHash - In the implementation block
@property (assign,nonatomic) unsigned long long MMCSItemSize;                  //@synthesize protocolFileSize=_protocolFileSize - In the implementation block
@property (nonatomic,retain) NSError * MMCSError; 
@property (nonatomic,retain) NSString * MMCSAccessHeader;                      //@synthesize MMCSAccessHeader=_MMCSAccessHeader - In the implementation block
@property (nonatomic,retain) NSDate * MMCSAccessHeaderTimeStamp;               //@synthesize MMCSAccessHeaderTimeStamp=_MMCSAccessHeaderTimeStamp - In the implementation block
@property (nonatomic,retain) NSString * MMCSReceipt;                           //@synthesize MMCSReceipt=_MMCSReceipt - In the implementation block
@property (assign,nonatomic) unsigned long MMCSItemFlags; 
+(char)supportsSecureCoding;
+(id)asset;
+(id)assetWithAsset:(id)arg1 ;
+(id)MSASPAssetFromProtocolDictionary:(id)arg1 ;
-(unsigned long long)_fileSize;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(NSString *)description;
-(void)setType:(NSString *)arg1 ;
-(NSString *)type;
-(void)setUserInfo:(id<NSCoding>)arg1 ;
-(NSString *)path;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id<NSCoding>)userInfo;
-(void)setPath:(NSString *)arg1 ;
-(char)isVideo;
-(NSError *)error;
-(void)setProtocolFileSize:(unsigned long long)arg1 ;
-(NSData *)fileData;
-(NSData *)masterAssetHash;
-(unsigned long long)_fileSizeOnDisk;
-(void)setMMCSAccessHeader:(NSString *)arg1 ;
-(NSString *)MMCSAccessHeader;
-(void)addMetadataValue:(id)arg1 forKey:(id)arg2 ;
-(NSData *)MMCSHash;
-(void)setMMCSHash:(NSData *)arg1 ;
-(NSString *)MMCSUTI;
-(void)setMMCSUTI:(NSString *)arg1 ;
-(unsigned long long)MMCSItemSize;
-(void)setMMCSItemSize:(unsigned long long)arg1 ;
-(id)initWithGUID:(id)arg1 ;
-(NSURL *)MMCSURL;
-(void)setMMCSURL:(NSURL *)arg1 ;
-(void)setFileData:(NSData *)arg1 ;
-(NSDate *)MMCSAccessHeaderTimeStamp;
-(void)setMMCSAccessHeader:(id)arg1 andTimeStamp:(id)arg2 ;
-(NSString *)MMCSReceipt;
-(void)setMMCSReceipt:(NSString *)arg1 ;
-(NSDate *)batchCreationDate;
-(void)setBatchCreationDate:(NSDate *)arg1 ;
-(NSDate *)photoCreationDate;
-(void)setPhotoCreationDate:(NSDate *)arg1 ;
-(char)assetDataAvailableOnServer;
-(void)setAssetDataAvailableOnServer:(char)arg1 ;
-(int)MMCSOpenNewFileDescriptor;
-(id)MMCSItemType;
-(unsigned long long)MMCSItemID;
-(void)setMMCSItemID:(unsigned long long)arg1 ;
-(NSError *)MMCSError;
-(void)setMMCSError:(NSError *)arg1 ;
-(void)setMMCSAccessHeaderTimeStamp:(NSDate *)arg1 ;
-(unsigned long)MMCSItemFlags;
-(void)setMMCSItemFlags:(unsigned long)arg1 ;
-(unsigned long long)protocolFileSize;
-(id)MSASPProtocolDictionary;
-(id)metadataValueForKey:(id)arg1 ;
-(void)setError:(NSError *)arg1 ;
-(char)isPhoto;
-(void)setMetadata:(NSDictionary *)arg1 ;
-(NSDictionary *)metadata;
-(NSData *)fileHash;
-(void)setMasterAssetHash:(NSData *)arg1 ;
-(void)setFileHash:(NSData *)arg1 ;
-(void)setGUID:(NSString *)arg1 ;
-(NSString *)GUID;
-(void)setMetadataValue:(id)arg1 forKey:(id)arg2 ;
-(void)setMediaAssetType:(unsigned)arg1 ;
-(unsigned)mediaAssetType;
-(void)setAssetCollectionGUID:(NSString *)arg1 ;
-(NSString *)assetCollectionGUID;
@end

