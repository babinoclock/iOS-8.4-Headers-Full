/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:36:33 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreData/CoreData-Structs.h>
#import <CoreData/NSPropertyDescription.h>

@class NSFetchRequest, NSString;

@interface NSFetchedPropertyDescription : NSPropertyDescription {

	void* _reserved5;
	void* _reserved6;
	NSFetchRequest* _fetchRequest;
	NSString* _lazyFetchRequestEntityName;

}

@property (retain) NSFetchRequest * fetchRequest; 
-(unsigned)_propertyType;
-(void)_createCachesAndOptimizeState;
-(void)_writeIntoData:(id)arg1 propertiesDict:(id)arg2 uniquedPropertyNames:(id)arg3 uniquedStrings:(id)arg4 uniquedData:(id)arg5 entitiesSlots:(id)arg6 fetchRequests:(id)arg7 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isTransient;
-(char)isReadOnly;
-(void)setFetchRequest:(NSFetchRequest *)arg1 ;
-(NSFetchRequest *)fetchRequest;
@end

