/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:36:53 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class EKStructuredLocation, NSDictionary;

@interface EKReminderLocationItem : NSObject {

	char _isLocationBeingDetermined;
	EKStructuredLocation* _location;
	NSDictionary* _addressDictionary;
	int _type;

}

@property (nonatomic,retain) EKStructuredLocation * location;               //@synthesize location=_location - In the implementation block
@property (nonatomic,retain) NSDictionary * addressDictionary;              //@synthesize addressDictionary=_addressDictionary - In the implementation block
@property (assign,nonatomic) char isLocationBeingDetermined;                //@synthesize isLocationBeingDetermined=_isLocationBeingDetermined - In the implementation block
@property (assign,nonatomic) int type;                                      //@synthesize type=_type - In the implementation block
-(id)stringForSubtitle;
-(char)isLocationBeingDetermined;
-(void)setIsLocationBeingDetermined:(char)arg1 ;
-(void)setAddressDictionary:(NSDictionary *)arg1 ;
-(id)description;
-(void)setType:(int)arg1 ;
-(int)type;
-(void)reset;
-(id)label;
-(EKStructuredLocation *)location;
-(NSDictionary *)addressDictionary;
-(void)setLocation:(EKStructuredLocation *)arg1 ;
@end

