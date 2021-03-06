/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:55 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSDictionary, NSArray;

@interface SSVPlaybackItem : NSObject {

	NSDictionary* _itemDictionary;

}

@property (nonatomic,copy,readonly) NSDictionary * itemDictionary;              //@synthesize itemDictionary=_itemDictionary - In the implementation block
@property (nonatomic,copy,readonly) id itemIdentifier; 
@property (nonatomic,readonly) NSArray * assets; 
-(id)assetForFlavor:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(NSArray *)assets;
-(id)itemIdentifier;
-(id)initWithItemDictionary:(id)arg1 ;
-(void)_enumerateAssetsUsingBlock:(/*^block*/id)arg1 ;
-(NSDictionary *)itemDictionary;
@end

