/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:40:32 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@class NSURL, NSMutableArray;

@interface MusicSearchRecentsStorage : UIViewController {

	int _limit;
	NSURL* _persistenceURL;
	NSMutableArray* _recents;
	char _hasChanges;
	int _maximumNumberOfRecents;

}

@property (readonly) int maximumNumberOfRecents;              //@synthesize maximumNumberOfRecents=_maximumNumberOfRecents - In the implementation block
+(id)sharedRecentsStorage;
-(void)save;
-(id)recentSearches;
-(void)load;
-(void)clear;
-(id)initWithLimit:(int)arg1 persistenceURL:(id)arg2 ;
-(void)_addRecent:(id)arg1 replacingRecent:(id)arg2 ;
-(void)addRecent:(id)arg1 ;
-(void)replaceRecent:(id)arg1 withRecent:(id)arg2 ;
-(int)maximumNumberOfRecents;
@end

