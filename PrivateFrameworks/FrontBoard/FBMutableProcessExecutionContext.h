/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:40:30 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FrontBoard/FBProcessExecutionContext.h>

@class NSArray, NSDictionary, NSURL;

@interface FBMutableProcessExecutionContext : FBProcessExecutionContext

@property (nonatomic,retain) NSArray * arguments; 
@property (nonatomic,retain) NSDictionary * environment; 
@property (nonatomic,retain) NSURL * standardOutputURL; 
@property (nonatomic,retain) NSURL * standardErrorURL; 
@property (assign,nonatomic) char waitForDebugger; 
@property (assign,nonatomic) char disableASLR; 
@property (assign,nonatomic) char checkForLeaks; 
@property (assign,nonatomic) int launchIntent; 
@property (assign,nonatomic) double watchdogExtension; 
@property (assign,nonatomic) unsigned launchAssertionFlags; 
@end

