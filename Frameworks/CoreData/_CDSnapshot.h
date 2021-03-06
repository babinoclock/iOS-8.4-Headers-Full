/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:36:35 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreData/CoreData-Structs.h>
#import <CoreData/NSCopying.h>
#import <CoreData/NSMutableCopying.h>

@class NSManagedObjectID, NSEntityDescription;

@interface _CDSnapshot : NSObject <NSCopying, NSMutableCopying> {

	int _cd_rc;
	int _cd_version;
	NSManagedObjectID* _cd_objectID;
	struct {
		unsigned _readOnly : 1;
		unsigned _reservedFlags : 31;
	}  _cd_flags;
	unsigned _cd_nullFlags_;

}

@property (nonatomic,readonly) NSEntityDescription * entity; 
@property (nonatomic,readonly) NSManagedObjectID * objectID; 
+(void)_entityDeallocated;
+(Class)classForEntity:(id)arg1 ;
+(unsigned)newBatchAllocation:(id*)arg1 count:(unsigned)arg2 withOwnedObjectIDs:(id*)arg3 ;
+(void)initialize;
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)alloc;
-(id)_snapshot_;
-(id)_descriptionValues;
-(id)retain;
-(id)valueForKey:(id)arg1 ;
-(void)setValue:(id)arg1 forKey:(id)arg2 ;
-(void)dealloc;
-(id)copy;
-(char)isEqual:(id)arg1 ;
-(unsigned)retainCount;
-(unsigned)hash;
-(id)description;
-(id)mutableCopy;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)_tryRetain;
-(char)_isDeallocating;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(NSManagedObjectID *)objectID;
-(NSEntityDescription *)entity;
-(id)initWithObjectID:(id)arg1 ;
-(oneway void)release;
-(void)finalize;
@end

