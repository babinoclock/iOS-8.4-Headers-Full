/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:38:05 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/NSCopying.h>

@class UIFont;

@interface UITextRenderingAttributes : NSObject <NSCopying> {

	UIFont* _font;
	float _minimumFontSize;
	float _actualFontSize;
	float _lineSpacing;
	int _lineBreakMode;
	int _baselineAdjustment;
	float _trackingAdjustment;
	float _minimumTrackingAdjustment;
	float _actualTrackingAdjustment;
	int _alignment;
	char _includeEmoji;
	CGRect _truncationRect;
	char _drawUnderline;

}
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
