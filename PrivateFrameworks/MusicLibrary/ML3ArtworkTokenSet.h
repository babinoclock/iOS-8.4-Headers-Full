/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:28 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class ML3Entity, NSString, NSDictionary;

@interface ML3ArtworkTokenSet : NSObject {

	ML3Entity* _entity;
	int _artworkType;
	NSString* _availableArtworkToken;
	NSString* _fetchableArtworkToken;
	int _fetchableArtworkSourceType;
	NSDictionary* _artworkSourceToTokenMap;
	char _faultedInBestTokens;
	char _faultedInTokens;
	double _retrievalTime;

}

@property (assign,nonatomic) double retrievalTime;                            //@synthesize retrievalTime=_retrievalTime - In the implementation block
@property (nonatomic,readonly) NSString * availableArtworkToken; 
@property (nonatomic,readonly) NSString * fetchableArtworkToken; 
@property (nonatomic,readonly) int fetchableArtworkSourceType; 
-(void)_faultInBestTokens;
-(void)_faultInTokens;
-(id)initWithEntity:(id)arg1 artworkType:(int)arg2 ;
-(NSString *)availableArtworkToken;
-(NSString *)fetchableArtworkToken;
-(int)fetchableArtworkSourceType;
-(id)artworkTokenForSource:(int)arg1 ;
-(double)retrievalTime;
-(void)setRetrievalTime:(double)arg1 ;
@end
