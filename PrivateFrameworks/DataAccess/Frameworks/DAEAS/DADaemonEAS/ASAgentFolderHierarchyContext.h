/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:40:23 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DADaemonEAS.bundle/DADaemonEAS
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSArray;

@interface ASAgentFolderHierarchyContext : NSObject {

	char _isFirstSync;
	NSArray* _oldFolders;

}

@property (assign,nonatomic) char isFirstSync;                  //@synthesize isFirstSync=_isFirstSync - In the implementation block
@property (nonatomic,retain) NSArray * oldFolders;              //@synthesize oldFolders=_oldFolders - In the implementation block
-(void)setIsFirstSync:(char)arg1 ;
-(void)setOldFolders:(NSArray *)arg1 ;
-(char)isFirstSync;
-(NSArray *)oldFolders;
@end

