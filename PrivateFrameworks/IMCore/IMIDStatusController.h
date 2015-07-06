/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:09 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSRecursiveLock, NSMutableSet;

@interface IMIDStatusController : NSObject {

	NSRecursiveLock* _servicesLock;
	NSMutableSet* _servicesRegistered;

}

@property (nonatomic,retain) NSMutableSet * _servicesRegistered;              //@synthesize servicesRegistered=_servicesRegistered - In the implementation block
@property (nonatomic,retain) NSRecursiveLock * _servicesLock;                 //@synthesize servicesLock=_servicesLock - In the implementation block
+(id)sharedInstance;
-(void)dealloc;
-(id)init;
-(int)__statusForID:(id)arg1 onService:(id)arg2 isCanonicalized:(char)arg3 ;
-(int)_idStatusForID:(id)arg1 onService:(id)arg2 ;
-(void)_processIDStatusResponseForURI:(id)arg1 resultStatus:(int)arg2 forService:(id)arg3 ;
-(void)_requestStatusForID:(id)arg1 onService:(id)arg2 onAccount:(id)arg3 ;
-(int)_statusForCanonicalizedID:(id)arg1 onService:(id)arg2 ;
-(int)_idStatusForID:(id)arg1 onAccount:(id)arg2 ;
-(void)requestStatusForID:(id)arg1 onService:(id)arg2 ;
-(void)requestStatusForID:(id)arg1 onAccount:(id)arg2 ;
-(int)statusForID:(id)arg1 onService:(id)arg2 ;
-(NSRecursiveLock *)_servicesLock;
-(void)set_servicesLock:(NSRecursiveLock *)arg1 ;
-(NSMutableSet *)_servicesRegistered;
-(void)set_servicesRegistered:(NSMutableSet *)arg1 ;
@end

