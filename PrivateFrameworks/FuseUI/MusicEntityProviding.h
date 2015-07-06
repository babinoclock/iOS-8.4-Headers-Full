/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:40:32 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol MusicEntityProviding <SKUIEntityProviding>
@optional
-(char)hasEntitiesNotInLibrary;
-(void)setEditing:(char)arg1 returningInsertedSectionIndexSet:(id*)arg2 deletedSectionIndexSet:(id*)arg3;

@required
-(unsigned)numberOfSections;
-(void)configureEntityValueContextOutputForAnyIndexPath:(id)arg1;
-(id)indexBarEntryAtIndex:(unsigned)arg1;
-(void)configureEntityValueContextOutput:(id)arg1 forIndexPath:(id)arg2;
-(void)configureSectionEntityValueContextOutput:(id)arg1 forIndex:(unsigned)arg2;
-(id)indexPathForEntityValueContext:(id)arg1;
-(char)hasEntities;
-(id)entityValueProviderAtIndexPath:(id)arg1;
-(unsigned)numberOfEntitiesInSection:(unsigned)arg1;
-(unsigned)numberOfIndexBarEntries;
-(unsigned)sectionForSectionIndexBarEntryAtIndex:(unsigned)arg1;

@end

