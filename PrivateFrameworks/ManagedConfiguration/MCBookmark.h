/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:17 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ManagedConfiguration/ManagedConfiguration-Structs.h>
#import <ManagedConfiguration/NSCopying.h>

@class NSURL, NSString;

@interface MCBookmark : NSObject <NSCopying> {

	NSURL* _URL;
	NSString* _title;
	NSString* _path;

}

@property (nonatomic,retain) NSURL * URL;                   //@synthesize URL=_URL - In the implementation block
@property (nonatomic,retain) NSString * title;              //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSString * path;               //@synthesize path=_path - In the implementation block
-(void)setTitle:(NSString *)arg1 ;
-(char)isEqual:(id)arg1 ;
-(id)description;
-(NSString *)title;
-(NSString *)path;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSURL *)URL;
-(void)setPath:(NSString *)arg1 ;
-(void)setURL:(NSURL *)arg1 ;
-(id)initWithSerializableDictionary:(id)arg1 ;
-(id)serializableDictionary;
@end

