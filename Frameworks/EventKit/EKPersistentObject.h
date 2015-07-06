/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:36:48 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <EventKit/EventKit-Structs.h>
@class EKEventStore, NSMutableDictionary, NSMutableSet;

@interface EKPersistentObject : NSObject {

	opaque_pthread_mutex_t _lock;
	EKEventStore* _eventStore;
	id _objectID;
	CFDictionaryRef _loadedProperties;
	NSMutableDictionary* _referencers;
	NSMutableSet* _dirtyProperties;
	unsigned _flags;
	NSMutableDictionary* _committedProperties;

}

@property (nonatomic,readonly) EKEventStore * eventStore; 
@property (nonatomic,readonly) int entityType; 
@property (nonatomic,retain) NSMutableDictionary * committedProperties;              //@synthesize committedProperties=_committedProperties - In the implementation block
+(id)defaultPropertiesToLoad;
+(id)relations;
-(void)primitiveSetStringValue:(id)arg1 forKey:(id)arg2 ;
-(id)primitiveStringValueForKey:(id)arg1 ;
-(id)primitiveURLValueForKey:(id)arg1 ;
-(void)primitiveSetURLValue:(id)arg1 forKey:(id)arg2 ;
-(int)primitiveIntValueForKey:(id)arg1 ;
-(void)primitiveSetIntValue:(int)arg1 forKey:(id)arg2 ;
-(void)primitiveSetRelationValue:(id)arg1 forKey:(id)arg2 ;
-(id)primitiveRelationValueForKey:(id)arg1 ;
-(void)_setEventStore:(id)arg1 ;
-(char)isNew;
-(char)refresh;
-(void)_setPendingInsert:(char)arg1 ;
-(void)_setPendingUpdate:(char)arg1 ;
-(void)_setPendingDelete:(char)arg1 ;
-(EKEventStore *)eventStore;
-(char)_isPendingInsert;
-(void)takeValues:(id)arg1 forProperties:(id)arg2 ;
-(void)_setObjectID:(id)arg1 ;
-(void)takeValuesForDefaultProperties:(id)arg1 inSet:(id)arg2 ;
-(char)_isPendingDelete;
-(char)_isPendingUpdate;
-(char)pushDirtyProperties:(id*)arg1 ;
-(void)saved;
-(void)unloadPropertyForKey:(id)arg1 ;
-(id)dirtyProperties;
-(char)isPropertyDirty:(id)arg1 ;
-(id)committedValueForKey:(id)arg1 ;
-(void)_clearReferences;
-(void)_clearWeakRelations;
-(void)_releaseLoadedProperties;
-(id)_loadedPropertyKeys;
-(id)_relationForKey:(id)arg1 ;
-(void)_setDefaultPropertiesLoaded:(char)arg1 ;
-(char)_shouldRetainPropertyForKey:(id)arg1 ;
-(void)_addReference:(id)arg1 forKey:(id)arg2 ;
-(id)_propertyForKey:(id)arg1 ;
-(void)_removeReference:(id)arg1 forKey:(id)arg2 ;
-(char)_loadRelationForKey:(id)arg1 value:(id*)arg2 ;
-(void)_loadDefaultPropertiesIfNeeded;
-(char)_loadChildIdentifiersForKey:(id)arg1 values:(id*)arg2 ;
-(void)_addDirtyProperty:(id)arg1 ;
-(void)_addObjectCore:(id)arg1 toValues:(id)arg2 relation:(id)arg3 ;
-(void)primitiveValueChangedForKey:(id)arg1 ;
-(void)_removeObjectCore:(id)arg1 fromValues:(id)arg2 relation:(id)arg3 ;
-(id)_primitiveValueForKey:(id)arg1 loader:(/*^block*/id)arg2 ;
-(void)_primitiveSetValue:(id)arg1 forKey:(id)arg2 daemonSetter:(/*^block*/id)arg3 ;
-(id)primitiveNumberValueForKey:(id)arg1 ;
-(id)_loadStringValueForKey:(id)arg1 ;
-(void)_takeValues:(id)arg1 forProperties:(id)arg2 ;
-(void)_fastpathSetProperty:(id)arg1 forKey:(id)arg2 isRelation:(char)arg3 ;
-(char)isPropertyLoaded:(id)arg1 ;
-(void)_takeValuesForDefaultProperties:(id)arg1 inSet:(id)arg2 ;
-(char)_areDefaultPropertiesLoaded;
-(char)existsInStore;
-(char)refreshExcludingProperties:(id)arg1 ;
-(void)primitiveAddRelatedObject:(id)arg1 forKey:(id)arg2 ;
-(void)primitiveRemoveRelatedObject:(id)arg1 forKey:(id)arg2 ;
-(void)primitiveSetNumberValue:(id)arg1 forKey:(id)arg2 ;
-(double)primitiveDoubleValueForKey:(id)arg1 ;
-(void)primitiveSetDoubleValue:(double)arg1 forKey:(id)arg2 ;
-(char)primitiveBoolValueForKey:(id)arg1 ;
-(void)primitiveSetBoolValue:(char)arg1 forKey:(id)arg2 ;
-(id)primitiveDateValueForKey:(id)arg1 ;
-(void)primitiveSetDateValue:(id)arg1 forKey:(id)arg2 ;
-(id)primitiveDataValueForKey:(id)arg1 ;
-(void)primitiveSetDataValue:(id)arg1 forKey:(id)arg2 ;
-(void)faultPropertiesWithNames:(id)arg1 ;
-(NSMutableDictionary *)committedProperties;
-(void)setCommittedProperties:(NSMutableDictionary *)arg1 ;
-(int)entityType;
-(id)dump;
-(void)dealloc;
-(id)init;
-(char)isEqual:(id)arg1 ;
-(void)reset;
-(id)initCommon;
-(char)validate:(id*)arg1 ;
-(void)_setProperty:(id)arg1 forKey:(id)arg2 ;
-(id)objectID;
-(void)rollback;
-(char)isDirty;
-(void)changed;
@end

