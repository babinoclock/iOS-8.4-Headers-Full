/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:39:53 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/NSProgress.h>

@class NSMutableDictionary;

@interface BRCProgress : NSProgress {

	NSMutableDictionary* _progressByAliasContainerID;
	char _isPublished;

}
+(id)progressWithBRCDocumentItem:(id)arg1 totalSize:(long long)arg2 kind:(id)arg3 ;
+(id)downloadProgressWithBRCDocumentItem:(id)arg1 ;
+(id)uploadProgressWithBRCDocumentItem:(id)arg1 transferSize:(unsigned long long)arg2 ;
-(void)brc_publish;
-(void)brc_unpublish;
-(void)addAliasItem:(id)arg1 ;
-(void)setCompletedUnitCount:(long long)arg1 ;
@end

