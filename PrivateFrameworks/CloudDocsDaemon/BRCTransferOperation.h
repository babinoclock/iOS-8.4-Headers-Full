/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:39:55 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudDocsDaemon/_BRCOperation.h>
#import <CloudDocsDaemon/BRCOperationSubclass.h>

@protocol OS_dispatch_group;
@class NSMutableDictionary, NSObject, NSString;

@interface BRCTransferOperation : _BRCOperation <BRCOperationSubclass> {

	NSMutableDictionary* _entriesByRecordID;
	NSMutableDictionary* _entriesBySecondaryRecordID;
	NSMutableDictionary* _entriesByTransferID;
	unsigned long long _totalSize;
	unsigned long long _doneSize;
	/*^block*/id _progressed;
	NSObject*<OS_dispatch_group> _pendingGroup;

}

@property (assign) unsigned long long totalSize;                                       //@synthesize totalSize=_totalSize - In the implementation block
@property (assign) unsigned long long doneSize;                                        //@synthesize doneSize=_doneSize - In the implementation block
@property (readonly) unsigned itemsCount; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_group> pendingGroup;              //@synthesize pendingGroup=_pendingGroup - In the implementation block
@property (copy) id progressed;                                                        //@synthesize progressed=_progressed - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_description;
-(void)main;
-(unsigned)itemsCount;
-(id)initWithName:(id)arg1 syncContext:(id)arg2 group:(id)arg3 ;
-(void)finishWithResult:(id)arg1 error:(id)arg2 ;
-(char)shouldRetryForError:(id)arg1 ;
-(id)initWithName:(id)arg1 syncContext:(id)arg2 ;
-(unsigned long long)totalSize;
-(unsigned long long)doneSize;
-(void)setDoneSize:(unsigned long long)arg1 ;
-(void)_addEntry:(id)arg1 ;
-(NSObject*<OS_dispatch_group>)pendingGroup;
-(void)_progressForRecordID:(id)arg1 progress:(double)arg2 ;
-(void)_doneWithRecord:(id)arg1 recordID:(id)arg2 error:(id)arg3 ;
-(void)__doneWithEntry:(id)arg1 error:(id)arg2 ;
-(void)__main:(id)arg1 ;
-(id)fetchOperationForEntries:(id)arg1 code:(int)arg2 ;
-(void)_doneWithEntry:(id)arg1 error:(id)arg2 ;
-(void)_cancelTransferID:(id)arg1 ;
-(void)_progressForEntry:(id)arg1 progress:(double)arg2 ;
-(void)cancelTransferID:(id)arg1 ;
-(void)addAliasItem:(id)arg1 toTransferWithID:(id)arg2 ;
-(double)progressForTransferID:(id)arg1 ;
-(void)setTotalSize:(unsigned long long)arg1 ;
-(id)progressed;
-(void)setProgressed:(id)arg1 ;
@end
