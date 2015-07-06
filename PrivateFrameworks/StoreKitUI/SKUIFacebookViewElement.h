/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:44 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/SKUIViewElement.h>

@class NSString;

@interface SKUIFacebookViewElement : SKUIViewElement {

	int _facebookType;
	NSString* _urlString;

}

@property (nonatomic,readonly) int facebookType;                  //@synthesize facebookType=_facebookType - In the implementation block
@property (nonatomic,readonly) NSString * URLString;              //@synthesize urlString=_urlString - In the implementation block
-(NSString *)URLString;
-(id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3 ;
-(id)applyUpdatesWithElement:(id)arg1 ;
-(int)pageComponentType;
-(int)facebookType;
@end

