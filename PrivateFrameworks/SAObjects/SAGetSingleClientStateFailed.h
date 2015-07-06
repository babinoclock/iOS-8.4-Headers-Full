/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:27 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SABaseCommand.h>
#import <SAObjects/SAServerBoundCommand.h>

@class NSString, SAAceClientState;

@interface SAGetSingleClientStateFailed : SABaseCommand <SAServerBoundCommand>

@property (assign,nonatomic) int errorCode; 
@property (nonatomic,copy) NSString * reason; 
@property (nonatomic,retain) SAAceClientState * attemptedClientState; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * aceId; 
@property (nonatomic,copy) NSString * refId; 
+(id)getSingleClientStateFailed;
+(id)getSingleClientStateFailedWithDictionary:(id)arg1 context:(id)arg2 ;
+(id)getSingleClientStateFailedWithErrorCode:(int)arg1 ;
+(id)getSingleClientStateFailedWithReason:(id)arg1 ;
-(id)groupIdentifier;
-(NSString *)reason;
-(id)initWithReason:(id)arg1 ;
-(void)setErrorCode:(int)arg1 ;
-(int)errorCode;
-(void)setReason:(NSString *)arg1 ;
-(id)encodedClassName;
-(id)initWithErrorCode:(int)arg1 ;
-(SAAceClientState *)attemptedClientState;
-(void)setAttemptedClientState:(SAAceClientState *)arg1 ;
@end

