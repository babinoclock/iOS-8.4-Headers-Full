/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:12 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Preferences/PSSearchResultsCell.h>

@class UISwitch, PSSpecifier;

@interface PSSearchResultsSwitchCell : PSSearchResultsCell {

	UISwitch* _switch;
	SEL _getter;
	SEL _setter;
	id _target;
	PSSpecifier* _specifier;

}

@property (assign,nonatomic) SEL getter;                           //@synthesize getter=_getter - In the implementation block
@property (assign,nonatomic) SEL setter;                           //@synthesize setter=_setter - In the implementation block
@property (assign,nonatomic) id target;                            //@synthesize target=_target - In the implementation block
@property (nonatomic,retain) PSSpecifier * specifier;              //@synthesize specifier=_specifier - In the implementation block
-(SEL)setter;
-(void)setSetter:(SEL)arg1 ;
-(PSSpecifier *)specifier;
-(void)setSpecifier:(PSSpecifier *)arg1 ;
-(void)dealloc;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 ;
-(void)setTarget:(id)arg1 ;
-(id)target;
-(void)prepareForReuse;
-(void)setGetter:(SEL)arg1 ;
-(SEL)getter;
-(void)reloadValue:(char)arg1 ;
-(void)_switchValueChanged:(id)arg1 ;
@end

