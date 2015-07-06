/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:40 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSMutableArray, NSMutableDictionary;

@interface OCXRelationships : NSObject {

	NSString* mPath;
	NSMutableArray* mRelationships;
	NSMutableDictionary* mRelationshipMap;
	unsigned mNextId;

}
-(void)dealloc;
-(id)path;
-(char)isEmpty;
-(id)initWithPath:(id)arg1 ;
-(id)addRelationshipForKey:(id)arg1 type:(id)arg2 target:(id)arg3 external:(char)arg4 ;
-(id)addRelationshipForKey:(id)arg1 type:(id)arg2 target:(id)arg3 ;
-(id)idForKey:(id)arg1 ;
-(void)writeRelationshipsToFilename:(id)arg1 stream:(id)arg2 ;
@end

