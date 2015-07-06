/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:37:39 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MediaPlayer/MPAlternateTrack.h>

@class NSString, NSLocale;

@interface MPAlternateTextTrack : MPAlternateTrack {

	int _type;
	NSString* _name;
	NSLocale* _locale;
	int _tag;

}

@property (nonatomic,readonly) char isInBand; 
@property (nonatomic,readonly) NSLocale * locale; 
@property (nonatomic,readonly) int type; 
@property (assign,nonatomic) int tag;                          //@synthesize tag=_tag - In the implementation block
+(id)offTrack;
+(id)autoTrack;
-(char)isInBand;
-(id)_displayNameForName:(id)arg1 ;
-(id)initWithType:(int)arg1 name:(id)arg2 locale:(id)arg3 ;
-(int)compare:(id)arg1 ;
-(int)type;
-(int)tag;
-(void)setTag:(int)arg1 ;
-(NSLocale *)locale;
-(id)displayName;
@end

