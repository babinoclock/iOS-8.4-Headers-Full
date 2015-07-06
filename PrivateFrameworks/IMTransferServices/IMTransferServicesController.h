/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:11 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/IMTransferServices.framework/IMTransferServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface IMTransferServicesController : NSObject
+(id)sharedInstance;
-(void)sendFilePath:(id)arg1 topic:(id)arg2 transferID:(id)arg3 encryptFile:(char)arg4 progressBlock:(/*^block*/id)arg5 completionBlock:(/*^block*/id)arg6 ;
-(void)receiveFileTransfer:(id)arg1 topic:(id)arg2 path:(id)arg3 requestURLString:(id)arg4 ownerID:(id)arg5 signature:(id)arg6 decryptionKey:(id)arg7 fileSize:(unsigned long long)arg8 progressBlock:(/*^block*/id)arg9 completionBlock:(/*^block*/id)arg10 ;
-(void)_sendFilePath:(id)arg1 topic:(id)arg2 transferID:(id)arg3 encryptFile:(char)arg4 retries:(int)arg5 progressBlock:(/*^block*/id)arg6 completionBlock:(/*^block*/id)arg7 ;
-(void)_receiveFileTransfer:(id)arg1 topic:(id)arg2 path:(id)arg3 requestURLString:(id)arg4 ownerID:(id)arg5 signature:(id)arg6 decryptionKey:(id)arg7 retries:(int)arg8 fileSize:(unsigned long long)arg9 progressBlock:(/*^block*/id)arg10 completionBlock:(/*^block*/id)arg11 ;
@end

