/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:04 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PhotoLibraryServices/PLManagedObject.h>

@class NSString, NSSet;

@interface PLPerson : PLManagedObject

@property (nonatomic,retain) NSString * personUUID; 
@property (nonatomic,retain) NSString * fullName; 
@property (nonatomic,retain) NSSet * personReferences; 
+(id)entityName;
+(id)entityInManagedObjectContext:(id)arg1 ;
+(id)personWithUUID:(id)arg1 inManagedObjectContext:(id)arg2 ;
+(id)insertIntoPhotoLibrary:(id)arg1 withPersonUUID:(id)arg2 fullName:(id)arg3 ;
+(id)allPersonsInManagedObjectContext:(id)arg1 ;
-(void)willSave;
@end

