/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:39:57 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudKit/CKDatabaseOperationInfo.h>
#import <CloudKitDaemon/NSSecureCoding.h>

@class CKDMescalSession;

@interface CKDMescalSessionOperationInfo : CKDatabaseOperationInfo <NSSecureCoding> {

	int _serverVersion;
	CKDMescalSession* _session;

}

@property (assign,nonatomic) int serverVersion;                       //@synthesize serverVersion=_serverVersion - In the implementation block
@property (nonatomic,retain) CKDMescalSession * session;              //@synthesize session=_session - In the implementation block
-(CKDMescalSession *)session;
-(void)setSession:(CKDMescalSession *)arg1 ;
-(int)serverVersion;
-(void)setServerVersion:(int)arg1 ;
@end
