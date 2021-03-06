/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:49 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/SKUIIndexBarEntryListController.h>

@class SKUIIndexBarEntryListViewElement, NSSet, IKViewElementStyle;

@interface SKUIIndexBarLocaleStandardEntryListController : SKUIIndexBarEntryListController {

	SKUIIndexBarEntryListViewElement* _entryListViewElement;
	NSSet* _requiredVisibilitySet;
	IKViewElementStyle* _style;

}
-(id)entryDescriptorAtIndex:(int)arg1 ;
-(int)numberOfEntryDescriptors;
-(id)targetIndexBarEntryIDForEntryDescriptorAtIndex:(int)arg1 returningRelativeSectionIndex:(out int*)arg2 ;
-(void)reloadViewElementData;
-(id)initWithSKUIIndexBarEntryListViewElement:(id)arg1 ;
@end

