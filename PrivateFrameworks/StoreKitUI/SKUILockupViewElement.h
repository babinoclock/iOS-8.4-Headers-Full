/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:44 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/SKUIViewElement.h>

@class SKUIFullscreenImageViewElement;

@interface SKUILockupViewElement : SKUIViewElement {

	char _enabled;
	int _lockupViewType;
	char _selectable;

}

@property (nonatomic,readonly) char containsElementGroups; 
@property (nonatomic,readonly) SKUIFullscreenImageViewElement * fullscreenImage; 
@property (nonatomic,readonly) int lockupViewType;                                            //@synthesize lockupViewType=_lockupViewType - In the implementation block
@property (getter=isSelectable,nonatomic,readonly) char selectable;                           //@synthesize selectable=_selectable - In the implementation block
-(char)isEnabled;
-(char)isSelectable;
-(id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3 ;
-(id)applyUpdatesWithElement:(id)arg1 ;
-(int)pageComponentType;
-(SKUIFullscreenImageViewElement *)fullscreenImage;
-(int)lockupViewType;
-(char)containsElementGroups;
@end

