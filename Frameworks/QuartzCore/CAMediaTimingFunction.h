/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:37:54 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QuartzCore/QuartzCore-Structs.h>
#import <QuartzCore/NSCoding.h>

@interface CAMediaTimingFunction : NSObject <NSCoding> {

	CAMediaTimingFunctionPrivate* _priv;

}
+(id)sigmoidFunction;
+(id)_kbTimingFunction;
+(id)uiFunctionWithControlPoints:(const CGPoint*)arg1 ;
+(void)CAMLParserEndElement:(id)arg1 content:(id)arg2 ;
+(id)functionWithControlPoints:(float)arg1 :(float)arg2 :(float)arg3 :(float)arg4 ;
+(id)functionWithName:(id)arg1 ;
-(id)initWithControlPoints:(float)arg1 :(float)arg2 :(float)arg3 :(float)arg4 ;
-(void)encodeWithCAMLWriter:(id)arg1 ;
-(void)_getPoints:(double*)arg1 ;
-(id)CAMLType;
-(void)getControlPointAtIndex:(unsigned long)arg1 values:(float)arg2 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(float)_solveForInput:(float)arg1 ;
@end

