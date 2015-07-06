/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:40:38 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class MPMediaQuery;

@interface MusicGeniusIndexedSubQuery : NSObject {

	unsigned _index;
	MPMediaQuery* _itemsQuery;

}

@property (nonatomic,readonly) unsigned index;                         //@synthesize index=_index - In the implementation block
@property (nonatomic,readonly) MPMediaQuery * itemsQuery;              //@synthesize itemsQuery=_itemsQuery - In the implementation block
-(MPMediaQuery *)itemsQuery;
-(unsigned)index;
-(id)initWithIndex:(unsigned)arg1 itemsQuery:(id)arg2 ;
@end

