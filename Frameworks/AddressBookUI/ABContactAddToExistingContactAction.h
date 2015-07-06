/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:36:17 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AddressBookUI/ABContactAction.h>
#import <AddressBookUI/ABPeoplePickerNavigationControllerDelegate.h>
#import <AddressBookUI/ABNewPersonViewControllerDelegate.h>

@class CNContact, ABPeoplePickerNavigationController, NSString;

@interface ABContactAddToExistingContactAction : ABContactAction <ABPeoplePickerNavigationControllerDelegate, ABNewPersonViewControllerDelegate> {

	CNContact* _chosenContact;
	ABPeoplePickerNavigationController* _peoplePicker;

}

@property (nonatomic,retain) CNContact * chosenContact;                                      //@synthesize chosenContact=_chosenContact - In the implementation block
@property (nonatomic,retain) ABPeoplePickerNavigationController * peoplePicker;              //@synthesize peoplePicker=_peoplePicker - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)performActionWithSender:(id)arg1 ;
-(void)setChosenContact:(CNContact *)arg1 ;
-(CNContact *)chosenContact;
-(void)newPersonViewController:(id)arg1 didCompleteWithNewPerson:(void*)arg2 ;
-(void)dealloc;
-(ABPeoplePickerNavigationController *)peoplePicker;
-(void)setPeoplePicker:(ABPeoplePickerNavigationController *)arg1 ;
-(void)peoplePickerNavigationControllerDidCancel:(id)arg1 ;
-(char)peoplePickerNavigationController:(id)arg1 shouldContinueAfterSelectingPerson:(void*)arg2 ;
-(char)peoplePickerNavigationController:(id)arg1 shouldContinueAfterSelectingPerson:(void*)arg2 property:(int)arg3 identifier:(int)arg4 ;
@end

