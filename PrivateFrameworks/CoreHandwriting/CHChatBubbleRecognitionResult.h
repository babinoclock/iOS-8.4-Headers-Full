/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:40:10 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreHandwriting/CoreHandwriting-Structs.h>
#import <CoreHandwriting/CHEllipseRecognitionResult.h>

@interface CHChatBubbleRecognitionResult : CHEllipseRecognitionResult {

	float _stemWidth;
	CGPoint _stemLocation;

}

@property (readonly) CGPoint stemLocation;              //@synthesize stemLocation=_stemLocation - In the implementation block
@property (readonly) float stemWidth;                   //@synthesize stemWidth=_stemWidth - In the implementation block
-(id)initWithString:(id)arg1 score:(double)arg2 rotation:(float)arg3 center:(CGPoint)arg4 size:(CGSize)arg5 stemLocation:(CGPoint)arg6 stemWidth:(float)arg7 ;
-(CGPoint)stemLocation;
-(float)stemWidth;
@end

