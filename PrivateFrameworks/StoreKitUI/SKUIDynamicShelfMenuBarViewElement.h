/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:43 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/SKUIShelfMenuBarViewElement.h>
#import <StoreKitUI/SKUIDynamicShelfViewElement.h>

@class SKUIViewElement, NSString;

@interface SKUIDynamicShelfMenuBarViewElement : SKUIShelfMenuBarViewElement <SKUIDynamicShelfViewElement> {

	SKUIViewElement* _cellTemplateViewElement;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) SKUIViewElement * cellTemplateViewElement; 
@property (nonatomic,readonly) id<SKUIEntityProviding> entityProvider; 
-(SKUIViewElement *)cellTemplateViewElement;
-(id)applyUpdatesWithElement:(id)arg1 ;
-(char)isDynamicContainer;
-(void)setShelfItemViewElementValidator:(/*^block*/id)arg1 ;
@end

