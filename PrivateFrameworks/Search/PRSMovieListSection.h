/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:31 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/Search.framework/Search
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

@class NSString, NSArray;


@protocol PRSMovieListSection <PRSSection>
@property (nonatomic,retain) NSString * title; 
@property (nonatomic,retain) NSString * subtitle; 
@property (nonatomic,retain) NSArray * movies; 
@optional
-(NSString *)subtitle;
-(void)setSubtitle:(id)arg1;

@required
-(void)setTitle:(id)arg1;
-(NSString *)title;
-(NSArray *)movies;
-(void)setMovies:(id)arg1;

@end

