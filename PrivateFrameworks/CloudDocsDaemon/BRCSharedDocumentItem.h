/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:39:54 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudDocsDaemon/BRCDocumentItem.h>

@class NSString;

@interface BRCSharedDocumentItem : BRCDocumentItem

@property (nonatomic,readonly) NSString * enclosurePathRelativeToRoot; 
-(id)parentFileID;
-(NSString *)enclosurePathRelativeToRoot;
-(id)aliasItemID;
-(float)prepareDeletionSyncUpWithOperation:(id)arg1 defaults:(id)arg2 ;
@end
