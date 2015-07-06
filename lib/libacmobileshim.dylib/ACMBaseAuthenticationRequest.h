/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:43:52 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /usr/lib/libacmobileshim.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

@class NSString, NSNumber;


@protocol ACMBaseAuthenticationRequest <NSObject>
@property (retain) NSString * realm; 
@property (retain) NSString * userName; 
@property (retain) NSNumber * appID; 
@property (retain) NSString * appIDKey; 
@property (retain) NSNumber * serverResponseTimeout; 
@required
-(NSString *)userName;
-(void)setUserName:(id)arg1;
-(void)setAppID:(id)arg1;
-(void)setRealm:(id)arg1;
-(NSString *)realm;
-(void)setAppIDKey:(id)arg1;
-(NSNumber *)appID;
-(NSString *)appIDKey;
-(NSNumber *)serverResponseTimeout;
-(void)setServerResponseTimeout:(id)arg1;

@end
