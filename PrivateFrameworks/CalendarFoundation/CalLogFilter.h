/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:39:35 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSArray, NSSet;

@interface CalLogFilter : NSObject {

	int _minimumLevel;
	NSArray* _includes;
	NSArray* _excludes;
	NSArray* _includesAsRegexes;
	NSArray* _excludesAsRegexes;
	NSSet* _includesRegardlessOfLevel;

}

@property (assign,nonatomic) int minimumLevel;                             //@synthesize minimumLevel=_minimumLevel - In the implementation block
@property (nonatomic,copy) NSArray * includes;                             //@synthesize includes=_includes - In the implementation block
@property (nonatomic,copy) NSArray * excludes;                             //@synthesize excludes=_excludes - In the implementation block
@property (nonatomic,copy) NSSet * includesRegardlessOfLevel;              //@synthesize includesRegardlessOfLevel=_includesRegardlessOfLevel - In the implementation block
@property (nonatomic,retain) NSArray * includesAsRegexes;                  //@synthesize includesAsRegexes=_includesAsRegexes - In the implementation block
@property (nonatomic,retain) NSArray * excludesAsRegexes;                  //@synthesize excludesAsRegexes=_excludesAsRegexes - In the implementation block
-(int)minimumLevel;
-(id)init;
-(id)description;
-(void)setMinimumLevel:(int)arg1 ;
-(void)setIncludes:(NSArray *)arg1 ;
-(void)setExcludes:(NSArray *)arg1 ;
-(NSArray *)includes;
-(NSArray *)excludes;
-(NSArray *)includesAsRegexes;
-(NSSet *)includesRegardlessOfLevel;
-(id)generateRegexesForPatterns:(id)arg1 ;
-(void)setIncludesAsRegexes:(NSArray *)arg1 ;
-(void)setExcludesAsRegexes:(NSArray *)arg1 ;
-(char)proceedProcessingEnvelope:(id)arg1 ;
-(NSArray *)excludesAsRegexes;
-(void)setIncludesRegardlessOfLevel:(NSSet *)arg1 ;
@end
