/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:40:35 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FuseUI/MusicLibraryBrowseTableViewConfiguration.h>

@class NSMutableSet;

@interface MusicLibrarySongsViewConfiguration : MusicLibraryBrowseTableViewConfiguration {

	NSMutableSet* _additionalQueryFilterPredicates;

}
-(id)init;
-(id)loadEntityViewDescriptor;
-(int)handleSelectionOfEntityValueContext:(id)arg1 fromViewController:(id)arg2 ;
-(void)addQueryFilterPredicate:(id)arg1 ;
@end

