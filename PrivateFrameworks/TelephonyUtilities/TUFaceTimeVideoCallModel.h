/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:43:01 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <TelephonyUtilities/TUCallModel.h>

@interface TUFaceTimeVideoCallModel : TUCallModel
+(id)sharedInstance;
-(char)isSwappable;
-(char)isMergeable;
-(char)isHoldAllowed;
-(char)isAddCallAllowed;
-(int)ambiguityState;
-(char)isTakingCallsPrivateAllowed;
-(char)isHardPauseAvailable;
-(char)isEndAndAnswerAllowed;
-(char)isHoldAndAnswerAllowed;
-(char)isSendToVoicemailAllowed;
@end

