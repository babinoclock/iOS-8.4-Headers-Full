/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:36:35 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreData/NSMergeConflict.h>

@class NSDictionary;

@interface PFUbiquityMergeConflict : NSMergeConflict {

	NSDictionary* _ancestorSnapshot;

}

@property (retain) NSDictionary * ancestorSnapshot;              //@synthesize ancestorSnapshot=_ancestorSnapshot - In the implementation block
-(id)initWithSource:(id)arg1 newVersion:(unsigned)arg2 oldVersion:(unsigned)arg3 cachedSnapshot:(id)arg4 persistedSnapshot:(id)arg5 ;
-(NSDictionary *)ancestorSnapshot;
-(void)setAncestorSnapshot:(NSDictionary *)arg1 ;
-(void)dealloc;
@end

