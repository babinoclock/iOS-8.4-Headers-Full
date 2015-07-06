/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:36:35 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreData/NSFetchedResultsSectionInfo.h>

@class NSString, NSArray, NSFetchedResultsController;

@interface _NSDefaultSectionInfo : NSObject <NSFetchedResultsSectionInfo> {

	NSFetchedResultsController* _controller;
	NSString* _name;
	NSString* _indexTitle;
	unsigned _sectionOffset;
	unsigned _numberOfObjects;
	unsigned _oldSectionNumber;
	id _sectionObjects;

}

@property (nonatomic,readonly) unsigned sectionOffset;                //@synthesize sectionOffset=_sectionOffset - In the implementation block
@property (nonatomic,readonly) unsigned sectionNumber; 
@property (assign,nonatomic) unsigned oldSectionNumber;               //@synthesize oldSectionNumber=_oldSectionNumber - In the implementation block
@property (nonatomic,readonly) NSString * name;                       //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSString * indexTitle;                 //@synthesize indexTitle=_indexTitle - In the implementation block
@property (nonatomic,readonly) unsigned numberOfObjects;              //@synthesize numberOfObjects=_numberOfObjects - In the implementation block
@property (nonatomic,readonly) NSArray * objects; 
-(void)clearSectionObjectsCache;
-(NSString *)indexTitle;
-(unsigned)numberOfObjects;
-(NSArray *)objects;
-(id)initWithController:(id)arg1 name:(id)arg2 indexTitle:(id)arg3 sectionOffset:(unsigned)arg4 ;
-(void)setNumberOfObjects:(unsigned)arg1 ;
-(void)setSectionOffset:(unsigned)arg1 ;
-(unsigned)sectionNumber;
-(unsigned)oldSectionNumber;
-(void)setOldSectionNumber:(unsigned)arg1 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned)indexOfObject:(id)arg1 ;
-(NSString *)name;
-(unsigned)sectionOffset;
-(void)setController:(id)arg1 ;
@end

