/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:37:32 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class AVMetadataItem, NSString, NSDictionary;

@interface MPTimedMetadata : NSObject {

	AVMetadataItem* _metadataItem;

}

@property (nonatomic,readonly) NSString * key; 
@property (nonatomic,readonly) NSString * keyspace; 
@property (nonatomic,readonly) id value; 
@property (nonatomic,readonly) double timestamp; 
@property (nonatomic,readonly) NSDictionary * allMetadata; 
-(id)_initWithMetadataItem:(id)arg1 ;
-(NSString *)keyspace;
-(NSDictionary *)allMetadata;
-(id)init;
-(double)timestamp;
-(NSString *)key;
-(id)value;
@end

