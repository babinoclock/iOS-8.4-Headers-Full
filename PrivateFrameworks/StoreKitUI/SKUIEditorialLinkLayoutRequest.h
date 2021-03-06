/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:42 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/SKUILayoutRequest.h>

@class NSArray, NSString;

@interface SKUIEditorialLinkLayoutRequest : NSObject <SKUILayoutRequest> {

	NSArray* _links;
	float _width;

}

@property (nonatomic,copy) NSArray * links;                         //@synthesize links=_links - In the implementation block
@property (assign,nonatomic) float width;                           //@synthesize width=_width - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) Class layoutClass; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(float)width;
-(NSArray *)links;
-(void)setWidth:(float)arg1 ;
-(void)setLinks:(NSArray *)arg1 ;
-(Class)layoutClass;
@end

