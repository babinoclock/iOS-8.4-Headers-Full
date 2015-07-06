/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:43:17 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/WebContentAnalysis.framework/WebContentAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSURL, NSString;

@interface WFBlockPage : NSObject {

	NSURL* pageTemplateURL;
	NSString* userVisibleURLString;
	NSString* formActionURLString;
	NSString* preferredLanguage;

}

@property (readonly) NSURL * pageTemplateURL; 
@property (retain) NSString * userVisibleURLString; 
@property (retain) NSString * formActionURLString; 
-(void)dealloc;
-(id)page;
-(id)_initWithUsername:(id)arg1 fileName:(id)arg2 ;
-(id)_fileContentWithName:(id)arg1 extension:(id)arg2 ;
-(id)_blockpage;
-(id)_css;
-(id)initNoOveridePageWithUsername:(id)arg1 ;
-(id)initWithUsername:(id)arg1 overridesAllowded:(char)arg2 ;
-(NSURL *)pageTemplateURL;
-(void)setUserVisibleURLString:(NSString *)arg1 ;
-(NSString *)formActionURLString;
-(void)setFormActionURLString:(NSString *)arg1 ;
-(NSString *)userVisibleURLString;
@end

