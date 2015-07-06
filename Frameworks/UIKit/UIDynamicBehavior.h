/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:39:04 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class UIDynamicAnimator, NSMutableArray, NSArray;

@interface UIDynamicBehavior : NSObject {

	UIDynamicAnimator* _context;
	NSMutableArray* _items;
	NSMutableArray* _behaviors;
	NSMutableArray* _addedBehaviors;
	char __isPrimitiveBehavior;
	/*^block*/id _action;

}

@property (nonatomic,copy,readonly) NSArray * childBehaviors; 
@property (nonatomic,copy) id action;                                                             //@synthesize action=_action - In the implementation block
@property (nonatomic,readonly) UIDynamicAnimator * dynamicAnimator; 
@property (assign,setter=_isPrimitiveBehavior:,nonatomic) char _isPrimitiveBehavior;              //@synthesize _isPrimitiveBehavior=__isPrimitiveBehavior - In the implementation block
+(void)initialize;
-(void)dealloc;
-(id)init;
-(id)description;
-(id)action;
-(id)_context;
-(id)items;
-(void)setAction:(id)arg1 ;
-(id)_items;
-(id)_init:(char)arg1 ;
-(void)_associate;
-(void)_dissociate;
-(void)_changedParameterForBody:(id)arg1 ;
-(void)_reevaluate:(unsigned)arg1 ;
-(id)_itemsDescription;
-(void)_setItems:(id)arg1 ;
-(void)_setContext:(id)arg1 ;
-(void)willMoveToAnimator:(id)arg1 ;
-(NSArray *)childBehaviors;
-(void)_step;
-(char)allowsAnimatorToStop;
-(void)_isPrimitiveBehavior:(char)arg1 ;
-(char)_isPrimitiveBehavior;
-(UIDynamicAnimator *)dynamicAnimator;
-(void)addChildBehavior:(id)arg1 ;
-(void)removeChildBehavior:(id)arg1 ;
@end

