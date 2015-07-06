/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:31 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <MusicLibrary/MusicLibrary-Structs.h>
@class NSDictionary, ML3MusicLibrary, NSString, NSURL;

@interface ML3Artwork : NSObject {

	int _artworkType;
	int _sourceType;
	NSDictionary* _interestDictionary;
	ML3MusicLibrary* _musicLibrary;
	NSString* _artworkToken;
	NSString* _relativePath;
	NSURL* _originalFileURL;

}

@property (nonatomic,__weak,readonly) ML3MusicLibrary * musicLibrary;              //@synthesize musicLibrary=_musicLibrary - In the implementation block
@property (nonatomic,readonly) NSString * artworkToken;                            //@synthesize artworkToken=_artworkToken - In the implementation block
@property (nonatomic,readonly) int artworkType;                                    //@synthesize artworkType=_artworkType - In the implementation block
@property (nonatomic,readonly) int sourceType;                                     //@synthesize sourceType=_sourceType - In the implementation block
@property (nonatomic,readonly) NSString * relativePath;                            //@synthesize relativePath=_relativePath - In the implementation block
@property (nonatomic,retain) NSDictionary * interestDictionary;                    //@synthesize interestDictionary=_interestDictionary - In the implementation block
@property (nonatomic,readonly) NSURL * originalFileURL;                            //@synthesize originalFileURL=_originalFileURL - In the implementation block
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(int)sourceType;
-(id)initWithToken:(id)arg1 artworkType:(int)arg2 musicLibrary:(id)arg3 ;
-(NSURL *)originalFileURL;
-(ML3MusicLibrary *)musicLibrary;
-(id)initWithToken:(id)arg1 relativePath:(id)arg2 artworkType:(int)arg3 musicLibrary:(id)arg4 ;
-(NSString *)relativePath;
-(void)_faultInProperties;
-(id)_interestDataFromInterestDictionary:(id)arg1 ;
-(NSString *)artworkToken;
-(id)_interestDictionaryFromInterestData:(id)arg1 ;
-(id)fileURLForSize:(CGSize)arg1 ;
-(int)artworkType;
-(NSDictionary *)interestDictionary;
-(void)setInterestDictionary:(NSDictionary *)arg1 ;
@end

