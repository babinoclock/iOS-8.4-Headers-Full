/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:40:02 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudKit/CKDatabaseOperationInfo.h>

@class NSArray, NSDictionary;

@interface CKDDecryptRecordsOperationInfo : CKDatabaseOperationInfo {

	NSArray* _recordsToDecrypt;
	NSDictionary* _webSharingIdentityDataByRecordID;

}

@property (nonatomic,retain) NSArray * recordsToDecrypt;                                   //@synthesize recordsToDecrypt=_recordsToDecrypt - In the implementation block
@property (nonatomic,retain) NSDictionary * webSharingIdentityDataByRecordID;              //@synthesize webSharingIdentityDataByRecordID=_webSharingIdentityDataByRecordID - In the implementation block
-(NSDictionary *)webSharingIdentityDataByRecordID;
-(void)setRecordsToDecrypt:(NSArray *)arg1 ;
-(void)setWebSharingIdentityDataByRecordID:(NSDictionary *)arg1 ;
-(NSArray *)recordsToDecrypt;
@end

