/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:01 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/NSNotification.h>

@class PLChangeNotificationCenter;

@interface PLChangeNotification : NSNotification

@property (nonatomic,retain,readonly) PLChangeNotificationCenter * changeNotificationCenter; 
+(id)notificationWithName:(id)arg1 object:(id)arg2 userInfo:(id)arg3 ;
-(PLChangeNotificationCenter *)changeNotificationCenter;
-(void)_calculateDiffs;
@end

