/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:36:20 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AddressBookUI/AddressBookUI-Structs.h>
#import <AddressBookUI/ABPersonCellContentView.h>
#import <AddressBookUI/ABResponderDelegate.h>

@protocol ABMultiCellContentViewUpdateDelegate;
@class UITableViewCell, UIView, ABAbstractPropertyGroup;

@interface ABMultiCellContentView : ABPersonCellContentView <ABResponderDelegate> {

	UITableViewCell* _cell;
	char _usesCustomPropertyCell;
	UIView* _labelDivider;
	char _isImportant;
	char _isEmphasized;
	char _isHighlighted;
	char _allowsEditing;
	char _isEditing;
	char _shouldIgnoreEndEditing;
	int _property;
	ABAbstractPropertyGroup* _pg;
	id _pgInfo;
	char _needsReload;
	UIView* _touchedView;
	id<ABMultiCellContentViewUpdateDelegate> _updateDelegate;
	int _abCellStyle;

}

@property (assign,nonatomic) UITableViewCell * cell;                                               //@synthesize cell=_cell - In the implementation block
@property (assign,nonatomic) char usesCustomPropertyCell;                                          //@synthesize usesCustomPropertyCell=_usesCustomPropertyCell - In the implementation block
@property (nonatomic,readonly) ABAbstractPropertyGroup * propertyGroup;                            //@synthesize pg=_pg - In the implementation block
@property (nonatomic,retain) id propertyGroupInfo;                                                 //@synthesize pgInfo=_pgInfo - In the implementation block
@property (assign,getter=isEditing,nonatomic) char editing;                                        //@synthesize isEditing=_isEditing - In the implementation block
@property (assign,nonatomic) char allowsEditing;                                                   //@synthesize allowsEditing=_allowsEditing - In the implementation block
@property (assign,nonatomic) char shouldIgnoreEndEditing;                                          //@synthesize shouldIgnoreEndEditing=_shouldIgnoreEndEditing - In the implementation block
@property (assign,getter=isImportant,nonatomic) char important;                                    //@synthesize isImportant=_isImportant - In the implementation block
@property (assign,getter=isEmphasized,nonatomic) char emphasized;                                  //@synthesize isEmphasized=_isEmphasized - In the implementation block
@property (assign,nonatomic) id<ABMultiCellContentViewUpdateDelegate> updateDelegate;              //@synthesize updateDelegate=_updateDelegate - In the implementation block
@property (assign,nonatomic) int abCellStyle;                                                      //@synthesize abCellStyle=_abCellStyle - In the implementation block
+(Class)classForProperty:(int)arg1 ;
+(CGSize)layoutSubviewsForView:(id)arg1 usingSize:(CGSize)arg2 propertyGroup:(id)arg3 info:(id)arg4 styleProvider:(id)arg5 whenEditing:(char)arg6 ;
+(CGSize)sizeThatFits:(CGSize)arg1 forPropertyGroup:(id)arg2 info:(id)arg3 styleProvider:(id)arg4 whenEditing:(char)arg5 ;
+(void)setupTextField:(id)arg1 withStyleProvider:(id)arg2 ;
+(id)reuseIdentifierForPropertyGroup:(id)arg1 info:(id)arg2 ;
-(void)reloadFromModel;
-(void)setAbCellStyle:(int)arg1 ;
-(int)abCellStyle;
-(char)isValidValue:(id)arg1 ;
-(void)entryFieldBeginAttemptBecomeFirstResponder:(id)arg1 ;
-(void)entryFieldEndAttemptBecomeFirstResponder:(id)arg1 ;
-(char)ABTabToNextResponder:(char)arg1 fromView:(id)arg2 ;
-(char)wantsLabelDivider;
-(id)initWithFrame:(CGRect)arg1 property:(int)arg2 ;
-(id)initCommonWithFrame:(CGRect)arg1 property:(int)arg2 ;
-(char)canHandleProperty:(int)arg1 ;
-(void)setPropertyGroupInfo:(id)arg1 ;
-(void)updateSubviewsForNewStateAnimated:(char)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 forPropertyGroup:(id)arg2 info:(id)arg3 styleProvider:(id)arg4 whenEditing:(char)arg5 ;
-(char)usesCustomPropertyCell;
-(void)setLabelText:(id)arg1 ;
-(id)labelTextColorWhenEditing:(char)arg1 ;
-(id)displayTextColor;
-(id)displayHighlightedTextColor;
-(void)setKeyboardSettings:(id)arg1 onTextField:(id)arg2 ;
-(void)layoutLabel;
-(CGRect)frameForLabelDivider;
-(id)badgeIconWhenEditing:(char)arg1 ;
-(void)reloadLabelFromModel;
-(CGRect)rectForView:(id)arg1 ;
-(id)viewForFirstResponder;
-(CGRect)backgroundRectForView:(id)arg1 ;
-(char)canBeginEditingAnytime;
-(id)hitTestForTouches:(id)arg1 withEvent:(id)arg2 ;
-(char)shouldSendTouchesToSuperviewForHitView:(id)arg1 ;
-(char)tabToNextResponder:(char)arg1 fromView:(id)arg2 ;
-(void)setPropertyGroup:(id)arg1 andInfo:(id)arg2 ;
-(void)clearTextFieldDelegates:(id)arg1 ;
-(id)newTextFieldWithFrame:(CGRect)arg1 tag:(int)arg2 keyboardSettings:(id)arg3 delegate:(id)arg4 ;
-(void)reloadIfNeeded:(char)arg1 reloadFromModel:(char)arg2 ;
-(CGRect)focusRectForView:(id)arg1 ;
-(void)setEmphasized:(char)arg1 ;
-(void)setImportant:(char)arg1 ;
-(char)entryFieldShouldBeginEditing:(id)arg1 ;
-(char)entryFieldShouldEndEditing:(id)arg1 ;
-(void)entryFieldDidBeginEditing:(id)arg1 ;
-(void)entryField:(id)arg1 valueDidChange:(id)arg2 forKey:(id)arg3 ;
-(void)entryField:(id)arg1 didEndEditingForKey:(id)arg2 ;
-(char)entryFieldShouldReturn:(id)arg1 ;
-(ABAbstractPropertyGroup *)propertyGroup;
-(id)propertyGroupInfo;
-(char)isImportant;
-(char)isEmphasized;
-(id<ABMultiCellContentViewUpdateDelegate>)updateDelegate;
-(void)setUpdateDelegate:(id<ABMultiCellContentViewUpdateDelegate>)arg1 ;
-(void)setUsesCustomPropertyCell:(char)arg1 ;
-(char)shouldIgnoreEndEditing;
-(void)setShouldIgnoreEndEditing:(char)arg1 ;
-(id)pickerView;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(id)init;
-(void)layoutSubviews;
-(void)reload;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(char)resignFirstResponder;
-(char)becomeFirstResponder;
-(char)canBecomeFirstResponder;
-(void)setHighlighted:(char)arg1 ;
-(char)isHighlighted;
-(char)isEditing;
-(void)setEditing:(char)arg1 animated:(char)arg2 ;
-(void)setEditing:(char)arg1 ;
-(char)canResignFirstResponder;
-(char)allowsEditing;
-(void)setAllowsEditing:(char)arg1 ;
-(UITableViewCell *)cell;
-(void)setCell:(UITableViewCell *)arg1 ;
@end

