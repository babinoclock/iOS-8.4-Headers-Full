/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:40:20 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <DataAccess/DataAccess-Structs.h>
@class NSString, NoteContext;

@interface DALocalDBHelper : NSObject {

	void* _abDB;
	int _abConnectionCount;
	CalDatabaseRef _calDB;
	int _calConnectionCount;
	NSString* _clientIdentifier;
	void* _bookmarkDB;
	int _bookmarkConnectionCount;
	NoteContext* _noteDB;
	int _noteConnectionCount;
	/*^block*/id _calUnitTestCallbackBlock;

}

@property (assign,nonatomic) void* abDB;                               //@synthesize abDB=_abDB - In the implementation block
@property (assign,nonatomic) int abConnectionCount;                    //@synthesize abConnectionCount=_abConnectionCount - In the implementation block
@property (assign,nonatomic) CalDatabaseRef calDB;                     //@synthesize calDB=_calDB - In the implementation block
@property (assign,nonatomic) int calConnectionCount;                   //@synthesize calConnectionCount=_calConnectionCount - In the implementation block
@property (nonatomic,retain) NSString * clientIdentifier;              //@synthesize clientIdentifier=_clientIdentifier - In the implementation block
@property (assign,nonatomic) void* bookmarkDB;                         //@synthesize bookmarkDB=_bookmarkDB - In the implementation block
@property (assign,nonatomic) int bookmarkConnectionCount;              //@synthesize bookmarkConnectionCount=_bookmarkConnectionCount - In the implementation block
@property (nonatomic,retain) NoteContext * noteDB;                     //@synthesize noteDB=_noteDB - In the implementation block
@property (assign,nonatomic) int noteConnectionCount;                  //@synthesize noteConnectionCount=_noteConnectionCount - In the implementation block
@property (nonatomic,copy) id calUnitTestCallbackBlock;                //@synthesize calUnitTestCallbackBlock=_calUnitTestCallbackBlock - In the implementation block
+(void)abSetTestABDBDir:(id)arg1 ;
+(id)abTestABDBDir;
+(void)calSetTestCalDBDir:(id)arg1 ;
+(id)calTestCalDBDir;
+(id)sharedInstanceForAccountType:(id)arg1 creatingClass:(Class)arg2 ;
-(NSString *)clientIdentifier;
-(void)setClientIdentifier:(NSString *)arg1 ;
-(void)abOpenDB;
-(char)abCloseDBAndSave:(char)arg1 ;
-(void*)abDBThrowOnNil:(char)arg1 ;
-(void)_registerForAddressBookYieldNotifications;
-(void)_registerForCalendarYieldNotifications;
-(char)_calOpenDBWithClientIdentifier:(id)arg1 ;
-(id)calUnitTestCallbackBlock;
-(char)noteSaveDB;
-(void)setCalUnitTestCallbackBlock:(id)arg1 ;
-(void)abProcessAddedRecords;
-(void)abProcessAddedImages;
-(id)abConstraintPlistPath;
-(void)calOpenDBAsGenericClient;
-(void)calClearSuperfluousChanges;
-(char)calSaveDBAndFlushCaches;
-(int)calConnectionCount;
-(void*)bookmarkDB;
-(char)bookmarkOpenDB;
-(void)bookmarkSaveDB;
-(void)bookmarkCloseDBAndSave:(char)arg1 ;
-(void)noteOpenDB;
-(char)noteCloseDBAndSave:(char)arg1 ;
-(int)noteConnectionCount;
-(void)calUnitTestsSetCallbackBlockForSave:(/*^block*/id)arg1 ;
-(void)setAbDB:(void*)arg1 ;
-(int)abConnectionCount;
-(void)setAbConnectionCount:(int)arg1 ;
-(void)setCalDB:(CalDatabaseRef)arg1 ;
-(void)setCalConnectionCount:(int)arg1 ;
-(void)setBookmarkDB:(void*)arg1 ;
-(int)bookmarkConnectionCount;
-(void)setBookmarkConnectionCount:(int)arg1 ;
-(void)setNoteDB:(NoteContext *)arg1 ;
-(void)setNoteConnectionCount:(int)arg1 ;
-(CalDatabaseRef)calDB;
-(id)changeTrackingID;
-(void)calOpenDBWithClientIdentifier:(id)arg1 ;
-(char)calCloseDBAndSave:(char)arg1 ;
-(void*)abDB;
-(char)abSaveDB;
-(char)calSaveDB;
-(NoteContext *)noteDB;
@end

