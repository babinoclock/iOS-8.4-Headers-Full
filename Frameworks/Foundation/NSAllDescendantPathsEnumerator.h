/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:36:56 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/NSDirectoryEnumerator.h>

@class NSString, NSArray, NSFileAttributes;

@interface NSAllDescendantPathsEnumerator : NSDirectoryEnumerator {

	NSString* path;
	NSArray* contents;
	unsigned idx;
	NSString* prepend;
	NSAllDescendantPathsEnumerator* under;
	NSFileAttributes* directoryAttributes;
	NSString* pathToLastReportedItem;
	unsigned depth;
	char cross;
	char _padding[3];

}
+(id)newWithPath:(id)arg1 prepend:(id)arg2 attributes:(id)arg3 cross:(char)arg4 depth:(unsigned)arg5 ;
-(void)skipDescendents;
-(id)_under;
-(id)currentSubdirectoryAttributes;
-(void)dealloc;
-(id)nextObject;
-(unsigned)level;
-(void)skipDescendants;
-(id)fileAttributes;
-(id)directoryAttributes;
@end

