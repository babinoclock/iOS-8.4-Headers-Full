/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:38:46 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol UIModalItemDelegate;
#import <UIKit/UIKit-Structs.h>
@class NSString, NSAttributedString, NSMutableArray, UIView, UIViewController, _UIModalItemContentView, _UIModalItemBackgroundView, _UIModalItemRepresentationView, UITextInputTraits, NSArray;

@interface _UIModalItem : NSObject {

	NSString* _title;
	NSString* _message;
	NSString* _cancelButtonTitle;
	NSString* _defaultButtonTitle;
	NSAttributedString* _titleAttributedString;
	NSAttributedString* _messageAttributedString;
	NSString* _subtitleString;
	int _titleMaxLineNumber;
	int _messageMaxLineNumber;
	int _numberOfButtonsRows;
	char _useUndoStyle;
	char _useWifiPickerLayout;
	char _textFieldsHidden;
	char _dontUpdateFrameForKBChanges;
	NSMutableArray* _otherButtonsTitles;
	int _itemType;
	id<UIModalItemDelegate> _delegate;
	/*^block*/id _completionBlock;
	int _modalItemInputStyle;
	UIView* _popoverTargetView;
	CGRect _popoverTargetRect;
	UIViewController* _contentViewController;
	CGSize _contentViewControllerSize;
	int _presentAnimationType;
	int _dismissAnimationType;
	char _isPresented;
	char _isVisible;
	char _isBeingDismissed;
	char _isHidden;
	UIViewController* _viewController;
	UIViewController* _hostingViewController;
	UIViewController* _anchorViewController;
	int _defaultButtonIndex;
	int _cancelButtonIndex;
	_UIModalItemContentView* _contentView;
	_UIModalItemBackgroundView* _backgroundView;
	_UIModalItemRepresentationView* _representedView;
	NSString* _loginString;
	NSString* _passwordString;
	NSString* _loginPlaceholderString;
	NSString* _passwordPlaceholderString;
	UITextInputTraits* _passwordTraits;
	UITextInputTraits* _loginTraits;
	char _enableFirstOtherButton;
	char _forceVerticalLayout;
	int _dismissIndex;
	int cancelButtonIndex;
	NSArray* _buttonTitles;

}

@property (nonatomic,copy) NSString * title;                                                                                    //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * message;                                                                                  //@synthesize message=_message - In the implementation block
@property (assign,nonatomic) int type;                                                                                          //@synthesize itemType=_itemType - In the implementation block
@property (assign,nonatomic) UIView * targetView;                                                                               //@synthesize popoverTargetView=_popoverTargetView - In the implementation block
@property (assign,nonatomic) CGRect targetRect;                                                                                 //@synthesize popoverTargetRect=_popoverTargetRect - In the implementation block
@property (readonly) char isPresented;                                                                                          //@synthesize isPresented=_isPresented - In the implementation block
@property (assign,nonatomic) char enableFirstOtherButton;                                                                       //@synthesize enableFirstOtherButton=_enableFirstOtherButton - In the implementation block
@property (assign,nonatomic) id<UIModalItemDelegate> delegate;                                                                  //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSArray * buttonTitles;                                                                              //@synthesize buttonTitles=_buttonTitles - In the implementation block
@property (assign,nonatomic) int cancelButtonIndex; 
@property (assign,nonatomic) int defaultButtonIndex;                                                                            //@synthesize defaultButtonIndex=_defaultButtonIndex - In the implementation block
@property (assign,nonatomic) char forceVerticalLayout;                                                                          //@synthesize forceVerticalLayout=_forceVerticalLayout - In the implementation block
@property (assign,nonatomic) int modalItemInputStyle;                                                                           //@synthesize modalItemInputStyle=_modalItemInputStyle - In the implementation block
@property (nonatomic,copy) NSString * loginString;                                                                              //@synthesize loginString=_loginString - In the implementation block
@property (nonatomic,copy) NSString * passwordString;                                                                           //@synthesize passwordString=_passwordString - In the implementation block
@property (nonatomic,copy) NSString * loginPlaceholderString;                                                                   //@synthesize loginPlaceholderString=_loginPlaceholderString - In the implementation block
@property (nonatomic,copy) NSString * passwordPlaceholderString;                                                                //@synthesize passwordPlaceholderString=_passwordPlaceholderString - In the implementation block
@property (nonatomic,readonly) UIViewController * viewController;                                                               //@synthesize viewController=_viewController - In the implementation block
@property (nonatomic,retain) UIViewController * contentViewController;                                                          //@synthesize contentViewController=_contentViewController - In the implementation block
@property (assign,nonatomic) CGSize contentViewControllerSize;                                                                  //@synthesize contentViewControllerSize=_contentViewControllerSize - In the implementation block
@property (assign,nonatomic) int presentAnimationType;                                                                          //@synthesize presentAnimationType=_presentAnimationType - In the implementation block
@property (assign,nonatomic) int dismissAnimationType;                                                                          //@synthesize dismissAnimationType=_dismissAnimationType - In the implementation block
@property (setter=_setViewController:,getter=_viewController,nonatomic,retain) UIViewController * _viewController; 
@property (nonatomic,copy) NSAttributedString * titleAttributedString;                                                          //@synthesize titleAttributedString=_titleAttributedString - In the implementation block
@property (nonatomic,copy) NSAttributedString * messageAttributedString;                                                        //@synthesize messageAttributedString=_messageAttributedString - In the implementation block
@property (nonatomic,copy) NSString * subtitleString;                                                                           //@synthesize subtitleString=_subtitleString - In the implementation block
@property (assign,nonatomic) int titleMaxLineNumber;                                                                            //@synthesize titleMaxLineNumber=_titleMaxLineNumber - In the implementation block
@property (assign,nonatomic) int messageMaxLineNumber;                                                                          //@synthesize messageMaxLineNumber=_messageMaxLineNumber - In the implementation block
@property (assign,nonatomic) int numberOfButtonsRows;                                                                           //@synthesize numberOfButtonsRows=_numberOfButtonsRows - In the implementation block
@property (assign,nonatomic) char useUndoStyle;                                                                                 //@synthesize useUndoStyle=_useUndoStyle - In the implementation block
@property (assign,nonatomic) char useWifiPickerLayout;                                                                          //@synthesize useWifiPickerLayout=_useWifiPickerLayout - In the implementation block
@property (assign,nonatomic) char textFieldsHidden;                                                                             //@synthesize textFieldsHidden=_textFieldsHidden - In the implementation block
@property (nonatomic,retain) _UIModalItemContentView * contentView;                                                             //@synthesize contentView=_contentView - In the implementation block
@property (nonatomic,retain) _UIModalItemBackgroundView * backgroundView;                                                       //@synthesize backgroundView=_backgroundView - In the implementation block
@property (assign,nonatomic) char isBeingDismissed;                                                                             //@synthesize isBeingDismissed=_isBeingDismissed - In the implementation block
@property (assign,nonatomic) int dismissIndex;                                                                                  //@synthesize dismissIndex=_dismissIndex - In the implementation block
@property (assign,nonatomic) char isHidden;                                                                                     //@synthesize isHidden=_isHidden - In the implementation block
@property (assign,nonatomic) char dontUpdateFrameForKBChanges;                                                                  //@synthesize dontUpdateFrameForKBChanges=_dontUpdateFrameForKBChanges - In the implementation block
+(id)modalItemWithType:(int)arg1 title:(id)arg2 message:(id)arg3 buttonTitles:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)dealloc;
-(void)setDelegate:(id<UIModalItemDelegate>)arg1 ;
-(char)isHidden;
-(id)_contentView;
-(void)setTitle:(NSString *)arg1 ;
-(id<UIModalItemDelegate>)delegate;
-(id)_backgroundView;
-(int)cancelButtonIndex;
-(int)addButtonWithTitle:(id)arg1 ;
-(void)setCancelButtonIndex:(int)arg1 ;
-(void)setType:(int)arg1 ;
-(int)type;
-(NSString *)title;
-(_UIModalItemContentView *)contentView;
-(char)isBeingDismissed;
-(void)setContentView:(_UIModalItemContentView *)arg1 ;
-(void)setBackgroundView:(_UIModalItemBackgroundView *)arg1 ;
-(_UIModalItemBackgroundView *)backgroundView;
-(NSString *)subtitleString;
-(NSString *)message;
-(int)modalItemInputStyle;
-(id)_cancelButtonTitle;
-(id)_otherButtonsTitles;
-(UIViewController *)contentViewController;
-(int)defaultButtonIndex;
-(id)textFieldAtIndex:(int)arg1 ;
-(id)_passwordTraits;
-(NSString *)passwordPlaceholderString;
-(float)_maxWidth;
-(float)_maxHeight;
-(void)_passwordFieldTextDidChange;
-(void)_loginFieldTextDidChange;
-(char)enableFirstOtherButton;
-(void)setEnableFirstOtherButton:(char)arg1 ;
-(NSAttributedString *)titleAttributedString;
-(int)numberOfButtonsRows;
-(char)forceVerticalLayout;
-(char)useUndoStyle;
-(char)useWifiPickerLayout;
-(int)titleMaxLineNumber;
-(int)messageMaxLineNumber;
-(CGSize)contentViewControllerSize;
-(char)textFieldsHidden;
-(void)setDontUpdateFrameForKBChanges:(char)arg1 ;
-(UIViewController *)_viewController;
-(UIViewController *)viewController;
-(char)dontUpdateFrameForKBChanges;
-(id)_representedView;
-(void)_setRepresentedView:(id)arg1 ;
-(int)presentAnimationType;
-(void)setIsHidden:(char)arg1 ;
-(void)setMessage:(NSString *)arg1 ;
-(void)setContentViewController:(UIViewController *)arg1 ;
-(void)setDefaultButtonIndex:(int)arg1 ;
-(id)initWithTitle:(id)arg1 message:(id)arg2 otherButtonTitles:(id)arg3 completion:(/*^block*/id)arg4 delegate:(id)arg5 ;
-(void)_updateContentView;
-(void)setPasswordString:(NSString *)arg1 ;
-(void)setLoginString:(NSString *)arg1 ;
-(id)buttonTitleAtIndex;
-(id)_popoverBackgroundView;
-(void)_setViewController:(id)arg1 ;
-(id)_hostingViewController;
-(void)_setHostingViewController:(id)arg1 ;
-(id)_anchorViewController;
-(void)_setAnchorViewController:(id)arg1 ;
-(id)_typeKey;
-(id)_defaultButtonTitle;
-(void)setSubtitleString:(NSString *)arg1 ;
-(void)refreshButtonTitle;
-(void)setTextFieldsHidden:(char)arg1 ;
-(id)_loginTraits;
-(void)setModalItemInputStyle:(int)arg1 ;
-(char)isPresented;
-(void)setIsBeingDismissed:(char)arg1 ;
-(int)dismissIndex;
-(void)setDismissIndex:(int)arg1 ;
-(UIView *)targetView;
-(void)setTargetView:(UIView *)arg1 ;
-(CGRect)targetRect;
-(void)setTargetRect:(CGRect)arg1 ;
-(void)setPresentAnimationType:(int)arg1 ;
-(int)dismissAnimationType;
-(void)setDismissAnimationType:(int)arg1 ;
-(NSString *)loginString;
-(NSString *)passwordString;
-(NSString *)loginPlaceholderString;
-(void)setLoginPlaceholderString:(NSString *)arg1 ;
-(void)setPasswordPlaceholderString:(NSString *)arg1 ;
-(void)setContentViewControllerSize:(CGSize)arg1 ;
-(void)setTitleAttributedString:(NSAttributedString *)arg1 ;
-(NSAttributedString *)messageAttributedString;
-(void)setMessageAttributedString:(NSAttributedString *)arg1 ;
-(void)setTitleMaxLineNumber:(int)arg1 ;
-(void)setMessageMaxLineNumber:(int)arg1 ;
-(void)setNumberOfButtonsRows:(int)arg1 ;
-(void)setUseUndoStyle:(char)arg1 ;
-(void)setUseWifiPickerLayout:(char)arg1 ;
-(NSArray *)buttonTitles;
-(void)setButtonTitles:(NSArray *)arg1 ;
-(void)setForceVerticalLayout:(char)arg1 ;
@end

