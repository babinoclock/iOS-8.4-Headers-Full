/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:40:33 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSDictionary;

@interface MusicStoreBag : NSObject {

	NSDictionary* _bagDictionary;

}

@property (nonatomic,readonly) NSDictionary * bagDictionary;                               //@synthesize bagDictionary=_bagDictionary - In the implementation block
@property (nonatomic,readonly) unsigned librarySharedPlaylistTrackCountLimit; 
@property (nonatomic,readonly) char supportsConnect; 
@property (nonatomic,readonly) char supportsSubscription; 
@property (nonatomic,readonly) NSDictionary * tabConfigurations; 
-(unsigned)librarySharedPlaylistTrackCountLimit;
-(char)supportsConnect;
-(char)supportsSubscription;
-(NSDictionary *)tabConfigurations;
-(NSDictionary *)bagDictionary;
-(id)initWithBagDictionary:(id)arg1 ;
@end

