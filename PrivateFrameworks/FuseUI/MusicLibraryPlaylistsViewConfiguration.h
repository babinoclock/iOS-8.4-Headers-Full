/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:40:33 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FuseUI/MusicLibraryBrowseTableViewConfiguration.h>

@class NSMutableSet, NSString, NSSet;

@interface MusicLibraryPlaylistsViewConfiguration : MusicLibraryBrowseTableViewConfiguration {

	NSMutableSet* _additionalQueryFilterPredicates;
	char _playlistsFilterIsCuratorID;
	unsigned _playlistsConfigurationOptions;
	NSString* _playlistsFilter;

}

@property (assign,nonatomic) unsigned playlistsConfigurationOptions;                      //@synthesize playlistsConfigurationOptions=_playlistsConfigurationOptions - In the implementation block
@property (nonatomic,copy) NSString * playlistsFilter;                                    //@synthesize playlistsFilter=_playlistsFilter - In the implementation block
@property (nonatomic,copy,readonly) NSSet * additionalQueryFilterPredicates; 
+(void)getDetailViewController:(id*)arg1 playbackContext:(id*)arg2 forEntityValueContext:(id)arg3 sourceViewController:(id)arg4 ;
-(id)init;
-(id)loadEntityViewDescriptor;
-(int)handleSelectionOfEntityValueContext:(id)arg1 fromViewController:(id)arg2 ;
-(id)initWithPlaylistsFilter:(id)arg1 playlistsConfigurationOptions:(unsigned)arg2 ;
-(void)setPlaylistsFilter:(NSString *)arg1 ;
-(void)_handleDeletionOfEntityValueProvider:(id)arg1 ;
-(void)_updatePlaylistsFilterIsCuratorIDStatus;
-(void)addQueryFilterPredicate:(id)arg1 ;
-(char)canDeleteEntityValueContext:(id)arg1 ;
-(void)applyEntityProviderChangeRecords:(id)arg1 ;
-(int)handleSelectionFromUserActivityContext:(id)arg1 containerItem:(id)arg2 entityValueContext:(id)arg3 viewController:(id)arg4 ;
-(NSSet *)additionalQueryFilterPredicates;
-(unsigned)playlistsConfigurationOptions;
-(void)setPlaylistsConfigurationOptions:(unsigned)arg1 ;
-(NSString *)playlistsFilter;
@end

