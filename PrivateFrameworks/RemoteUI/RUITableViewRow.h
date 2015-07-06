/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:20 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <RemoteUI/RemoteUI-Structs.h>
#import <RemoteUI/RUIElement.h>
#import <UIKit/UIPickerViewDelegate.h>
#import <UIKit/UITextFieldDelegate.h>

@protocol RUITableViewRowDelegate, RUITextFieldChangeObserver;
@class RemoteUITableViewCell, NSMutableArray, NSDate, UISwitch, NSDictionary, NSData, RUIWebContainerView, UIView, UIControl, NSString;

@interface RUITableViewRow : RUIElement <UIPickerViewDelegate, UITextFieldDelegate> {

	RemoteUITableViewCell* _tableCell;
	NSMutableArray* _selectOptions;
	int _selectedRow;
	NSDate* _date;
	NSDate* _dateMax;
	NSDate* _dateMin;
	UISwitch* _switchControl;
	char _switchValue;
	char _rowInvalid;
	NSDictionary* _deleteAction;
	NSData* _data;
	RUIWebContainerView* _webContainerView;
	float _cachedHeight;
	char _configured;
	char _selected;
	id<RUITableViewRowDelegate> _delegate;
	int _datePickerMode;
	UIView* _pickerView;
	float _height;
	id<RUITextFieldChangeObserver> _textFieldChangeObserver;

}

@property (assign,nonatomic,__weak) id<RUITableViewRowDelegate> delegate;                                //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) char rowInvalid;                                                            //@synthesize rowInvalid=_rowInvalid - In the implementation block
@property (nonatomic,retain) NSDictionary * deleteAction;                                                //@synthesize deleteAction=_deleteAction - In the implementation block
@property (nonatomic,retain) NSData * data;                                                              //@synthesize data=_data - In the implementation block
@property (nonatomic,readonly) int selectedRow;                                                          //@synthesize selectedRow=_selectedRow - In the implementation block
@property (nonatomic,retain) NSDate * date;                                                              //@synthesize date=_date - In the implementation block
@property (nonatomic,retain) NSDate * dateMin;                                                           //@synthesize dateMin=_dateMin - In the implementation block
@property (nonatomic,retain) NSDate * dateMax;                                                           //@synthesize dateMax=_dateMax - In the implementation block
@property (nonatomic,readonly) int datePickerMode;                                                       //@synthesize datePickerMode=_datePickerMode - In the implementation block
@property (nonatomic,retain) UIView * pickerView;                                                        //@synthesize pickerView=_pickerView - In the implementation block
@property (assign,nonatomic) float height;                                                               //@synthesize height=_height - In the implementation block
@property (assign,nonatomic) char configured;                                                            //@synthesize configured=_configured - In the implementation block
@property (assign,getter=isSelected,nonatomic) char selected;                                            //@synthesize selected=_selected - In the implementation block
@property (nonatomic,readonly) UIControl * control; 
@property (assign,nonatomic,__weak) id<RUITextFieldChangeObserver> textFieldChangeObserver;              //@synthesize textFieldChangeObserver=_textFieldChangeObserver - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(void)resetLocale;
+(id)_formatterForDateYMD;
+(id)_formatterForMonthAndDay;
+(id)_formatterForYearAndMonth;
+(id)_formatterForShortDate;
+(id)_timeZoneAdjustedDateFromDate:(id)arg1 ;
-(id)sourceURL;
-(UIView *)pickerView;
-(void)_datePickerChanged:(id)arg1 ;
-(void)dealloc;
-(void)setImage:(id)arg1 ;
-(void)setPickerView:(UIView *)arg1 ;
-(void)setDelegate:(id<RUITableViewRowDelegate>)arg1 ;
-(int)numberOfComponentsInPickerView:(id)arg1 ;
-(int)pickerView:(id)arg1 numberOfRowsInComponent:(int)arg2 ;
-(id)pickerView:(id)arg1 titleForRow:(int)arg2 forComponent:(int)arg3 ;
-(void)pickerView:(id)arg1 didSelectRow:(int)arg2 inComponent:(int)arg3 ;
-(id<RUITableViewRowDelegate>)delegate;
-(NSDate *)date;
-(void)setEnabled:(char)arg1 ;
-(NSData *)data;
-(void)setData:(NSData *)arg1 ;
-(char)isSelected;
-(void)setSelected:(char)arg1 ;
-(char)textField:(id)arg1 shouldChangeCharactersInRange:(NSRange)arg2 replacementString:(id)arg3 ;
-(char)textFieldShouldReturn:(id)arg1 ;
-(float)height;
-(void)setDate:(NSDate *)arg1 ;
-(int)datePickerMode;
-(id)tableCell;
-(void)setHeight:(float)arg1 ;
-(void)setAttributes:(id)arg1 ;
-(void)populatePostbackDictionary:(id)arg1 ;
-(void)setRowInvalid:(char)arg1 ;
-(NSDictionary *)deleteAction;
-(id)selectOptions;
-(void)setDeleteAction:(NSDictionary *)arg1 ;
-(void)_updateContentForDisabledState;
-(id)radioGroupSelectedColor;
-(id)textColorForAttributeName:(id)arg1 ;
-(void)accessoryImageLoaded;
-(Class)tableCellClass;
-(int)tableCellStyle;
-(void)_switchFlipped:(id)arg1 ;
-(void)setDateMin:(NSDate *)arg1 ;
-(void)setDateMax:(NSDate *)arg1 ;
-(id)_datePickerFormatter;
-(void)detailLabelActivatedLinkFromCell:(id)arg1 completion:(/*^block*/id)arg2 ;
-(char)loadAccessoryImage;
-(char)supportsAutomaticSelection;
-(float)rowHeightWithMax:(float)arg1 peggedHeight:(float)arg2 tableView:(id)arg3 indexPath:(id)arg4 ;
-(void)clearCachedHeight;
-(char)rowInvalid;
-(int)selectedRow;
-(NSDate *)dateMin;
-(NSDate *)dateMax;
-(char)configured;
-(void)setConfigured:(char)arg1 ;
-(id<RUITextFieldChangeObserver>)textFieldChangeObserver;
-(void)setTextFieldChangeObserver:(id<RUITextFieldChangeObserver>)arg1 ;
-(UIControl *)control;
@end

