/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:36:36 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class NSString, NSSet;

@interface PFUbiquityPeer : NSManagedObject

@property (nonatomic,retain) NSString * peerKey; 
@property (nonatomic,retain) NSString * peerCode; 
@property (nonatomic,retain) NSSet * remoteStates; 
@property (nonatomic,retain) NSSet * primaryKeyRanges; 
@property (nonatomic,retain) NSSet * transactionEntries; 
@property (nonatomic,retain) NSSet * localPeerStates; 
+(id)allPeersInManagedObjectContext:(id)arg1 ;
+(id)peerForPeerID:(id)arg1 inManagedObjectContext:(id)arg2 createIfMissing:(char)arg3 ;
@end

