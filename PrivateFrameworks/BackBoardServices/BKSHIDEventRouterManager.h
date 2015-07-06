/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:39:30 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <BackBoardServices/BKSHIDEventRouterManagerBase.h>

@interface BKSHIDEventRouterManager : BKSHIDEventRouterManagerBase {

	char _needsFlush;

}

@property (assign,nonatomic) char needsFlush;              //@synthesize needsFlush=_needsFlush - In the implementation block
+(id)sharedInstance;
-(void)dealloc;
-(id)init;
-(void)_routerUpdated:(id)arg1 ;
-(void)setEventRouters:(id)arg1 ;
-(void)_flushTrigger;
-(char)needsFlush;
-(void)setNeedsFlush:(char)arg1 ;
-(void)_flush;
@end

