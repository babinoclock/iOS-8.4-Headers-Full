/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:36:53 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class EKParticipant, NSString;

@interface EKParticipantForSorting : NSObject {

	EKParticipant* _participant;
	char _isEmail;
	NSString* _firstName;
	NSString* _lastName;
	NSString* _cachedDisplayName;

}
-(id)participant;
-(id)initWithEKParticipant:(id)arg1 ;
-(id)description;
-(int)compare:(id)arg1 ;
-(id)displayName;
-(char)isEmail;
-(id)firstName;
-(id)lastName;
@end

