/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:29 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MusicLibrary/MusicLibrary-Structs.h>
#import <MusicLibrary/NSCopying.h>

@class NSData, NSString, NSURL;

@interface MLTrackImportChapter : NSObject <NSCopying> {

	NSData* _imageData;
	NSString* _imageCacheKey;
	unsigned _startTimeInMilliseconds;
	NSString* _title;
	NSURL* _url;
	NSString* _urlTitle;

}

@property (nonatomic,copy) NSData * imageData;                              //@synthesize imageData=_imageData - In the implementation block
@property (nonatomic,copy) NSString * imageCacheKey;                        //@synthesize imageCacheKey=_imageCacheKey - In the implementation block
@property (assign,nonatomic) unsigned startTimeInMilliseconds;              //@synthesize startTimeInMilliseconds=_startTimeInMilliseconds - In the implementation block
@property (nonatomic,copy) NSString * title;                                //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSURL * URL;                                     //@synthesize url=_url - In the implementation block
@property (nonatomic,copy) NSString * URLTitle;                             //@synthesize urlTitle=_urlTitle - In the implementation block
-(void)setTitle:(NSString *)arg1 ;
-(id)description;
-(int)compare:(id)arg1 ;
-(NSString *)title;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSURL *)URL;
-(void)setURL:(NSURL *)arg1 ;
-(unsigned)startTimeInMilliseconds;
-(NSData *)imageData;
-(NSString *)imageCacheKey;
-(NSString *)URLTitle;
-(void)normalizeProperties;
-(char)isEqualIgnoringTimesAndTitle:(id)arg1 ;
-(void)setImageData:(NSData *)arg1 ;
-(void)setStartTimeInMilliseconds:(unsigned)arg1 ;
-(void)setURLTitle:(NSString *)arg1 ;
-(void)setImageCacheKey:(NSString *)arg1 ;
@end

