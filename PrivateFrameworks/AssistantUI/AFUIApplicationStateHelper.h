/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:39:30 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/AssistantUI.framework/AssistantUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class BKSApplicationStateMonitor, NSMutableArray;

@interface AFUIApplicationStateHelper : NSObject {

	BKSApplicationStateMonitor* _appStateMonitor;
	NSMutableArray* _foregroundAppInfos;

}
-(void)dealloc;
-(id)init;
-(void)_handleApplicationStateUpdate:(id)arg1 ;
-(id)foregroundAppInfos;
@end

