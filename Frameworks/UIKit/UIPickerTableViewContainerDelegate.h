/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:38:03 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol UIPickerTableViewContainerDelegate
@optional
-(void)_pickerTableViewDidChangeContentOffset:(id)arg1;
-(void)pickerTableView:(id)arg1 didChangeSelectionBarRowFrom:(int)arg2 to:(int)arg3;

@required
-(void)setAllowsMultipleSelection:(char)arg1;
-(void)_sendCheckedRow:(int)arg1 inTableView:(id)arg2 checked:(char)arg3;
-(char)_soundsEnabled;
-(char)_usesCheckSelection;

@end

