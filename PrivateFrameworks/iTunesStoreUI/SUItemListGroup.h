/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:43:30 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableArray, SUItem, NSString;

@interface SUItemListGroup : NSObject {

	NSMutableArray* _items;
	SUItem* _separatorItem;

}

@property (nonatomic,readonly) NSString * indexBarTitle; 
@property (nonatomic,retain) NSMutableArray * items;                  //@synthesize items=_items - In the implementation block
@property (nonatomic,retain) SUItem * separatorItem;                  //@synthesize separatorItem=_separatorItem - In the implementation block
-(void)dealloc;
-(id)description;
-(NSMutableArray *)items;
-(void)setItems:(NSMutableArray *)arg1 ;
-(NSString *)indexBarTitle;
-(SUItem *)separatorItem;
-(void)setSeparatorItem:(SUItem *)arg1 ;
@end

