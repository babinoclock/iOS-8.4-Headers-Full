/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:03 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
#import <PhotoLibraryServices/PLAlbumContainer.h>
#import <PhotoLibraryServices/PLIndexMappingCache.h>

@class NSMutableOrderedSet, NSString;

@interface PLSortedAlbumList : NSObject <PLAlbumContainer, PLIndexMappingCache> {

	NSObject* _backingAlbumList;
	CFArrayRef _toBackingMap;
	CFArrayRef _fromBackingMap;
	/*^block*/id _sortComparator;
	NSMutableOrderedSet* _weak_albums;

}

@property (nonatomic,retain) NSObject*<PLAlbumContainer> backingAlbumList;                    //@synthesize backingAlbumList=_backingAlbumList - In the implementation block
@property (nonatomic,copy) id sortComparator;                                                 //@synthesize sortComparator=_sortComparator - In the implementation block
@property (nonatomic,retain) NSMutableOrderedSet * _albums; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned containersCount; 
@property (nonatomic,readonly) unsigned albumsCount; 
@property (nonatomic,readonly) char isFolder; 
@property (nonatomic,copy,readonly) id albumsSortingComparator; 
@property (nonatomic,readonly) int filter; 
@property (nonatomic,readonly) unsigned unreadAlbumsCount; 
@property (nonatomic,retain,readonly) NSString * _prettyDescription; 
@property (nonatomic,retain,readonly) NSString * _typeDescription; 
@property (nonatomic,copy,readonly) id<NSObject><NSCopying> cachedIndexMapState; 
-(void)dealloc;
-(id)identifier;
-(char)isEmpty;
-(id)managedObjectContext;
-(id)albums;
-(char)isFolder;
-(id)photoLibrary;
-(unsigned)albumsCount;
-(NSString *)_prettyDescription;
-(int)filter;
-(char)mappedDataSourceChanged:(id)arg1 remoteNotificationData:(id)arg2 ;
-(Class)derivedChangeNotificationClass;
-(id<NSObject><NSCopying>)cachedIndexMapState;
-(id)containers;
-(char)canEditContainers;
-(id)containersRelationshipName;
-(unsigned)containersCount;
-(short)albumListType;
-(NSString *)_typeDescription;
-(char)hasAtLeastOneAlbum;
-(char)canEditAlbums;
-(id)albumsSortingComparator;
-(void)preheatAlbumsAtIndexes:(id)arg1 forProperties:(id)arg2 relationships:(id)arg3 ;
-(char)albumHasFixedOrder:(NSObject*)arg1 ;
-(void)setNeedsReordering;
-(char)needsReordering;
-(void)updateAlbumsOrderIfNeeded;
-(void)preheatAlbumsForProperties:(id)arg1 relationships:(id)arg2 ;
-(unsigned)unreadAlbumsCount;
-(void)setBackingAlbumList:(NSObject*<PLAlbumContainer>)arg1 ;
-(NSObject*<PLAlbumContainer>)backingAlbumList;
-(NSMutableOrderedSet *)_albums;
-(void)set_albums:(NSMutableOrderedSet *)arg1 ;
-(void)setSortComparator:(id)arg1 ;
-(id)sortComparator;
-(id)initWithAlbumList:(NSObject*)arg1 sortComparator:(/*^block*/id)arg2 ;
-(void)createSortedIndexesMap;
-(unsigned)countOfSortedAlbums;
-(unsigned)indexInSortedAlbumsOfObject:(id)arg1 ;
-(id)objectInSortedAlbumsAtIndex:(unsigned)arg1 ;
-(void)insertObject:(id)arg1 inSortedAlbumsAtIndex:(unsigned)arg2 ;
-(void)removeObjectFromSortedAlbumsAtIndex:(unsigned)arg1 ;
-(void)replaceObjectInSortedAlbumsAtIndex:(unsigned)arg1 withObject:(id)arg2 ;
@end

