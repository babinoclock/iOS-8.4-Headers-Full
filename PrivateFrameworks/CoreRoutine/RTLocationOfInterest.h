/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:40:16 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/CoreRoutine.framework/CoreRoutine
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreRoutine/CoreRoutine-Structs.h>
#import <CoreRoutine/NSCopying.h>
#import <CoreRoutine/NSSecureCoding.h>

@protocol GEOMapItem;
@class NSUUID, NSArray;

@interface RTLocationOfInterest : NSObject <NSCopying, NSSecureCoding> {

	NSUUID* _identifier;
	int _type;
	id<GEOMapItem> _geoMapItem;
	NSArray* _visits;
	double _latitude;
	double _longitude;
	double _uncertainty;
	double _confidence;

}

@property (nonatomic,readonly) double latitude;                        //@synthesize latitude=_latitude - In the implementation block
@property (nonatomic,readonly) double longitude;                       //@synthesize longitude=_longitude - In the implementation block
@property (nonatomic,readonly) double uncertainty;                     //@synthesize uncertainty=_uncertainty - In the implementation block
@property (nonatomic,readonly) double confidence;                      //@synthesize confidence=_confidence - In the implementation block
@property (nonatomic,readonly) NSUUID * identifier;                    //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) int type;                               //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) id<GEOMapItem> geoMapItem;              //@synthesize geoMapItem=_geoMapItem - In the implementation block
@property (nonatomic,readonly) NSArray * visits;                       //@synthesize visits=_visits - In the implementation block
+(char)supportsSecureCoding;
+(id)locationOfInterestTypeToString:(int)arg1 ;
-(id)mapItem;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(id)description;
-(id)name;
-(NSUUID *)identifier;
-(int)type;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)latitude;
-(double)longitude;
-(id)relativeNameToMapItem:(id)arg1 ;
-(id)preciseName;
-(double)uncertainty;
-(id)localizedLastVisitDescription;
-(id)localizedAllVisitsDescription;
-(int)recentCompare:(id)arg1 ;
-(int)frequencyCompare:(id)arg1 ;
-(id)initWithLatitude:(double)arg1 longitude:(double)arg2 uncertainty:(double)arg3 confidence:(double)arg4 identifier:(id)arg5 type:(int)arg6 geoMapItem:(id)arg7 visits:(id)arg8 ;
-(double)confidence;
-(id<GEOMapItem>)geoMapItem;
-(NSArray *)visits;
@end

