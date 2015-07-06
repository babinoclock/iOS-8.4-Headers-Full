/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:50 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/SKUISettingsHeaderFooterDescription.h>

@protocol SKUISuggestedHandlesSettingsHeaderFooterDescriptionDelegate;
@class SKUIClientContext, NSArray;

@interface SKUISuggestedHandlesSettingsHeaderFooterDescription : SKUISettingsHeaderFooterDescription {

	SKUIClientContext* _clientContext;
	NSArray* _suggestedHandles;
	id<SKUISuggestedHandlesSettingsHeaderFooterDescriptionDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<SKUISuggestedHandlesSettingsHeaderFooterDescriptionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setDelegate:(id<SKUISuggestedHandlesSettingsHeaderFooterDescriptionDelegate>)arg1 ;
-(id<SKUISuggestedHandlesSettingsHeaderFooterDescriptionDelegate>)delegate;
-(Class)_viewClassForSettingsHeaderFooterDescription:(id)arg1 ;
-(id)initWithSuggestedHandles:(id)arg1 clientContext:(id)arg2 delegate:(id)arg3 ;
-(id)helpText;
-(void)selectedHandleAtIndex:(unsigned)arg1 ;
-(id)suggestedHandles;
@end

