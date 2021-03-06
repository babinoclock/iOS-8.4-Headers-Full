/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:39:52 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudDocs/CloudDocs-Structs.h>
#import <CloudDocs/NSSecureCoding.h>
#import <CloudDocs/NSCopying.h>

@class NSString, NSNumber, NSMutableDictionary, NSURL;

@interface BRQueryItem : NSObject <NSSecureCoding, NSCopying> {

	SCD_Union_BR5 _flags;
	unsigned short _diffs;
	NSString* _containerID;
	NSString* _parentPath;
	NSString* _logicalName;
	NSString* _physicalName;
	NSNumber* _fileObjectID;
	NSNumber* _size;
	NSNumber* _mtime;
	NSMutableDictionary* _attrs;
	NSURL* _url;
	NSURL* _localRepresentationURL;
	id _replacement;
	char _isNetworkOffline;
	long long _logicalHandle;
	long long _physicalHandle;

}

@property (nonatomic,readonly) unsigned short diffs;                        //@synthesize diffs=_diffs - In the implementation block
@property (nonatomic,readonly) unsigned downloadStatus; 
@property (nonatomic,readonly) unsigned uploadStatus; 
@property (nonatomic,readonly) unsigned shareOptions; 
@property (nonatomic,readonly) char isInTransfer; 
@property (nonatomic,readonly) char isConflicted; 
@property (nonatomic,readonly) char isLive; 
@property (nonatomic,readonly) char isDead; 
@property (nonatomic,readonly) char isDocument; 
@property (nonatomic,readonly) char hasTransferStatuses; 
@property (assign,nonatomic) char isPreCrash; 
@property (nonatomic,readonly) char isUploadActive; 
@property (nonatomic,readonly) char isDownloadActive; 
@property (nonatomic,readonly) char isDownloadRequested; 
@property (nonatomic,readonly) char isAlias; 
@property (nonatomic,readonly) NSString * containerID;                      //@synthesize containerID=_containerID - In the implementation block
@property (nonatomic,readonly) NSString * parentPath;                       //@synthesize parentPath=_parentPath - In the implementation block
@property (nonatomic,readonly) NSString * logicalName;                      //@synthesize logicalName=_logicalName - In the implementation block
@property (nonatomic,readonly) NSString * physicalName;                     //@synthesize physicalName=_physicalName - In the implementation block
@property (nonatomic,readonly) NSNumber * fileObjectID;                     //@synthesize fileObjectID=_fileObjectID - In the implementation block
@property (nonatomic,readonly) NSNumber * size;                             //@synthesize size=_size - In the implementation block
@property (nonatomic,readonly) NSNumber * mtime;                            //@synthesize mtime=_mtime - In the implementation block
@property (nonatomic,readonly) NSURL * url;                                 //@synthesize url=_url - In the implementation block
@property (nonatomic,readonly) NSURL * localRepresentationURL;              //@synthesize localRepresentationURL=_localRepresentationURL - In the implementation block
@property (nonatomic,readonly) NSString * path; 
@property (assign,nonatomic) char isNetworkOffline;                         //@synthesize isNetworkOffline=_isNetworkOffline - In the implementation block
@property (assign,nonatomic) id replacement; 
+(void)initialize;
+(char)supportsSecureCoding;
+(id)askDaemonQueryItemForURL:(id)arg1 ;
-(id)attributeNames;
-(id)attributesForNames:(id)arg1 ;
-(id)valueForKey:(id)arg1 ;
-(void)dealloc;
-(NSNumber *)size;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(id)description;
-(NSURL *)url;
-(NSString *)path;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setIsNetworkOffline:(char)arg1 ;
-(char)isUploadActive;
-(char)isDownloadActive;
-(void)attachLogicalExtension:(id)arg1 physicalExtension:(id)arg2 ;
-(char)isConflicted;
-(NSURL *)localRepresentationURL;
-(id)sharedItemRole;
-(id)initWithQueryItem:(id)arg1 ;
-(char)isEqualToQueryItem:(id)arg1 ;
-(void)_mergeURL:(id)arg1 ;
-(void)_mergeAttrs:(id)arg1 ;
-(unsigned)shareOptions;
-(void)clearDiffs;
-(char)isPreCrash;
-(void)setIsPreCrash:(char)arg1 ;
-(void)_setAttr:(id)arg1 forKey:(id)arg2 ;
-(char)hasTransferStatuses;
-(id)replacement;
-(void)setReplacement:(id)arg1 ;
-(char)isNetworkOffline;
-(char)isDocument;
-(NSString *)containerID;
-(NSNumber *)fileObjectID;
-(char)isAlias;
-(char)isDead;
-(NSNumber *)mtime;
-(unsigned)downloadStatus;
-(unsigned)uploadStatus;
-(void)setAttribute:(id)arg1 forKey:(id)arg2 ;
-(char)isDownloadRequested;
-(void)merge:(id)arg1 ;
-(id)subclassDescription;
-(char)canMerge:(id)arg1 ;
-(void)markDead;
-(NSString *)parentPath;
-(char)isShared;
-(NSString *)logicalName;
-(unsigned short)diffs;
-(char)isLive;
-(char)isInTransfer;
-(NSString *)physicalName;
-(id)attributeForName:(id)arg1 ;
@end

