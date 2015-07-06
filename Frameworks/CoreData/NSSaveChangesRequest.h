/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:36:34 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreData/NSPersistentStoreRequest.h>

@class NSSet;

@interface NSSaveChangesRequest : NSPersistentStoreRequest {

	NSSet* _insertedObjects;
	NSSet* _updatedObjects;
	NSSet* _deletedObjects;
	NSSet* _optimisticallyLockedObjects;
	unsigned long _flags;
	void* _reserved1;

}

@property (readonly) NSSet * insertedObjects; 
@property (readonly) NSSet * updatedObjects; 
@property (readonly) NSSet * deletedObjects; 
@property (readonly) NSSet * lockedObjects; 
+(void)initialize;
-(id)initWithInsertedObjects:(id)arg1 updatedObjects:(id)arg2 deletedObjects:(id)arg3 lockedObjects:(id)arg4 ;
-(int)_retryHandlerCount;
-(void)_setRetryHandlerCount:(int)arg1 ;
-(NSSet *)lockedObjects;
-(void)setDeletedObjects:(NSSet *)arg1 ;
-(void)dealloc;
-(id)init;
-(id)description;
-(char)hasChanges;
-(NSSet *)insertedObjects;
-(NSSet *)updatedObjects;
-(NSSet *)deletedObjects;
-(unsigned)requestType;
@end

