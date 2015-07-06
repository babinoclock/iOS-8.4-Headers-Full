/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:38:54 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIDocument.h>

@class NSManagedObjectContext, NSPersistentStoreCoordinator, NSManagedObjectModel, NSDictionary, NSString;

@interface UIManagedDocument : UIDocument {

	NSManagedObjectContext* _managedObjectContext;
	NSPersistentStoreCoordinator* _persistentStoreCoordinator;
	NSManagedObjectModel* _managedObjectModel;
	NSDictionary* _documentMetadata;
	struct {
		unsigned shouldWriteAdditionalContent : 1;
		unsigned _reserved : 31;
	}  _mdocFlags;
	NSDictionary* persistentStoreOptions;
	NSString* modelConfiguration;

}

@property (nonatomic,retain,readonly) NSManagedObjectContext * managedObjectContext; 
@property (nonatomic,retain,readonly) NSManagedObjectModel * managedObjectModel; 
@property (nonatomic,copy) NSDictionary * persistentStoreOptions; 
@property (nonatomic,copy) NSString * modelConfiguration; 
+(void)initialize;
+(char)isPersistentStoreSynchronizedViaUbiquitousContentWithOptions:(id)arg1 ;
+(id)persistentStoreName;
+(id)additionalContentPathComponent;
-(void)dealloc;
-(char)readFromURL:(id)arg1 error:(id*)arg2 ;
-(char)writeContents:(id)arg1 toURL:(id)arg2 forSaveOperation:(int)arg3 originalContentsURL:(id)arg4 error:(id*)arg5 ;
-(id)contentsForType:(id)arg1 error:(id*)arg2 ;
-(char)writeContents:(id)arg1 andAttributes:(id)arg2 safelyToURL:(id)arg3 forSaveOperation:(int)arg4 error:(id*)arg5 ;
-(void)revertToContentsOfURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)initWithFileURL:(id)arg1 ;
-(NSManagedObjectModel *)managedObjectModel;
-(char)writeAdditionalContent:(id)arg1 toURL:(id)arg2 originalContentsURL:(id)arg3 error:(id*)arg4 ;
-(id)persistentStoreTypeForFileType:(id)arg1 ;
-(NSDictionary *)persistentStoreOptions;
-(NSString *)modelConfiguration;
-(id)_readMetadataFromDocumentURL:(id)arg1 ;
-(char)_writeMetadataToDocumentURL:(id)arg1 ;
-(void)_handleRelocatingStoreContentDirectoryFromNonSyncedURL:(id)arg1 toSyncedURL:(id)arg2 ;
-(char)configurePersistentStoreCoordinatorForURL:(id)arg1 ofType:(id)arg2 modelConfiguration:(id)arg3 storeOptions:(id)arg4 error:(id*)arg5 ;
-(void)_handleRelocatingStoreContentDirectoryFromSyncedURL:(id)arg1 toNonSyncedURL:(id)arg2 ;
-(NSManagedObjectContext *)managedObjectContext;
-(char)readAdditionalContentFromURL:(id)arg1 error:(id*)arg2 ;
-(id)additionalContentForURL:(id)arg1 error:(id*)arg2 ;
-(void)setPersistentStoreOptions:(NSDictionary *)arg1 ;
-(void)setModelConfiguration:(NSString *)arg1 ;
@end

