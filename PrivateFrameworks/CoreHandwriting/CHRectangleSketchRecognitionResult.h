/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:40:10 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreHandwriting/CoreHandwriting-Structs.h>
#import <CoreHandwriting/CHSketchRecognitionResult.h>

@interface CHRectangleSketchRecognitionResult : CHSketchRecognitionResult {

	CGPoint _upperLeftPoint;
	CGPoint _upperRightPoint;
	CGPoint _lowerLeftPoint;
	CGPoint _lowerRightPoint;

}

@property (readonly) CGPoint upperLeftPoint;               //@synthesize upperLeftPoint=_upperLeftPoint - In the implementation block
@property (readonly) CGPoint upperRightPoint;              //@synthesize upperRightPoint=_upperRightPoint - In the implementation block
@property (readonly) CGPoint lowerLeftPoint;               //@synthesize lowerLeftPoint=_lowerLeftPoint - In the implementation block
@property (readonly) CGPoint lowerRightPoint;              //@synthesize lowerRightPoint=_lowerRightPoint - In the implementation block
-(id)initWithString:(id)arg1 score:(double)arg2 rotation:(float)arg3 upperLeftPoint:(CGPoint)arg4 upperRightPoint:(CGPoint)arg5 lowerLeftPoint:(CGPoint)arg6 lowerRightPoint:(CGPoint)arg7 ;
-(CGPoint)upperLeftPoint;
-(CGPoint)upperRightPoint;
-(CGPoint)lowerLeftPoint;
-(CGPoint)lowerRightPoint;
@end

