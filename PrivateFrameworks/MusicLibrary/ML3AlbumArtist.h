/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:29 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MusicLibrary/ML3Collection.h>

@interface ML3AlbumArtist : ML3Collection
+(id)propertyForMPMediaEntityProperty:(id)arg1 ;
+(void)initialize;
+(int)revisionTrackingCode;
+(id)databaseTable;
+(id)allProperties;
+(char)propertyIsCountProperty:(id)arg1 ;
+(id)countingQueryForBaseQuery:(id)arg1 countProperty:(id)arg2 forIdentifier:(long long)arg3 ;
+(char)deleteFromLibrary:(id)arg1 deletionType:(int)arg2 persistentIDs:(const long long*)arg3 count:(unsigned)arg4 usingConnection:(id)arg5 ;
+(id)predisambiguatedProperties;
+(id)defaultOrderingTerms;
+(id)sectionPropertyForProperty:(id)arg1 ;
+(id)foreignPropertyForProperty:(id)arg1 entityClass:(Class)arg2 ;
+(id)propertiesForGroupingKey;
+(id)trackForeignPersistentID;
+(id)propertiesForGroupingUniqueCollections;
+(id)protocolItemWithProperties:(id)arg1 inLibrary:(id)arg2 ;
-(void)updateTrackValues:(id)arg1 ;
-(void)updateRepresentativeItem:(id)arg1 inLibrary:(id)arg2 ;
-(id)multiverseIdentifier;
-(id)protocolItem;
@end

