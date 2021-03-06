/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:36:23 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AddressBookUI/ABPropertyAction.h>

@protocol ABContactViewControllerDelegate;
@class ABContactViewController, CNMutableContact;

@interface ABPropertyLinkedCardsAction : ABPropertyAction {

	id<ABContactViewControllerDelegate> _contactDelegate;
	ABContactViewController* _contactController;
	CNMutableContact* _linkedContact;

}

@property (assign) id<ABContactViewControllerDelegate> contactDelegate;              //@synthesize contactDelegate=_contactDelegate - In the implementation block
@property (retain) ABContactViewController * contactController;                      //@synthesize contactController=_contactController - In the implementation block
@property (retain) CNMutableContact * linkedContact;                                 //@synthesize linkedContact=_linkedContact - In the implementation block
-(void)performActionForItem:(id)arg1 sender:(id)arg2 ;
-(void)setContactController:(ABContactViewController *)arg1 ;
-(ABContactViewController *)contactController;
-(void)setPreferredPhoto;
-(void)setPreferredName;
-(void)setLinkedContact:(CNMutableContact *)arg1 ;
-(CNMutableContact *)linkedContact;
-(void)dealloc;
-(id<ABContactViewControllerDelegate>)contactDelegate;
-(void)setContactDelegate:(id<ABContactViewControllerDelegate>)arg1 ;
@end

