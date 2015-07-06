/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:45 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/NSCopying.h>

@class SKUIViewElement;

@interface _SKUIDynamicGridSizeCacheKey : NSObject <NSCopying> {

	int _position;
	SKUIViewElement* _viewElement;

}

@property (assign,nonatomic) int position;                               //@synthesize position=_position - In the implementation block
@property (nonatomic,retain) SKUIViewElement * viewElement;              //@synthesize viewElement=_viewElement - In the implementation block
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setPosition:(int)arg1 ;
-(int)position;
-(SKUIViewElement *)viewElement;
-(void)setViewElement:(SKUIViewElement *)arg1 ;
-(char)__isSKUIDynamicGridSizeCacheKey;
@end

