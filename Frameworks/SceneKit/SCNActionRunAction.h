/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:37:56 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SceneKit/SceneKit-Structs.h>
#import <SceneKit/SCNAction.h>

@class SCNAction, NSString;

@interface SCNActionRunAction : SCNAction {

	SCNAction* _action;
	NSString* _subSpriteKey;
	NSString* _actionKey;
	char _waitForKeyedAction;
	char _runOnSubSprite;
	char _fired;

}
+(id)runAction:(id)arg1 onFirstChildWithName:(id)arg2 ;
+(id)runAction:(id)arg1 afterActionWithKey:(id)arg2 ;
-(char)isCustom;
-(void)updateWithTarget:(id)arg1 forTime:(double)arg2 ;
-(id)reversedAction;
-(void)willStartWithTarget:(id)arg1 atTime:(double)arg2 ;
-(void)dealloc;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

