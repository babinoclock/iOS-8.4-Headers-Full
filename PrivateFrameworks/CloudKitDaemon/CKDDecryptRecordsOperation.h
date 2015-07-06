/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:40:02 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <CloudKitDaemon/CKDDatabaseOperation.h>

@protocol OS_dispatch_group;
@class NSArray, NSObject, NSDictionary;

@interface CKDDecryptRecordsOperation : CKDDatabaseOperation {

	char _forcePCSDecrypt;
	/*^block*/id _recordDecryptedBlock;
	NSArray* _recordsToDecrypt;
	NSObject*<OS_dispatch_group> _recordDecryptGroup;
	NSDictionary* _webSharingIdentityDataByRecordID;

}

@property (assign,nonatomic) char forcePCSDecrypt;                                         //@synthesize forcePCSDecrypt=_forcePCSDecrypt - In the implementation block
@property (nonatomic,copy) id recordDecryptedBlock;                                        //@synthesize recordDecryptedBlock=_recordDecryptedBlock - In the implementation block
@property (nonatomic,retain) NSArray * recordsToDecrypt;                                   //@synthesize recordsToDecrypt=_recordsToDecrypt - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_group> recordDecryptGroup;              //@synthesize recordDecryptGroup=_recordDecryptGroup - In the implementation block
@property (nonatomic,retain) NSDictionary * webSharingIdentityDataByRecordID;              //@synthesize webSharingIdentityDataByRecordID=_webSharingIdentityDataByRecordID - In the implementation block
-(void)main;
-(id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2 ;
-(char)operationShouldBeFlowControlled;
-(char)shouldCheckAppVersion;
-(void)_finishOnCallbackQueueWithError:(id)arg1 ;
-(void)setForcePCSDecrypt:(char)arg1 ;
-(NSDictionary *)webSharingIdentityDataByRecordID;
-(void)setRecordsToDecrypt:(NSArray *)arg1 ;
-(void)setWebSharingIdentityDataByRecordID:(NSDictionary *)arg1 ;
-(char)forcePCSDecrypt;
-(void)setRecordDecryptedBlock:(id)arg1 ;
-(NSArray *)recordsToDecrypt;
-(void)setRecordDecryptGroup:(NSObject*<OS_dispatch_group>)arg1 ;
-(id)recordDecryptedBlock;
-(NSObject*<OS_dispatch_group>)recordDecryptGroup;
-(void)_decryptRecord:(id)arg1 ;
-(void)_handleProtectionDataForRecord:(id)arg1 ;
-(id)_unwrapEncryptedPropertiesOnRecord:(id)arg1 withPCS:(OpaquePCSShareProtectionRef)arg2 ;
-(void)_recordWasDecrypted:(id)arg1 withError:(id)arg2 ;
-(void)_decryptRecord:(id)arg1 usingWebSharingIdentityData:(id)arg2 ;
-(void)_handleZoneProtectionDataForRecord:(id)arg1 ;
-(void)_handleShareProtectionDataForRecord:(id)arg1 ;
-(id)_unwrapAssetKey:(id)arg1 withPCS:(OpaquePCSShareProtectionRef)arg2 ;
-(id)_unwrapEncryptedData:(id)arg1 withPCS:(OpaquePCSShareProtectionRef)arg2 forField:(id)arg3 ;
-(id)_unwrapPackageAssets:(id)arg1 withPCS:(OpaquePCSShareProtectionRef)arg2 ;
@end

