/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:36:16 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UITableViewDataSource.h>

@class NSArray, NSDictionary, ACAccountStore, ABModel, NSString;

@interface ABAccountsAndGroupDataSource : NSObject <UITableViewDataSource> {

	NSArray* _accountIdentifiers;
	NSArray* _accountDisplayNames;
	NSDictionary* _groupsByAccountIdentifier;
	ACAccountStore* _accountStore;
	char _hidesSearchableSources;
	char _hidesGlobalGroupWrapper;
	char _dirty;
	ABModel* _model;

}

@property (nonatomic,retain) ABModel * model;                            //@synthesize model=_model - In the implementation block
@property (assign,nonatomic) char hidesSearchableSources;                //@synthesize hidesSearchableSources=_hidesSearchableSources - In the implementation block
@property (assign,nonatomic) char hidesGlobalGroupWrapper;               //@synthesize hidesGlobalGroupWrapper=_hidesGlobalGroupWrapper - In the implementation block
@property (assign,getter=isDirty,nonatomic) char dirty;                  //@synthesize dirty=_dirty - In the implementation block
@property (nonatomic,retain) ACAccountStore * accountStore;              //@synthesize accountStore=_accountStore - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)groupWrapperForIndexPath:(id)arg1 ;
-(id)newContactsFilterFromSelectedGroupWrappers;
-(char)hidesSearchableSources;
-(char)hidesGlobalGroupWrapper;
-(void)reloadDataIncludingAccountStore:(char)arg1 usingArchivedState:(char)arg2 ;
-(int)numberOfGroupsInAccountAtIndex:(int)arg1 ;
-(id)accountDisplayNameAtIndex:(int)arg1 ;
-(id)defaultGroupWrapper;
-(id)indexPathForGroupWrapper:(id)arg1 ;
-(int)numberOfGroupsForAccountIdentifier:(id)arg1 ;
-(void)scheduleRefresh;
-(void)cancelScheduledRefresh;
-(void)setHidesSearchableSources:(char)arg1 ;
-(void)setHidesGlobalGroupWrapper:(char)arg1 ;
-(void)setDirty:(char)arg1 ;
-(void)dealloc;
-(void)reloadData;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2 ;
-(ABModel *)model;
-(void)setModel:(ABModel *)arg1 ;
-(ACAccountStore *)accountStore;
-(void)setAccountStore:(ACAccountStore *)arg1 ;
-(char)isDirty;
@end

