/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:38:49 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class UIResponder;

@interface UIInputViewPostPinningReloadState : NSObject {

	UIResponder* _responderPreventedFromSettingInputViews;

}

@property (nonatomic,retain) UIResponder * responderToReload;              //@synthesize responderPreventedFromSettingInputViews=_responderPreventedFromSettingInputViews - In the implementation block
+(id)stateWithResponder:(id)arg1 ;
-(void)dealloc;
-(void)setResponderToReload:(UIResponder *)arg1 ;
-(UIResponder *)responderToReload;
@end

