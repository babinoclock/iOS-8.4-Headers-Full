/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:38:45 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol UIWebSelectedItemPrivate;
@class NSArray;

@interface UIWebOptGroup : NSObject {

	id<UIWebSelectedItemPrivate> _group;
	NSArray* _options;
	int _offset;

}

@property (nonatomic,readonly) int offset;                                    //@synthesize offset=_offset - In the implementation block
@property (nonatomic,retain) id<UIWebSelectedItemPrivate> group;              //@synthesize group=_group - In the implementation block
@property (nonatomic,retain) NSArray * options;                               //@synthesize options=_options - In the implementation block
-(void)dealloc;
-(int)offset;
-(void)setGroup:(id<UIWebSelectedItemPrivate>)arg1 ;
-(void)setOptions:(NSArray *)arg1 ;
-(id)initWithGroup:(id)arg1 itemOffset:(int)arg2 ;
-(id<UIWebSelectedItemPrivate>)group;
-(NSArray *)options;
@end
