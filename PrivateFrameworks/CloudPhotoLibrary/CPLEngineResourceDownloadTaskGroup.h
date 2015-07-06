/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:40:03 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableSet, NSSet;

@interface CPLEngineResourceDownloadTaskGroup : NSObject {

	NSMutableSet* _activeTasks;

}

@property (nonatomic,readonly) NSSet * activeTasks;                          //@synthesize activeTasks=_activeTasks - In the implementation block
@property (getter=isComplete,nonatomic,readonly) char complete; 
-(char)isComplete;
-(id)initWithTasks:(id)arg1 ;
-(char)isTrackingTask:(id)arg1 ;
-(void)taskDidComplete:(id)arg1 ;
-(NSSet *)activeTasks;
@end
