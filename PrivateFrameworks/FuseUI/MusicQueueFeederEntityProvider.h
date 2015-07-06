/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:40:37 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FuseUI/MusicEntityProviding.h>

@class MPQueueFeeder, NSString;

@interface MusicQueueFeederEntityProvider : NSObject <MusicEntityProviding> {

	char _canUseMetadataItemsForEntities;
	char _hasValidCanUseMetadataItemsForEntities;
	MPQueueFeeder* _queueFeeder;

}

@property (nonatomic,readonly) MPQueueFeeder * queueFeeder;              //@synthesize queueFeeder=_queueFeeder - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(unsigned)numberOfSections;
-(void)configureEntityValueContextOutputForAnyIndexPath:(id)arg1 ;
-(id)indexBarEntryAtIndex:(unsigned)arg1 ;
-(void)configureEntityValueContextOutput:(id)arg1 forIndexPath:(id)arg2 ;
-(void)configureSectionEntityValueContextOutput:(id)arg1 forIndex:(unsigned)arg2 ;
-(id)indexPathForEntityValueContext:(id)arg1 ;
-(char)hasEntitiesNotInLibrary;
-(id)initWithQueueFeeder:(id)arg1 ;
-(void)configureEntityValueContextOutput:(id)arg1 forItem:(id)arg2 ;
-(void)_queueFeederContentsDidChangeNotification:(id)arg1 ;
-(void)_configureEntityValueContextOutput:(id)arg1 forItemAtIndex:(unsigned)arg2 ;
-(void)_getItemIdentifierCollection:(id*)arg1 entityValueProvider:(id*)arg2 atIndex:(unsigned)arg3 ;
-(MPQueueFeeder *)queueFeeder;
-(char)hasEntities;
-(id)entityValueProviderAtIndexPath:(id)arg1 ;
-(unsigned)numberOfEntitiesInSection:(unsigned)arg1 ;
-(unsigned)numberOfIndexBarEntries;
-(unsigned)sectionForSectionIndexBarEntryAtIndex:(unsigned)arg1 ;
@end

