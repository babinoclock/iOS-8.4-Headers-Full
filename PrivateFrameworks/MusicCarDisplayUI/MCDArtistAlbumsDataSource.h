/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:28 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/MusicCarDisplayUI.framework/MusicCarDisplayUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MusicCarDisplayUI/MusicCarDisplayUI-Structs.h>
#import <MusicCarDisplayUI/MCDQueryDataSource.h>

@class NSArray, NSMutableDictionary;

@interface MCDArtistAlbumsDataSource : MCDQueryDataSource {

	NSArray* _sectionEntities;
	NSMutableDictionary* _sectionRanges;

}
-(unsigned)numberOfSections;
-(char)showsIndexBar;
-(char)usesSections;
-(id)sectionEntities;
-(void)_invalidateCalculatedEntities;
-(NSRange)rangeOfSectionAtIndex:(unsigned)arg1 ;
-(void)removeOverlayCompletionForSectionAtIndex:(unsigned)arg1 ;
-(void)overlayCompletionForSectionAtIndex:(unsigned)arg1 ;
-(char)shouldShowCompletions;
-(id)entities;
@end

