/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:35 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/SportsWorkout.framework/SportsWorkout
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol SWPINStatusConnectionDelegate
@required
-(void)connection:(id)arg1 didConfirmEmail:(id)arg2 screenName:(id)arg3;
-(void)connection:(id)arg1 didReplaceOldPINWithNewPIN:(id)arg2;
-(void)connectionDidReturnStatusUnconfirmed:(id)arg1;
-(void)connectionDidReturnStatusInvalid:(id)arg1;

@end

