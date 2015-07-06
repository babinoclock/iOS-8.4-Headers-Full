/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:26 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SAUISnippet.h>

@class NSArray, NSNumber, NSURL, SAMovieV2ReviewListSnippet, NSString, SAMovieV2ShowtimeSnippet, SAMovieV2TheaterShowtimeListSnippet, NSDate;

@interface SAMovieV2MovieDetailSnippet : SAUISnippet

@property (nonatomic,copy) NSArray * actors; 
@property (nonatomic,copy) NSNumber * availableOnItunesForPurchase; 
@property (nonatomic,copy) NSNumber * availableOnItunesForRent; 
@property (nonatomic,copy) NSArray * directors; 
@property (nonatomic,copy) NSArray * genres; 
@property (nonatomic,copy) NSURL * hiresTrailerUri; 
@property (nonatomic,copy) NSURL * iTunesUri; 
@property (assign,nonatomic) char is3d; 
@property (nonatomic,copy) NSURL * lowresTrailerUri; 
@property (nonatomic,copy) NSURL * movieIdentifier; 
@property (nonatomic,retain) SAMovieV2ReviewListSnippet * movieReviewListSnippet; 
@property (nonatomic,copy) NSString * name; 
@property (nonatomic,copy) NSNumber * playTrailer; 
@property (nonatomic,copy) NSArray * posterImages; 
@property (nonatomic,copy) NSNumber * qualityRating; 
@property (nonatomic,copy) NSString * rating; 
@property (assign,nonatomic) int runtimeInMinutes; 
@property (nonatomic,retain) SAMovieV2ShowtimeSnippet * showtimeSnippet; 
@property (nonatomic,copy) NSArray * studios; 
@property (nonatomic,copy) NSString * synopsis; 
@property (nonatomic,retain) SAMovieV2TheaterShowtimeListSnippet * theaterShowtimeListSnippet; 
@property (nonatomic,copy) NSString * theaterShowtimeSearchRegionDescription; 
@property (nonatomic,copy) NSDate * theatricalReleaseDate; 
+(id)movieDetailSnippet;
+(id)movieDetailSnippetWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(NSString *)rating;
-(void)setRating:(NSString *)arg1 ;
-(NSArray *)directors;
-(void)setDirectors:(NSArray *)arg1 ;
-(id)encodedClassName;
-(NSArray *)posterImages;
-(void)setPosterImages:(NSArray *)arg1 ;
-(NSNumber *)qualityRating;
-(void)setQualityRating:(NSNumber *)arg1 ;
-(NSDate *)theatricalReleaseDate;
-(void)setTheatricalReleaseDate:(NSDate *)arg1 ;
-(NSURL *)iTunesUri;
-(void)setITunesUri:(NSURL *)arg1 ;
-(SAMovieV2TheaterShowtimeListSnippet *)theaterShowtimeListSnippet;
-(NSArray *)actors;
-(void)setActors:(NSArray *)arg1 ;
-(NSArray *)genres;
-(void)setGenres:(NSArray *)arg1 ;
-(char)is3d;
-(void)setIs3d:(char)arg1 ;
-(int)runtimeInMinutes;
-(void)setRuntimeInMinutes:(int)arg1 ;
-(NSArray *)studios;
-(void)setStudios:(NSArray *)arg1 ;
-(NSString *)synopsis;
-(void)setSynopsis:(NSString *)arg1 ;
-(NSString *)theaterShowtimeSearchRegionDescription;
-(void)setTheaterShowtimeSearchRegionDescription:(NSString *)arg1 ;
-(NSNumber *)playTrailer;
-(void)setPlayTrailer:(NSNumber *)arg1 ;
-(SAMovieV2ShowtimeSnippet *)showtimeSnippet;
-(void)setShowtimeSnippet:(SAMovieV2ShowtimeSnippet *)arg1 ;
-(void)setTheaterShowtimeListSnippet:(SAMovieV2TheaterShowtimeListSnippet *)arg1 ;
-(NSNumber *)availableOnItunesForPurchase;
-(void)setAvailableOnItunesForPurchase:(NSNumber *)arg1 ;
-(NSNumber *)availableOnItunesForRent;
-(void)setAvailableOnItunesForRent:(NSNumber *)arg1 ;
-(NSURL *)hiresTrailerUri;
-(void)setHiresTrailerUri:(NSURL *)arg1 ;
-(NSURL *)lowresTrailerUri;
-(void)setLowresTrailerUri:(NSURL *)arg1 ;
-(NSURL *)movieIdentifier;
-(void)setMovieIdentifier:(NSURL *)arg1 ;
-(SAMovieV2ReviewListSnippet *)movieReviewListSnippet;
-(void)setMovieReviewListSnippet:(SAMovieV2ReviewListSnippet *)arg1 ;
@end

