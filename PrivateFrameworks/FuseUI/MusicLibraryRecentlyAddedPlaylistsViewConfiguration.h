/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:40:38 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FuseUI/MusicLibraryAdaptiveViewConfiguration.h>

@class MusicLibraryRecentlyAddedPlaylistsCollectionViewConfiguration;

@interface MusicLibraryRecentlyAddedPlaylistsViewConfiguration : MusicLibraryAdaptiveViewConfiguration {

	MusicLibraryRecentlyAddedPlaylistsCollectionViewConfiguration* _collectionViewConfiguration;
	char _shouldForwardBasePropertyValues;

}

@property (nonatomic,readonly) unsigned entityLimit; 
+(unsigned)defaultEntityLimit;
-(void)setIconName:(id)arg1 ;
-(id)init;
-(void)setTitle:(id)arg1 ;
-(void)setIdentifier:(id)arg1 ;
-(void)setUserActivityItemTypes:(id)arg1 ;
-(int)handleSelectionOfEntityValueContext:(id)arg1 fromViewController:(id)arg2 ;
-(id)entityViewDescriptor;
-(id)initWithEntityLimit:(unsigned)arg1 ;
-(id)loadCompactWidthConfiguration;
-(id)loadRegularWidthConfiguration;
-(unsigned)entityLimit;
@end

