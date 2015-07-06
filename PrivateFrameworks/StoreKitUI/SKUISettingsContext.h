/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:46 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableDictionary, NSMutableArray, SKUIClientContext;

@interface SKUISettingsContext : NSObject {

	NSMutableDictionary* _elementTypeClass;
	NSMutableArray* _descriptionReusePool;
	NSMutableArray* _viewReusePool;
	SKUIClientContext* _clientContext;

}

@property (assign,nonatomic,__weak) SKUIClientContext * clientContext;              //@synthesize clientContext=_clientContext - In the implementation block
-(id)initWithClientContext:(id)arg1 ;
-(void)setClientContext:(SKUIClientContext *)arg1 ;
-(SKUIClientContext *)clientContext;
-(id)dequeueReusableSettingDescriptionForViewElement:(id)arg1 parent:(id)arg2 ;
-(void)recycleSettingDescriptions:(id)arg1 ;
-(void)_registerReuseClasses;
-(id)_dequeueReusableSettingDescriptionWithReuseIdentifier:(id)arg1 forViewElement:(id)arg2 parent:(id)arg3 ;
-(void)_registerClass:(Class)arg1 forReuseIdentifier:(id)arg2 ;
@end

