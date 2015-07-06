/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:13 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UITableViewController.h>
#import <PrototypeTools/PTSRowObserver.h>

@class NSIndexPath, PTSChoiceRow, NSString;

@interface PTSChoiceViewController : UITableViewController <PTSRowObserver> {

	NSIndexPath* _valueIndexPath;
	PTSChoiceRow* _row;

}

@property (nonatomic,retain) PTSChoiceRow * row;                    //@synthesize row=_row - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(PTSChoiceRow *)row;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(void)setRow:(PTSChoiceRow *)arg1 ;
-(id)_indexPathForValue:(id)arg1 ;
-(void)_checkAppropriateCell;
-(id)initWithPresentingRow:(id)arg1 ;
-(void)row:(id)arg1 didChangeValue:(id)arg2 ;
@end

