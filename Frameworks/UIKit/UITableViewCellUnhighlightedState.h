/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:38:59 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class UIColor;

@interface UITableViewCellUnhighlightedState : NSObject {

	char _opaque;
	char _highlighted;
	UIColor* _backgroundColor;

}

@property (assign) char opaque;                            //@synthesize opaque=_opaque - In the implementation block
@property (assign) char highlighted;                       //@synthesize highlighted=_highlighted - In the implementation block
@property (retain) UIColor * backgroundColor;              //@synthesize backgroundColor=_backgroundColor - In the implementation block
-(void)setOpaque:(char)arg1 ;
-(void)dealloc;
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(UIColor *)backgroundColor;
-(void)setHighlighted:(char)arg1 ;
-(char)highlighted;
-(char)opaque;
@end

