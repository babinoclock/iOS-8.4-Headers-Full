/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:22 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SADomainCommand.h>
#import <SAObjects/SATimerTimerAction.h>

@class NSString;

@interface SATimerPause : SADomainCommand <SATimerTimerAction>

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)pause;
+(id)pauseWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(char)requiresResponse;
@end

