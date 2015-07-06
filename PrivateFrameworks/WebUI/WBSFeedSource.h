/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:43:23 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSURL, NSArray, NSString;

@interface WBSFeedSource : NSObject {

	char _subscribedWhenSyncWasOff;
	NSURL* _sourceURL;
	NSURL* _feedURL;
	NSArray* _siteIconURLs;
	int _state;
	NSString* _title;

}

@property (nonatomic,readonly) NSURL * sourceURL;                        //@synthesize sourceURL=_sourceURL - In the implementation block
@property (nonatomic,readonly) NSURL * feedURL;                          //@synthesize feedURL=_feedURL - In the implementation block
@property (nonatomic,readonly) NSArray * siteIconURLs;                   //@synthesize siteIconURLs=_siteIconURLs - In the implementation block
@property (nonatomic,readonly) int state;                                //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) NSString * title;                           //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) NSString * displayName; 
@property (assign,nonatomic) char subscribedWhenSyncWasOff;              //@synthesize subscribedWhenSyncWasOff=_subscribedWhenSyncWasOff - In the implementation block
-(NSURL *)sourceURL;
-(void)setTitle:(NSString *)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(int)state;
-(NSString *)title;
-(id)dictionaryRepresentation;
-(NSString *)displayName;
-(NSURL *)feedURL;
-(id)initFromDictionaryRepresentation:(id)arg1 ;
-(char)subscribedWhenSyncWasOff;
-(void)setSubscribedWhenSyncWasOff:(char)arg1 ;
-(id)dictionaryRepresentationForSyncing;
-(id)initWithFeedURL:(id)arg1 sourceURL:(id)arg2 siteIconURLs:(id)arg3 title:(id)arg4 state:(int)arg5 ;
-(char)isEqualIgnoringTitle:(id)arg1 ;
-(NSArray *)siteIconURLs;
@end

