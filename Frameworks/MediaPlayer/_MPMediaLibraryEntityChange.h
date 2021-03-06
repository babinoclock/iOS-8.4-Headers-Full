/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:37:36 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class MPMediaEntity, NSString;

@interface _MPMediaLibraryEntityChange : NSObject {

	MPMediaEntity* _entity;
	NSString* _anchor;
	int _deletionType;

}

@property (nonatomic,readonly) MPMediaEntity * entity;              //@synthesize entity=_entity - In the implementation block
@property (nonatomic,copy,readonly) NSString * anchor;              //@synthesize anchor=_anchor - In the implementation block
@property (nonatomic,readonly) int deletionType;                    //@synthesize deletionType=_deletionType - In the implementation block
-(id)initWithEntity:(id)arg1 anchor:(id)arg2 deletionType:(int)arg3 ;
-(int)deletionType;
-(NSString *)anchor;
-(MPMediaEntity *)entity;
@end

