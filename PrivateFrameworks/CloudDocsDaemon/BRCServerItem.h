/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:39:54 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudDocsDaemon/CloudDocsDaemon-Structs.h>
#import <CloudDocsDaemon/BRCItem.h>

@class BRCAccountSession, BRCServerZone, BRCLocalContainer, NSNumber, BRCItemID, NSString, BRCStatInfo, BRCVersion;

@interface BRCServerItem : NSObject <BRCItem> {

	BRCAccountSession* _session;
	BRCServerZone* _zone;
	BRCLocalContainer* _container;
	unsigned _sharingOptions;
	char _needsInsert;
	NSNumber* _ownerKey;
	BRCItemID* _itemID;
	NSString* _originalName;
	BRCStatInfo* _st;
	BRCVersion* _latestVersion;
	BRCServerZone* _serverZone;
	long long _rank;

}

@property (nonatomic,readonly) long long rank;                             //@synthesize rank=_rank - In the implementation block
@property (nonatomic,readonly) NSString * originalName;                    //@synthesize originalName=_originalName - In the implementation block
@property (nonatomic,readonly) BRCStatInfo * st;                           //@synthesize st=_st - In the implementation block
@property (nonatomic,readonly) BRCVersion * latestVersion;                 //@synthesize latestVersion=_latestVersion - In the implementation block
@property (nonatomic,readonly) char isDead; 
@property (nonatomic,readonly) char isLive; 
@property (nonatomic,readonly) char isAlias; 
@property (nonatomic,readonly) char isPackage; 
@property (nonatomic,readonly) char isDocument; 
@property (nonatomic,readonly) char isDirectory; 
@property (nonatomic,readonly) BRCItemID * itemID;                         //@synthesize itemID=_itemID - In the implementation block
@property (nonatomic,readonly) NSNumber * ownerKey;                        //@synthesize ownerKey=_ownerKey - In the implementation block
@property (nonatomic,readonly) BRCAccountSession * session;                //@synthesize session=_session - In the implementation block
@property (nonatomic,readonly) BRCServerZone * serverZone;                 //@synthesize serverZone=_serverZone - In the implementation block
@property (nonatomic,readonly) BRCLocalContainer * container;              //@synthesize container=_container - In the implementation block
@property (assign,nonatomic) unsigned sharingOptions;                      //@synthesize sharingOptions=_sharingOptions - In the implementation block
+(char)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BRCLocalContainer *)container;
-(BRCAccountSession *)session;
-(char)isDocument;
-(char)isAlias;
-(BRCStatInfo *)st;
-(char)isDead;
-(BRCItemID *)itemID;
-(unsigned)sharingOptions;
-(NSNumber *)ownerKey;
-(id)descriptionWithContext:(id)arg1 ;
-(BRCServerZone *)serverZone;
-(char)isDirectory;
-(char)isPackage;
-(unsigned long long)diffAgainstServerItem:(id)arg1 ;
-(BRCVersion *)latestVersion;
-(long long)rank;
-(char)validateLoggingToFile:(_sFILE*)arg1 ;
-(char)isLive;
-(void)setSharingOptions:(unsigned)arg1 ;
-(id)initFromPQLResultSet:(id)arg1 serverZone:(id)arg2 error:(id*)arg3 ;
-(id)initWithServerItem:(id)arg1 ;
-(id)newLocalItemWithServerZone:(id)arg1 dbRowID:(unsigned long long)arg2 ;
-(NSString *)originalName;
@end

