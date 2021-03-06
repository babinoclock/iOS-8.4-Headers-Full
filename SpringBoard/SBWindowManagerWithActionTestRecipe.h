/*
* This header is generated by classdump-dyld 0.7
* on Monday, July 6, 2015 at 12:14:50 AM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SBTestRecipe.h>

@class BKSProcessAssertion, NSString;

@interface SBWindowManagerWithActionTestRecipe : NSObject <SBTestRecipe> {

	BKSProcessAssertion* _assertion;

}

@property (nonatomic,retain) BKSProcessAssertion * assertion;              //@synthesize assertion=_assertion - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)title;
-(void)handleVolumeIncrease;
-(void)handleVolumeDecrease;
-(void)setAssertion:(BKSProcessAssertion *)arg1 ;
-(void)invalidateProcessAssertion;
-(void)takeProcessAssertionWithSequenceNumber:(int)arg1 ;
-(BKSProcessAssertion *)assertion;
@end

