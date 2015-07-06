/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:39:54 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

@class BRCItemID, BRCStatInfo, NSNumber, BRCAccountSession, BRCServerZone, BRCLocalContainer;


@protocol BRCItem <NSCopying,NSSecureCoding>
@property (nonatomic,readonly) char isDead; 
@property (nonatomic,readonly) char isLive; 
@property (nonatomic,readonly) char isAlias; 
@property (nonatomic,readonly) char isPackage; 
@property (nonatomic,readonly) char isDocument; 
@property (nonatomic,readonly) char isDirectory; 
@property (nonatomic,readonly) BRCItemID * itemID; 
@property (nonatomic,readonly) BRCStatInfo * st; 
@property (nonatomic,readonly) NSNumber * ownerKey; 
@property (nonatomic,readonly) BRCAccountSession * session; 
@property (nonatomic,readonly) BRCServerZone * serverZone; 
@property (nonatomic,readonly) BRCLocalContainer * container; 
@property (assign,nonatomic) unsigned sharingOptions; 
@required
-(BRCLocalContainer *)container;
-(BRCAccountSession *)session;
-(char)isDocument;
-(char)isAlias;
-(BRCStatInfo *)st;
-(char)isDead;
-(BRCItemID *)itemID;
-(unsigned)sharingOptions;
-(NSNumber *)ownerKey;
-(BRCServerZone *)serverZone;
-(char)isDirectory;
-(char)isPackage;
-(char)validateLoggingToFile:(_sFILE*)arg1;
-(char)isLive;
-(void)setSharingOptions:(unsigned)arg1;

@end
