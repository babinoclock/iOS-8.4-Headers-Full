/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:43:28 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableDictionary, NSArray;

@interface SUVariableCellConfigurationCache : NSObject {

	NSMutableDictionary* _caches;
	id _cellContext;
	float _tableHeight;

}

@property (nonatomic,readonly) NSArray * caches; 
@property (nonatomic,retain) id cellContext;                  //@synthesize cellContext=_cellContext - In the implementation block
-(void)dealloc;
-(void)reset;
-(void)resetLayoutCaches;
-(id)cacheForClass:(Class)arg1 ;
-(id)cellContext;
-(id)initWithTableHeight:(float)arg1 ;
-(void)setCellContext:(id)arg1 ;
-(NSArray *)caches;
@end

