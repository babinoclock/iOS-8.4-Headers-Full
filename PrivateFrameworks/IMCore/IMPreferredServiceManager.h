/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:09 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <IMCore/IDSIDQueryControllerDelegate.h>

@class NSString;

@interface IMPreferredServiceManager : NSObject <IDSIDQueryControllerDelegate>

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)smsEnabled;
+(char)isiMessageAvailable;
+(char)mmsEnabled;
+(char)hasActiveiMessageAccount;
+(id)sharedPreferredServiceManager;
-(void)dealloc;
-(id)init;
-(void)_handleConnectionChanged:(id)arg1 ;
-(void)_handleLoginStatusChange:(id)arg1 ;
-(void)_handleOperationalAccountsChanged:(id)arg1 ;
-(unsigned)__optionsForChat:(id)arg1 ;
-(unsigned)_optionsForRecipients:(id)arg1 inChat:(id)arg2 ;
-(id)_preferredServiceForHandles:(id)arg1 options:(unsigned)arg2 error:(char*)arg3 serverCheckCompletionBlock:(/*^block*/id)arg4 ;
-(unsigned)__preferredServiceTypeForRecipientCount:(int)arg1 options:(unsigned)arg2 error:(char*)arg3 ;
-(unsigned)__preferrediMessageFallbackServiceForRecipientCount:(int)arg1 iMessageAvailable:(char)arg2 options:(unsigned)arg3 error:(char*)arg4 ;
-(id)_preferredServiceForHandles:(id)arg1 inChat:(id)arg2 newComposition:(char)arg3 error:(char*)arg4 serverCheckCompletionBlock:(/*^block*/id)arg5 ;
-(id)preferredServiceForHandles:(id)arg1 inChat:(id)arg2 newComposition:(char)arg3 error:(char*)arg4 serverCheckCompletionBlock:(/*^block*/id)arg5 ;
-(void)notifyOfServiceAvailabilityChange;
-(id)preferredServiceForHandles:(id)arg1 newComposition:(char)arg2 error:(char*)arg3 serverCheckCompletionBlock:(/*^block*/id)arg4 ;
@end

