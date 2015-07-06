/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:25 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Message/Message-Structs.h>
#import <Message/NSCopying.h>
#import <Message/NSMutableCopying.h>

@interface MFSparseMutable64IndexSet : NSObject <NSCopying, NSMutableCopying> {

	unsigned _count;
	unsigned _storageSize;
	unsigned _cursor;
	unsigned long long* _storage;

}
+(id)indexSet;
-(void)dealloc;
-(unsigned)count;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)addIndex:(unsigned long long)arg1 ;
-(unsigned long long)firstIndex;
-(unsigned long long)indexGreaterThanIndex:(unsigned long long)arg1 ;
-(char)containsIndex:(unsigned long long)arg1 ;
-(void)removeIndex:(unsigned long long)arg1 ;
-(void)addIndexes:(id)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(unsigned long)_insertionPositionOfIndex:(unsigned long long)arg1 ;
-(void)_incrementStorageIfNecessaryForCount:(unsigned)arg1 ;
-(unsigned long)_positionOfIndex:(unsigned long long)arg1 ;
-(void)_garbageCollectStorageIfNecessary;
@end

