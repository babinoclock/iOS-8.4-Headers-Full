/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:40:39 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FuseUI/FuseUI-Structs.h>
#import <FuseUI/NSCopying.h>

@protocol OS_dispatch_queue;
@class NSObject, NSMapTable, NSArray, NSDictionary, NSString, MPStoreItemMetadata, MPUContentItemIdentifierCollection;

@interface MusicStoreItemMetadataContext : NSObject <NSCopying> {

	NSObject*<OS_dispatch_queue> _accessQueue;
	NSMapTable* _adjustedOptionsToRepresentativeMediaEntity;
	char _hasOverrideChildrenMetadataContexts;
	NSArray* _overrideChildrenMetadataContexts;
	char _wantsRepresentativeMediaEntity;
	char _hasCompleteStoreItemMetadata;
	NSDictionary* _JSDictionary;
	NSString* _storeID;
	MPStoreItemMetadata* _storeItemMetadata;

}

@property (nonatomic,copy,readonly) MPUContentItemIdentifierCollection * MPU_contentItemIdentifierCollection; 
@property (nonatomic,copy,readonly) NSArray * childrenStoreItemMetadataContexts; 
@property (nonatomic,readonly) char hasCompleteStoreItemMetadata;                                                          //@synthesize hasCompleteStoreItemMetadata=_hasCompleteStoreItemMetadata - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * JSDictionary;                                                           //@synthesize JSDictionary=_JSDictionary - In the implementation block
@property (nonatomic,copy,readonly) NSString * storeID;                                                                    //@synthesize storeID=_storeID - In the implementation block
@property (nonatomic,copy,readonly) MPStoreItemMetadata * storeItemMetadata;                                               //@synthesize storeItemMetadata=_storeItemMetadata - In the implementation block
@property (getter=isStoreRestricted,nonatomic,readonly) char storeRestricted; 
@property (getter=isCompilation,nonatomic,readonly) char compilation; 
+(id)mediaLibrary;
-(NSString *)storeID;
-(void)_mediaLibraryDynamicPropertiesDidChangeNotification:(id)arg1 ;
-(void)_mediaLibraryDidChangeNotification:(id)arg1 ;
-(MPStoreItemMetadata *)storeItemMetadata;
-(void)dealloc;
-(id)init;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSDictionary:(id)arg1 ;
-(id)representativeMediaEntityWithOptions:(unsigned)arg1 ;
-(id)initWithStoreItemMetadata:(id)arg1 hasCompleteStoreItemMetadata:(char)arg2 ;
-(char)isStoreRestricted;
-(NSArray *)childrenStoreItemMetadataContexts;
-(id)storeItemMetadataContextWithChildStoreItemMetadataContexts:(id)arg1 ;
-(char)hasCompleteStoreItemMetadata;
-(id)initWithStorePlatformDictionary:(id)arg1 hasCompleteStoreItemMetadata:(char)arg2 ;
-(id)initWithStoreID:(id)arg1 ;
-(NSDictionary *)JSDictionary;
-(id)initWithStorePlatformDictionary:(id)arg1 storeID:(id)arg2 hasCompleteStoreItemMetadata:(char)arg3 ;
-(void)_beginObservingMediaLibraryNotifications;
-(id)storeItemMetadataContextWithParentMetadata:(id)arg1 ;
-(void)_invalidateFromMediaLibraryChange;
-(char)isCompilation;
-(char)isPlayable;
-(MPUContentItemIdentifierCollection *)MPU_contentItemIdentifierCollection;
@end

