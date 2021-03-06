/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:45 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class WDDocument, NSMutableArray;

@interface WDList : NSObject {

	WDDocument* mDocument;
	long mListId;
	long mListDefinitionId;
	NSMutableArray* mLevelOverrides;

}

@property (nonatomic,readonly) long listId; 
@property (nonatomic,readonly) long listDefinitionId; 
-(void)dealloc;
-(id)description;
-(long)listDefinitionId;
-(long)listId;
-(unsigned)levelOverrideCount;
-(id)levelOverrideAt:(unsigned)arg1 ;
-(id)levelOverrideForLevel:(unsigned char)arg1 ;
-(id)levelOverrides;
-(id)initWithDocument:(id)arg1 listId:(long)arg2 listDefinitionId:(long)arg3 ;
-(id)addLevelOverrideWithLevel:(unsigned char)arg1 ;
@end

