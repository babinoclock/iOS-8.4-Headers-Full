/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:41 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/SKUICachedLayout.h>

@class NSArray, NSString;

@interface SKUIEditorialLinkLayout : NSObject <SKUICachedLayout> {

	CGSize* _sizes;
	CGSize _totalSize;
	NSArray* _links;

}

@property (nonatomic,readonly) NSArray * links;                     //@synthesize links=_links - In the implementation block
@property (nonatomic,readonly) CGSize totalSize;                    //@synthesize totalSize=_totalSize - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(NSArray *)links;
-(CGSize)totalSize;
-(void)enumerateLinesUsingBlock:(/*^block*/id)arg1 ;
-(id)initWithLayoutRequest:(id)arg1 ;
-(CGSize)sizeForLinkAtIndex:(int)arg1 ;
@end

