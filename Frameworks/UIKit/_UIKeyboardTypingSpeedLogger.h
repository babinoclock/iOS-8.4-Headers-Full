/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:38:59 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface _UIKeyboardTypingSpeedLogger : NSObject {

	int _typingDelaySamples[7];
	int _typingDelaySampleCount;

}
-(id)init;
-(void)logToAggregate;
-(void)recordTypingDelay:(double)arg1 ;
@end

