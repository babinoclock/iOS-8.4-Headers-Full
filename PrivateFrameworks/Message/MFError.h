/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:25 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/NSError.h>

@class NSMutableDictionary;

@interface MFError : NSError {

	NSMutableDictionary* _moreUserInfo;

}
+(id)errorWithDomain:(id)arg1 code:(int)arg2 localizedDescription:(id)arg3 ;
+(id)errorWithDomain:(id)arg1 code:(int)arg2 localizedDescription:(id)arg3 title:(id)arg4 userInfo:(id)arg5 ;
+(id)errorWithException:(id)arg1 ;
-(void)dealloc;
-(id)userInfo;
-(id)localizedDescription;
-(id)recoveryAttempter;
-(void)setUserInfoObject:(id)arg1 forKey:(id)arg2 ;
-(void)setLocalizedDescription:(id)arg1 ;
-(void)setMoreInfo:(id)arg1 ;
-(id)mf_shortDescription;
-(id)mf_moreInfo;
-(void)useGenericDescription:(id)arg1 ;
-(void)setShortDescription:(id)arg1 ;
@end

