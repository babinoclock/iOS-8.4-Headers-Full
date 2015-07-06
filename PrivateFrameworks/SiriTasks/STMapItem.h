/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:32 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/SiriTasks.framework/SiriTasks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AssistantServices/AFSiriModelObject.h>

@class NSString, CLLocation, NSData, NSNumber;

@interface STMapItem : AFSiriModelObject {

	NSString* _title;
	CLLocation* _location;
	NSData* _placeData;
	char _isCurrentLocation;
	NSNumber* _businessID;
	NSNumber* _localSearchProviderID;

}
+(char)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)_aceContextObjectValue;
-(Class)_aceCollectionClass;
-(id)initWithMKMapItem:(id)arg1 ;
@end

