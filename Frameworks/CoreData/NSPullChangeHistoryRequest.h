/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:36:32 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreData/NSPersistentStoreRequest.h>

@class NSArray;

@interface NSPullChangeHistoryRequest : NSPersistentStoreRequest {

	NSArray* _generationTokens;

}
-(id)initWithGenerationTokens:(id)arg1 ;
-(id)generationTokens;
-(void)setGenerationTokens:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(unsigned)requestType;
@end

