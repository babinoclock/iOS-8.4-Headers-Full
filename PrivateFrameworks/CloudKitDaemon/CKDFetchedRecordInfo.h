/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:39:57 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class CKRecord, NSError;

@interface CKDFetchedRecordInfo : NSObject {

	CKRecord* _record;
	NSError* _error;

}

@property (nonatomic,retain) CKRecord * record;              //@synthesize record=_record - In the implementation block
@property (nonatomic,retain) NSError * error;                //@synthesize error=_error - In the implementation block
+(id)infoWithRecord:(id)arg1 error:(id)arg2 ;
+(id)infoWithRecord:(id)arg1 ;
-(NSError *)error;
-(CKRecord *)record;
-(void)setRecord:(CKRecord *)arg1 ;
-(void)setError:(NSError *)arg1 ;
@end

