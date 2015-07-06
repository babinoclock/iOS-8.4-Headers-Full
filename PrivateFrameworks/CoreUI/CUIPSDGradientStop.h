/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:40:18 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreUI/CoreUI-Structs.h>
#import <CoreUI/NSCoding.h>
#import <CoreUI/NSCopying.h>

@interface CUIPSDGradientStop : NSObject <NSCoding, NSCopying> {

	float location;

}
+(void)initialize;
-(id)initWithLocation:(float)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(float)location;
-(char)isColorStop;
-(char)isOpacityStop;
-(char)isDoubleStop;
-(void)setLocation:(float)arg1 ;
@end

