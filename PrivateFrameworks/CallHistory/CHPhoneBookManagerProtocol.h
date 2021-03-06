/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:39:36 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/CallHistory.framework/CallHistory
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol CHPhoneBookManagerProtocol <NSObject>
@required
-(void)releaseCachedRecord;
-(id)getRecordId:(id)arg1 andISOCountryCode:(id)arg2 isEmail:(char)arg3;
-(id)getCallerIdPropertyMultiValueId:(id)arg1 andISOCountryCode:(id)arg2 isEmail:(char)arg3;
-(const void*)getABRecordRef;
-(void)setABRecordId:(id)arg1;
-(void)setABRecordRef:(const void*)arg1;
-(void)setABRecordMultiValueId:(id)arg1;
-(char)isABContactASuggestion;
-(id)getPersonsNameForRecordId:(id)arg1;
-(id)getLocalizedCallerIdLabelForRecordId:(id)arg1;

@end

