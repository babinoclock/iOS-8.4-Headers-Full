/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:37:50 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/PassKit.framework/PassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UITableViewController.h>
#import <PassKit/ABPeoplePickerNavigationControllerDelegate.h>
#import <PassKit/ABPostalAddressEditorDelegate.h>
#import <UIKit/UITextFieldDelegate.h>

@protocol PKPaymentOptionsViewControllerDelegate;
@class PKPaymentOptionsModel, ABPostalAddressEditorNavigationController, PKPassSnapshotter, NSString;

@interface PKPaymentOptionsViewController : UITableViewController <ABPeoplePickerNavigationControllerDelegate, ABPostalAddressEditorDelegate, UITextFieldDelegate> {

	PKPaymentOptionsModel* _optionsModel;
	int _optionsStyle;
	ABPostalAddressEditorNavigationController* _addressEditorViewController;
	PKPassSnapshotter* _passSnapshotter;
	NSString* _title;
	char _isEditable;
	char _showDisclosureIndicators;
	id<PKPaymentOptionsViewControllerDelegate> _delegate;
	/*^block*/id _pickedABPropertyHandler;
	/*^block*/id _pickedABPersonHandler;

}

@property (assign,nonatomic) id<PKPaymentOptionsViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) char showDisclosureIndicators;                                    //@synthesize showDisclosureIndicators=_showDisclosureIndicators - In the implementation block
@property (nonatomic,copy) id pickedABPropertyHandler;                                         //@synthesize pickedABPropertyHandler=_pickedABPropertyHandler - In the implementation block
@property (nonatomic,copy) id pickedABPersonHandler;                                           //@synthesize pickedABPersonHandler=_pickedABPersonHandler - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)postalAddressEditorDidCancel:(id)arg1 ;
-(void)postalAddressEditor:(id)arg1 finishedEditingProperty:(int)arg2 contact:(id)arg3 ;
-(void)postalAddressEditor:(id)arg1 finishedEditingContact:(id)arg2 ;
-(id)initWithTitle:(id)arg1 optionsStyle:(int)arg2 ;
-(void)setBillingAddressOptions:(id)arg1 selectedIndex:(int)arg2 optionsChangedHandler:(/*^block*/id)arg3 ;
-(void)setPaymentPassOptions:(id)arg1 selectedIndex:(int)arg2 optionsChangedHandler:(/*^block*/id)arg3 ;
-(void)setShippingAddressOptions:(id)arg1 selectedIndex:(int)arg2 displayMode:(id)arg3 displayName:(id)arg4 optionsChangedHandler:(/*^block*/id)arg5 ;
-(void)setEmailOptions:(id)arg1 selectedIndex:(int)arg2 optionsChangedHandler:(/*^block*/id)arg3 ;
-(void)setPhoneOptions:(id)arg1 selectedIndex:(int)arg2 optionsChangedHandler:(/*^block*/id)arg3 ;
-(void)setShippingMethods:(id)arg1 currencyCode:(id)arg2 selectedIndex:(int)arg3 displayMode:(id)arg4 optionsChangedHandler:(/*^block*/id)arg5 ;
-(id)initWithTitle:(id)arg1 optionsStyle:(int)arg2 editable:(char)arg3 ;
-(void)setNameOptions:(id)arg1 selectedIndex:(int)arg2 optionsChangedHandler:(/*^block*/id)arg3 ;
-(void)_updateContactName;
-(void)_showAddressEntryViewControllerForOptionsGroup:(id)arg1 ;
-(void)_showABPickerForPropertyID:(int)arg1 optionsGroup:(id)arg2 ;
-(void)_showEntryViewControllerForPropertyID:(int)arg1 optionsGroup:(id)arg2 ;
-(id)_passSnapshotter;
-(char)showDisclosureIndicators;
-(void)setPickedABPersonHandler:(id)arg1 ;
-(void)setPickedABPropertyHandler:(id)arg1 ;
-(char)_presentedModally;
-(void)setShowDisclosureIndicators:(char)arg1 ;
-(id)pickedABPropertyHandler;
-(id)pickedABPersonHandler;
-(void)_updateNavigationBar;
-(void)dealloc;
-(void)setDelegate:(id<PKPaymentOptionsViewControllerDelegate>)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2 ;
-(char)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 commitEditingStyle:(int)arg2 forRowAtIndexPath:(id)arg3 ;
-(id<PKPaymentOptionsViewControllerDelegate>)delegate;
-(id)title;
-(void)viewDidLayoutSubviews;
-(void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)textFieldDidBeginEditing:(id)arg1 ;
-(id)initWithStyle:(int)arg1 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)viewWillDisappear:(char)arg1 ;
-(void)viewDidDisappear:(char)arg1 ;
-(void)peoplePickerNavigationController:(id)arg1 didSelectPerson:(void*)arg2 ;
-(void)peoplePickerNavigationController:(id)arg1 didSelectPerson:(void*)arg2 property:(int)arg3 identifier:(int)arg4 ;
-(void)peoplePickerNavigationControllerDidCancel:(id)arg1 ;
@end

