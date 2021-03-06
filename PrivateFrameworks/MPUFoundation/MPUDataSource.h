/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:15 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MPUFoundation/MPUFoundation-Structs.h>
#import <MPUFoundation/NSCoding.h>

@class NSArray, NSString;

@interface MPUDataSource : NSObject <NSCoding> {

	int _invalidationIgnoreCount;
	int _numberOfIgnoredInvalidations;
	int _entityType;

}

@property (nonatomic,readonly) int entityType;                                     //@synthesize entityType=_entityType - In the implementation block
@property (nonatomic,readonly) char isEmpty; 
@property (nonatomic,readonly) unsigned count; 
@property (nonatomic,readonly) char usesSections; 
@property (nonatomic,readonly) char showsIndexBar; 
@property (nonatomic,readonly) unsigned numberOfSections; 
@property (nonatomic,readonly) NSArray * localizedSectionIndexTitles; 
@property (nonatomic,readonly) char showsEntityCountFooter; 
@property (nonatomic,readonly) NSString * entityCountFormat; 
+(Class)invalidationContextClass;
-(id)initWithEntityType:(int)arg1 ;
-(int)entityType;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned)count;
-(unsigned)numberOfSections;
-(void)invalidate;
-(char)isEmpty;
-(id)entityAtIndex:(unsigned)arg1 ;
-(id)playbackContextForIndex:(unsigned)arg1 ;
-(char)showsIndexBar;
-(char)usesSections;
-(id)sectionEntityAtIndex:(unsigned)arg1 ;
-(id)sectionEntities;
-(void)_invalidateCalculatedEntities;
-(id)localizedSectionTitleAtIndex:(unsigned)arg1 ;
-(NSRange)rangeOfSectionAtIndex:(unsigned)arg1 ;
-(unsigned)_globalIndexForIndexPath:(id)arg1 ;
-(unsigned)indexOfSectionForSectionTitleAtIndex:(unsigned)arg1 ;
-(id)_indexPathForGlobalIndex:(unsigned)arg1 ;
-(char)isIgnoringInvalidation;
-(void)invalidateWithContext:(id)arg1 ;
-(char)canEditEntityAtIndex:(unsigned)arg1 ;
-(void)deleteEntityAtIndex:(unsigned)arg1 ;
-(char)showsEntityCountFooter;
-(id)anyEntity;
-(void)deleteEntityAtIndexPath:(id)arg1 ;
-(id)entityAtIndexPath:(id)arg1 ;
-(NSString *)entityCountFormat;
-(unsigned)indexOfEntity:(id)arg1 ;
-(void)preloadEntities;
-(void)preloadSectionEntities;
-(unsigned)indexOfSectionEntity:(id)arg1 ;
-(char)canSelectEntityAtIndex:(unsigned)arg1 ;
-(char)canEditEntityAtIndexPath:(id)arg1 ;
-(int)editingTypeForEntityAtIndexPath:(id)arg1 ;
-(void)_didInvalidateWithContext:(id)arg1 ;
-(void)_willInvalidateWithContext:(id)arg1 ;
-(NSArray *)localizedSectionIndexTitles;
-(id)entities;
-(int)editingTypeForEntityAtIndex:(unsigned)arg1 ;
-(char)entityIsNowPlayingAtIndex:(unsigned)arg1 ;
-(void)beginIgnoringInvalidation;
-(void)endIgnoringInvalidation;
@end

