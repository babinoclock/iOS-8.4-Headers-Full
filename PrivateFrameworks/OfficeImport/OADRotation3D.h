/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:36 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/NSCopying.h>

@interface OADRotation3D : NSObject <NSCopying> {

	float mLatitude;
	float mLongitude;
	float mRevolution;

}
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(float)latitude;
-(float)longitude;
-(id)initWithLatitude:(float)arg1 longitude:(float)arg2 revolution:(float)arg3 ;
-(float)revolution;
@end
