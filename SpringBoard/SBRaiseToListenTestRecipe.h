/*
* This header is generated by classdump-dyld 0.7
* on Monday, July 6, 2015 at 12:14:55 AM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SBTestRecipe.h>

@class NSString;

@interface SBRaiseToListenTestRecipe : NSObject <SBTestRecipe>

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)title;
-(void)handleVolumeIncrease;
-(void)handleVolumeDecrease;
-(void)_triggerRaiseGesture;
@end

