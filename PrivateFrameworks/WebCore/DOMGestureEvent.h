/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:43:17 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <WebCore/DOMUIEvent.h>

@interface DOMGestureEvent : DOMUIEvent

@property (readonly) id<DOMEventTarget> target; 
@property (readonly) float scale; 
@property (readonly) float rotation; 
@property (readonly) char ctrlKey; 
@property (readonly) char shiftKey; 
@property (readonly) char altKey; 
@property (readonly) char metaKey; 
-(float)scale;
-(id<DOMEventTarget>)target;
-(float)rotation;
-(char)ctrlKey;
-(char)shiftKey;
-(char)altKey;
-(char)metaKey;
-(void)initGestureEvent:(id)arg1 canBubble:(char)arg2 cancelable:(char)arg3 view:(id)arg4 detail:(int)arg5 screenX:(int)arg6 screenY:(int)arg7 clientX:(int)arg8 clientY:(int)arg9 ctrlKey:(char)arg10 altKey:(char)arg11 shiftKey:(char)arg12 metaKey:(char)arg13 target:(id)arg14 scale:(float)arg15 rotation:(float)arg16 ;
@end

