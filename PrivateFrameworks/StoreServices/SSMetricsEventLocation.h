/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:57 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSMutableDictionary, NSDictionary;

@interface SSMetricsEventLocation : NSObject {

	int _position;
	NSString* _type;
	NSMutableDictionary* _values;

}

@property (assign,nonatomic) int locationPosition;                              //@synthesize position=_position - In the implementation block
@property (nonatomic,copy) NSString * locationType;                             //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSDictionary * reportingDictionary; 
-(void)setLocationPosition:(int)arg1 ;
-(void)setLocationType:(NSString *)arg1 ;
-(void)setValue:(id)arg1 forLocationKey:(id)arg2 ;
-(NSDictionary *)reportingDictionary;
-(id)valueForLocationKey:(id)arg1 ;
-(int)locationPosition;
-(NSString *)locationType;
@end

