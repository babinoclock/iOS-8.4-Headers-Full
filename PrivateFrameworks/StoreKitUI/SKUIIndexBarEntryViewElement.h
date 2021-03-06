/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:47 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/SKUIViewElement.h>

@class NSString, SKUIViewElement;

@interface SKUIIndexBarEntryViewElement : SKUIViewElement {

	NSString* _targetIndexBarEntryID;
	int _visibilityPriority;

}

@property (nonatomic,readonly) SKUIViewElement * childElement; 
@property (nonatomic,copy,readonly) NSString * targetIndexBarEntryID;              //@synthesize targetIndexBarEntryID=_targetIndexBarEntryID - In the implementation block
@property (nonatomic,readonly) int visibilityPriority;                             //@synthesize visibilityPriority=_visibilityPriority - In the implementation block
-(id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3 ;
-(id)applyUpdatesWithElement:(id)arg1 ;
-(int)visibilityPriority;
-(SKUIViewElement *)childElement;
-(NSString *)targetIndexBarEntryID;
@end

