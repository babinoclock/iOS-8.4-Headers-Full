/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:39:04 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/_UIRotatingAlertControllerDelegate.h>

@class _UIRotatingAlertController, UITextView, NSArray, NSDictionary, UIWindow, NSString;

@interface _UITextViewInteractableItem : NSObject <_UIRotatingAlertControllerDelegate> {

	_UIRotatingAlertController* _linkInteractionAlertController;
	char _interactionIsFinished;
	UITextView* _textView;
	NSArray* _actions;
	NSDictionary* _defaultAction;
	UIWindow* _windowForActionSheetPresentation;
	NSRange _range;

}

@property (assign,nonatomic) NSRange range;                                            //@synthesize range=_range - In the implementation block
@property (assign,nonatomic) UITextView * textView;                                    //@synthesize textView=_textView - In the implementation block
@property (nonatomic,readonly) NSString * localizedTitle; 
@property (nonatomic,readonly) NSArray * actions;                                      //@synthesize actions=_actions - In the implementation block
@property (nonatomic,readonly) NSDictionary * defaultAction;                           //@synthesize defaultAction=_defaultAction - In the implementation block
@property (assign,nonatomic) char interactionIsFinished;                               //@synthesize interactionIsFinished=_interactionIsFinished - In the implementation block
@property (nonatomic,retain) UIWindow * windowForActionSheetPresentation;              //@synthesize windowForActionSheetPresentation=_windowForActionSheetPresentation - In the implementation block
-(NSArray *)actions;
-(void)setTextView:(UITextView *)arg1 ;
-(NSRange)range;
-(void)_cleanupSheet;
-(id)hostViewForSheet:(id)arg1 ;
-(CGRect)initialPresentationRectInHostViewForSheet:(id)arg1 ;
-(CGRect)presentationRectInHostViewForSheet:(id)arg1 ;
-(UITextView *)textView;
-(void)handleTap;
-(id)_actionSheet;
-(NSDictionary *)defaultAction;
-(char)allowHighlight;
-(void)handleLongPress;
-(void)setInteractionIsFinished:(char)arg1 ;
-(char)allowInteraction;
-(void)_showActionSheet;
-(void)_handleActionAndFinish:(id)arg1 ;
-(NSString *)localizedTitle;
-(UIWindow *)windowForActionSheetPresentation;
-(void)setWindowForActionSheetPresentation:(UIWindow *)arg1 ;
-(void)_cleanupWindowForActionSheetPresentation;
-(void)setRange:(NSRange)arg1 ;
-(char)interactionIsFinished;
@end

