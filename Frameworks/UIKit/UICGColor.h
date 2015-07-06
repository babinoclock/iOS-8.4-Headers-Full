/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:38:38 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIColor.h>

@interface UICGColor : UIColor {

	CGColorRef cachedColor;

}
-(void)dealloc;
-(CGColorRef)CGColor;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)colorWithAlphaComponent:(float)arg1 ;
-(char)getWhite:(float*)arg1 alpha:(float*)arg2 ;
-(void)set;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)getRed:(float*)arg1 green:(float*)arg2 blue:(float*)arg3 alpha:(float*)arg4 ;
-(void)setFill;
-(float)alphaComponent;
-(void)setStroke;
-(id)initWithCGColor:(CGColorRef)arg1 ;
-(id)colorSpaceName;
-(char)isPatternColor;
@end

