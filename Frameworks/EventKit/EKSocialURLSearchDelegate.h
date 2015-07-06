/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:36:47 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <EventKit/ABSearchOperationDelegate.h>

@class NSString;

@interface EKSocialURLSearchDelegate : NSObject <ABSearchOperationDelegate> {

	/*^block*/id _searchCompleteHandler;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_completeWithRecord:(void*)arg1 ;
-(void)searchOperation:(id)arg1 didFindMatches:(id)arg2 moreComing:(char)arg3 ;
-(void)dealloc;
-(void)setCompletionHandler:(/*^block*/id)arg1 ;
@end

