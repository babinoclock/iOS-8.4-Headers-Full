/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:39:33 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <BulletinBoard/BBAction.h>

@class NSArray;

@interface BBActionGroup : BBAction {

	NSArray* _actions;

}

@property (nonatomic,copy) NSArray * actions;              //@synthesize actions=_actions - In the implementation block
+(id)actionGroupWithActions:(id)arg1 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(NSArray *)actions;
-(void)setActions:(NSArray *)arg1 ;
@end
