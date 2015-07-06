/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:36:20 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AddressBookUI/AddressBookUI-Structs.h>
#import <UIKit/UINavigationController.h>

@protocol ABContactViewControllerDelegate;
@class CNContactPicker, ABModel, NSArray, NSPredicate, UISplitViewController;

@interface ABPeoplePickerNavigationController : UINavigationController {

	void* _addressBook;
	id _peoplePickerDelegate;
	CNContactPicker* _contactPicker;
	ABModel* _model;
	int _behavior;
	CFArrayRef _displayedProperties;
	id _reserved1;
	id _reserved2;
	id _reserved3;
	id _reserved4;
	NSArray* _defaultToolbarItems;
	id _insertionValue;
	int _insertionProperty;
	struct {
		unsigned allowsEditing : 1;
		unsigned allowsCancel : 1;
		unsigned allowsActions : 1;
		unsigned allowsConferencing : 1;
		unsigned allowsSounds : 1;
		unsigned allowsVibrations : 1;
		unsigned hidesSearchableSources : 1;
		unsigned hidesPromptInLandscape : 1;
		unsigned forceInProcess : 1;
		unsigned forceOutOfProcess : 1;
	}  _flags;
	char _navigationBarIsAnimating;
	char _ignoreViewWillBePresented;
	char _allowsContactBlocking;
	char _allowsOnlyPhoneActions;
	char _allowsOnlyFaceTimeActions;
	NSPredicate* _predicateForEnablingPerson;
	NSPredicate* _predicateForSelectionOfPerson;
	NSPredicate* _predicateForSelectionOfProperty;
	UISplitViewController*<ABContactViewControllerDelegate> _contactsSplitViewPresentationDelegate;

}

@property (assign,nonatomic) id<ABPeoplePickerNavigationControllerDelegate> peoplePickerDelegate;                                        //@synthesize peoplePickerDelegate=_peoplePickerDelegate - In the implementation block
@property (nonatomic,copy) NSArray * displayedProperties; 
@property (assign,nonatomic) void* addressBook; 
@property (nonatomic,copy) NSPredicate * predicateForEnablingPerson;                                                                     //@synthesize predicateForEnablingPerson=_predicateForEnablingPerson - In the implementation block
@property (nonatomic,copy) NSPredicate * predicateForSelectionOfPerson;                                                                  //@synthesize predicateForSelectionOfPerson=_predicateForSelectionOfPerson - In the implementation block
@property (nonatomic,copy) NSPredicate * predicateForSelectionOfProperty;                                                                //@synthesize predicateForSelectionOfProperty=_predicateForSelectionOfProperty - In the implementation block
@property (assign,nonatomic) char hidesSearchableSources; 
@property (assign,nonatomic) char hidesPromptInLandscape; 
@property (assign,nonatomic) char allowsContactBlocking;                                                                                 //@synthesize allowsContactBlocking=_allowsContactBlocking - In the implementation block
@property (assign,nonatomic) char allowsOnlyPhoneActions;                                                                                //@synthesize allowsOnlyPhoneActions=_allowsOnlyPhoneActions - In the implementation block
@property (assign,nonatomic) char allowsOnlyFaceTimeActions;                                                                             //@synthesize allowsOnlyFaceTimeActions=_allowsOnlyFaceTimeActions - In the implementation block
@property (assign,nonatomic) UISplitViewController*<ABContactViewControllerDelegate> contactsSplitViewPresentationDelegate;              //@synthesize contactsSplitViewPresentationDelegate=_contactsSplitViewPresentationDelegate - In the implementation block
@property (setter=ab_setDefaultToolbarItems:,nonatomic,retain) NSArray * ab_defaultToolbarItems;                                         //@synthesize defaultToolbarItems=_defaultToolbarItems - In the implementation block
@property (nonatomic,retain) id<ABStyleProvider> styleProvider;                                                                          //@synthesize reserved4=_reserved4 - In the implementation block
+(void)notifyPreferencesChanged;
-(char)ckCanDismissWhenSuspending;
-(char)hidesSearchableSources;
-(void)setHidesSearchableSources:(char)arg1 ;
-(void)groupsViewControllerDidFinish:(id)arg1 ;
-(void)showMembersOfContactsFilter:(id)arg1 ;
-(id)contactPickerPresentedViewController:(id)arg1 ;
-(void)contactPicker:(id)arg1 didSelectContact:(id)arg2 ;
-(void)contactPicker:(id)arg1 didSelectContact:(id)arg2 propertyKey:(id)arg3 propertyIdentifier:(int)arg4 ;
-(void)setPredicateForSelectionOfProperty:(NSPredicate *)arg1 ;
-(void)_viewWillBePresented;
-(void)contactPickerDidCancel:(id)arg1 ;
-(void)popToDefaultViewController:(char)arg1 ;
-(id)displayedKeys;
-(NSPredicate *)predicateForSelectionOfProperty;
-(char)allowsCancel;
-(char)allowsOnlyPhoneActions;
-(void)setAllowsOnlyPhoneActions:(char)arg1 ;
-(char)allowsOnlyFaceTimeActions;
-(void)setAllowsOnlyFaceTimeActions:(char)arg1 ;
-(char)allowsSounds;
-(char)hidesPromptInLandscape;
-(void)setHidesPromptInLandscape:(char)arg1 ;
-(id)bannerTitle;
-(id)bannerValue;
-(char)isDefaultViewControllerVisible;
-(void)setForceInProcess:(char)arg1 ;
-(void)scrollToClosestContactMatching:(id)arg1 ;
-(void)setAllowsConferencing:(char)arg1 ;
-(void)contactViewController:(id)arg1 didCompleteWithContact:(id)arg2 ;
-(char)contactViewController:(id)arg1 shouldPerformDefaultActionForContact:(id)arg2 property:(id)arg3 labeledValue:(id)arg4 ;
-(char)allowsActions;
-(void)contactViewController:(id)arg1 didDeleteContact:(id)arg2 ;
-(char)allowsContactBlocking;
-(char)allowsConferencing;
-(NSArray *)displayedProperties;
-(void*)displayedPerson;
-(char)allowsShowingPersonsCards;
-(void)setBannerTitle:(id)arg1 value:(id)arg2 ;
-(void)_applicationEnteringForeground;
-(char)allowsCardEditing;
-(void)presentGroupsViewController;
-(void)_performCancel:(id)arg1 ;
-(id)promptForViewControllerType:(int)arg1 orientation:(int)arg2 ;
-(char)showCardForPerson:(void*)arg1 withMemberCell:(id)arg2 animate:(char)arg3 forceDisableEditing:(char)arg4 ;
-(id<ABPeoplePickerNavigationControllerDelegate>)peoplePickerDelegate;
-(id)insertionValue;
-(int)insertionProperty;
-(char)navigationBarIsAnimating;
-(id)_setupAccountsAndGroupsController;
-(id)initAsAddressBook:(char)arg1 withAddressBook:(void*)arg2 withStyle:(int)arg3 ;
-(void)showMembersOfContactsFilter:(id)arg1 animate:(char)arg2 resetSearch:(char)arg3 loadState:(char)arg4 ;
-(char)isOutOfProcess;
-(void)_setViewController:(id)arg1 animated:(char)arg2 ;
-(void)setupInitialStackAndLoadState:(char)arg1 ;
-(void)_applyStyleProvider;
-(id)_legacyKeyForNewKey:(id)arg1 ;
-(void)setupViewControllers;
-(id)membersViewController;
-(void)showCardForPerson:(void*)arg1 resetFilter:(char)arg2 resetSearch:(char)arg3 fallbackToFirstPerson:(char)arg4 ;
-(void)_updateViewControllerNavigationButtons;
-(char)_shouldPreventCancelButtonsFromShowing;
-(void)setPrompt:(id)arg1 forViewControllerType:(int)arg2 ;
-(UISplitViewController*<ABContactViewControllerDelegate>)contactsSplitViewPresentationDelegate;
-(char)shouldContinueAfterSelectingPerson:(void*)arg1 cell:(id)arg2 ;
-(void)presentContactViewController:(id)arg1 ;
-(void)setAllowsVibrations:(char)arg1 ;
-(char)shouldPerformDefaultActionForPerson:(void*)arg1 property:(int)arg2 identifier:(int)arg3 withMemberCell:(id)arg4 ;
-(char)personViewController:(id)arg1 shouldPerformDefaultActionForPerson:(void*)arg2 property:(int)arg3 identifier:(int)arg4 withMemberCell:(id)arg5 ;
-(char)ab_ownsViewControllerToolbarItems:(id)arg1 ;
-(void)ab_changeViewControllerToolbarItemsIfEmpty:(id)arg1 animated:(char)arg2 ;
-(void)ab_changeViewControllersToolbarItemsIfEmpty:(char)arg1 ;
-(void)ab_setDefaultToolbarItems:(id)arg1 animated:(char)arg2 ;
-(void)ab_restoreViewControllerToolbarItems:(id)arg1 animated:(char)arg2 ;
-(void)showUnifiedCardForPerson:(void*)arg1 ;
-(void)finishNavigationBarAnimation;
-(id)initAsAddressBook:(char)arg1 withAddressBook:(void*)arg2 ;
-(id)initAsAddressBook:(char)arg1 withStyle:(int)arg2 ;
-(id)initAsAddressBook:(char)arg1 ;
-(void)notePreferencesChanged;
-(void)showCardForPerson:(void*)arg1 ;
-(void)setForceOutOfProcess:(char)arg1 ;
-(void)personViewController:(id)arg1 requestedLinkForPerson:(id)arg2 ;
-(void)ab_setDefaultToolbarItems:(id)arg1 ;
-(char)unknownPersonViewController:(id)arg1 shouldPerformDefaultActionForPerson:(void*)arg2 property:(int)arg3 identifier:(int)arg4 withMemberCell:(id)arg5 ;
-(NSArray *)ab_defaultToolbarItems;
-(NSPredicate *)predicateForEnablingPerson;
-(NSPredicate *)predicateForSelectionOfPerson;
-(void)setContactsSplitViewPresentationDelegate:(UISplitViewController*<ABContactViewControllerDelegate>)arg1 ;
-(id<ABStyleProvider>)styleProvider;
-(void)setStyleProvider:(id<ABStyleProvider>)arg1 ;
-(void)setPredicateForEnablingPerson:(NSPredicate *)arg1 ;
-(void)setPredicateForSelectionOfPerson:(NSPredicate *)arg1 ;
-(void)setupAsMePicker;
-(void)loadState;
-(void)setAddressBook:(void*)arg1 ;
-(void)setDisplayedProperties:(NSArray *)arg1 ;
-(void)setAllowsCardEditing:(char)arg1 ;
-(void)setAllowsSounds:(char)arg1 ;
-(void)setAllowsActions:(char)arg1 ;
-(void)saveState;
-(void)dealloc;
-(char)respondsToSelector:(SEL)arg1 ;
-(id)init;
-(void)encodeRestorableStateWithCoder:(id)arg1 ;
-(void)decodeRestorableStateWithCoder:(id)arg1 ;
-(id)prompt;
-(void)setPrompt:(id)arg1 ;
-(char)navigationBar:(id)arg1 shouldPushItem:(id)arg2 ;
-(void)navigationBar:(id)arg1 didPushItem:(id)arg2 ;
-(char)navigationBar:(id)arg1 shouldPopItem:(id)arg2 ;
-(void)navigationBar:(id)arg1 didPopItem:(id)arg2 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)_endDelayingPresentation;
-(id)initWithStyle:(int)arg1 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)setContentSizeForViewInPopover:(CGSize)arg1 ;
-(void)_setPopoverController:(id)arg1 ;
-(void)setParentViewController:(id)arg1 ;
-(void)removeChildViewController:(id)arg1 notifyDidMove:(char)arg2 ;
-(void)viewWillDisappear:(char)arg1 ;
-(char)_isDelayingPresentation;
-(void)presentViewController:(id)arg1 animated:(char)arg2 completion:(/*^block*/id)arg3 ;
-(char)_allowsAutorotation;
-(void)removeChildViewController:(id)arg1 ;
-(id)model;
-(void)pushViewController:(id)arg1 animated:(char)arg2 ;
-(void)setNavigationBarHidden:(char)arg1 animated:(char)arg2 ;
-(void)willShowViewController:(id)arg1 animated:(char)arg2 ;
-(id)valueForUndefinedKey:(id)arg1 ;
-(void)setAllowsCancel:(char)arg1 ;
-(void)setPeoplePickerDelegate:(id<ABPeoplePickerNavigationControllerDelegate>)arg1 ;
-(int)behavior;
-(void)setAllowsContactBlocking:(char)arg1 ;
-(void)setInsertionValue:(id)arg1 property:(int)arg2 ;
-(char)personViewController:(id)arg1 shouldPerformDefaultActionForPerson:(void*)arg2 property:(int)arg3 identifier:(int)arg4 ;
-(void)unknownPersonViewController:(id)arg1 didResolveToPerson:(void*)arg2 ;
-(void*)addressBook;
-(id)initWithAddressBook:(void*)arg1 ;
-(void)setBehavior:(int)arg1 ;
-(void)setValue:(id)arg1 forUndefinedKey:(id)arg2 ;
@end

