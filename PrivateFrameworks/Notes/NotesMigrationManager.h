/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:32 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/Notes.framework/Notes
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface NotesMigrationManager : NSObject
-(char)migrateNotesStoreAtURL:(id)arg1 storeType:(id)arg2 managedObjectModel:(id)arg3 options:(id)arg4 error:(id*)arg5 ;
-(char)areStoreMetadata:(id)arg1 matchingEntityVersionsInModel:(id)arg2 ;
-(char)migrateNotesStoreAtURL:(id)arg1 storeType:(id)arg2 options:(id)arg3 sourceModel:(id)arg4 destinationModel:(id)arg5 mappingModel:(id)arg6 error:(id*)arg7 ;
@end

