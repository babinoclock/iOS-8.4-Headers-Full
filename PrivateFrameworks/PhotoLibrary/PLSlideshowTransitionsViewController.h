/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:56 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PhotoLibrary/PhotoLibrary-Structs.h>
#import <UIKit/UIViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>

@class UIView, UITableView, NSMutableArray, NSArray, NSString;

@interface PLSlideshowTransitionsViewController : UIViewController <UITableViewDataSource, UITableViewDelegate> {

	UIView* _containerView;
	UITableView* _table;
	NSMutableArray* _tableCells;
	NSArray* _transitionKeys;
	NSArray* _alternateLocalizations;
	NSString* _selectedTransition;

}

@property (nonatomic,retain) NSString * selectedTransition; 
@property (nonatomic,retain) NSArray * alternateLocalizations;              //@synthesize alternateLocalizations=_alternateLocalizations - In the implementation block
@property (nonatomic,retain) NSArray * transitionKeys;                      //@synthesize transitionKeys=_transitionKeys - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)loadView;
-(CGSize)contentSizeForViewInPopoverView;
-(void)viewDidUnload;
-(void)setSelectedTransition:(NSString *)arg1 ;
-(NSString *)selectedTransition;
-(void)setTransitionKeys:(id)arg1 alternateLocalizations:(id)arg2 ;
-(id)initWithTransitions:(id)arg1 alternateTransitionLocalizations:(id)arg2 ;
-(void)setTransitionKeys:(NSArray *)arg1 ;
-(void)setAlternateLocalizations:(NSArray *)arg1 ;
-(void)_configureTableCells;
-(NSArray *)transitionKeys;
-(NSArray *)alternateLocalizations;
@end

