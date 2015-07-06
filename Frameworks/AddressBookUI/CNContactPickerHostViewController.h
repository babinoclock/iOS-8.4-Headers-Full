/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:36:23 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/_UIRemoteViewController.h>
#import <AddressBookUI/CNContactPickerContentViewController.h>
#import <AddressBookUI/CNContactPickerHostProtocol.h>

@protocol CNContactPickerContentDelegate, NSCopying;
@class NSExtension, NSString;

@interface CNContactPickerHostViewController : _UIRemoteViewController <CNContactPickerContentViewController, CNContactPickerHostProtocol> {

	void* _addressBook;
	id<CNContactPickerContentDelegate> _delegate;
	id<NSCopying> _currentRequestIdentifier;
	NSExtension* _extension;

}

@property (nonatomic,retain) id<NSCopying> currentRequestIdentifier;              //@synthesize currentRequestIdentifier=_currentRequestIdentifier - In the implementation block
@property (nonatomic,retain) NSExtension * extension;                             //@synthesize extension=_extension - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (__weak) id<CNContactPickerContentDelegate> delegate;                   //@synthesize delegate=_delegate - In the implementation block
@property (assign) void* addressBook; 
+(char)getViewController:(/*^block*/id)arg1 ;
+(id)contactPickerExtension;
+(id)contextForIdentifier:(id)arg1 ;
-(void)setupWithOptions:(id)arg1 readyBlock:(/*^block*/id)arg2 ;
-(void)pickerDidCancel;
-(void)pickerDidSelectContactWithRecordID:(int)arg1 vCardData:(id)arg2 propertyKey:(id)arg3 propertyIdentifier:(int)arg4 ;
-(void)setCurrentRequestIdentifier:(id<NSCopying>)arg1 ;
-(id<NSCopying>)currentRequestIdentifier;
-(void)setAddressBook:(void*)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id<CNContactPickerContentDelegate>)arg1 ;
-(id<CNContactPickerContentDelegate>)delegate;
-(void)invalidate;
-(void)setExtension:(NSExtension *)arg1 ;
-(NSExtension *)extension;
-(void*)addressBook;
@end

