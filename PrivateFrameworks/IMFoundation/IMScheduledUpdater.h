/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:10 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <IMFoundation/IMManualUpdater.h>

@class NSCountedSet;

@interface IMScheduledUpdater : IMManualUpdater {

	NSCountedSet* _holdingUpdatesKeys;

}

@property (nonatomic,retain) NSCountedSet * holdingUpdatesKeys;              //@synthesize holdingUpdatesKeys=_holdingUpdatesKeys - In the implementation block
-(void)dealloc;
-(id)description;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(void)invalidate;
-(void)endHoldingUpdatesForKey:(id)arg1 ;
-(void)beginHoldingUpdatesForKey:(id)arg1 ;
-(char)isHoldingUpdates;
-(void)endHoldingUpdatesForAllKeys;
-(NSCountedSet *)holdingUpdatesKeys;
-(void)setHoldingUpdatesKeys:(NSCountedSet *)arg1 ;
-(void)setNeedsUpdate;
-(void)updateIfNeeded;
@end

