/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:43:24 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/YouTube.framework/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <YouTube/YouTube-Structs.h>
#import <YouTube/NSURLConnectionDelegate.h>

@class NSURLConnection, NSMutableData, NSString, NSData;

@interface YTDeviceAuthenticator : NSObject <NSURLConnectionDelegate> {

	NSURLConnection* _connection;
	NSMutableData* _responseData;
	NSString* _token;
	double _timeTokenGranted;
	int _phase;
	NSData* _r1;
	NSData* _r1Hash;
	NSData* _r2;
	NSData* _hmac;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedAuthenticator;
-(void)connection:(id)arg1 didFailWithError:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveData:(id)arg2 ;
-(void)connectionDidFinishLoading:(id)arg1 ;
-(id)token;
-(char)isAuthenticating;
-(void)authenticate;
-(void)_copyCertificateData:(id*)arg1 privateKey:(_SecKey*)arg2 ;
-(void)_loadStatusChanged;
-(void)_clearNonces;
-(char)_authenticate1;
-(char)canAuthenticate;
-(void)_failWithErrorCode:(int)arg1 ;
-(void)_connectionDidEnd;
-(char)_authenticate2;
-(void)_succeeded;
-(void)invalidateToken;
@end
