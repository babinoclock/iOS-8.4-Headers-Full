/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:39:59 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudKitDaemon/CKDURLRequest.h>

@class NSData;

@interface CKDMescalCertURLRequest : CKDURLRequest {

	NSData* _mescalCert;

}

@property (nonatomic,retain) NSData * mescalCert;              //@synthesize mescalCert=_mescalCert - In the implementation block
-(id)url;
-(char)requiresDeviceID;
-(char)requiresSignature;
-(char)allowsAnonymousAccount;
-(int)serverType;
-(int)partitionType;
-(char)hasRequestBody;
-(NSData *)mescalCert;
-(id)httpMethod;
-(void)requestDidParsePlaintextObject:(id)arg1 ;
-(void)setMescalCert:(NSData *)arg1 ;
@end

