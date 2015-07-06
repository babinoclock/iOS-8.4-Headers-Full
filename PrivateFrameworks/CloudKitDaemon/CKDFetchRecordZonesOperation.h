/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:40:02 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudKitDaemon/CKDDatabaseOperation.h>

@class NSArray;

@interface CKDFetchRecordZonesOperation : CKDDatabaseOperation {

	char _isFetchAllRecordZonesOperation;
	char _ignorePCSFailures;
	/*^block*/id _recordZoneFetchedProgressBlock;
	NSArray* _recordZoneIDs;

}

@property (nonatomic,copy) id recordZoneFetchedProgressBlock;                  //@synthesize recordZoneFetchedProgressBlock=_recordZoneFetchedProgressBlock - In the implementation block
@property (nonatomic,retain) NSArray * recordZoneIDs;                          //@synthesize recordZoneIDs=_recordZoneIDs - In the implementation block
@property (assign,nonatomic) char isFetchAllRecordZonesOperation;              //@synthesize isFetchAllRecordZonesOperation=_isFetchAllRecordZonesOperation - In the implementation block
@property (assign,nonatomic) char ignorePCSFailures;                           //@synthesize ignorePCSFailures=_ignorePCSFailures - In the implementation block
-(void)main;
-(id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2 ;
-(void)setRecordZoneFetchedProgressBlock:(id)arg1 ;
-(void)_finishOnCallbackQueueWithError:(id)arg1 ;
-(void)setRecordZoneIDs:(NSArray *)arg1 ;
-(void)setIsFetchAllRecordZonesOperation:(char)arg1 ;
-(void)setIgnorePCSFailures:(char)arg1 ;
-(NSArray *)recordZoneIDs;
-(void)_handleRecordZoneFetch:(id)arg1 zoneID:(id)arg2 responseCode:(id)arg3 ;
-(char)isFetchAllRecordZonesOperation;
-(char)ignorePCSFailures;
-(id)recordZoneFetchedProgressBlock;
@end

