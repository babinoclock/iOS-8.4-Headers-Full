/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:43:17 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/WebContentAnalysis.framework/WebContentAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface WFTagFactory : NSObject {

	NSMutableDictionary* sharedTags;

}
+(id)tagsForWebpage:(id)arg1 ;
+(id)defaultFactory;
-(void)dealloc;
-(id)init;
-(id)tagWithClass:(Class)arg1 webpage:(id)arg2 ;
@end

