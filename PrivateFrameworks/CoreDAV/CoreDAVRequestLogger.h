/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:40:07 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol CoreDAVAccountInfoProvider;
@class NSArray;

@interface CoreDAVRequestLogger : NSObject {

	id<CoreDAVAccountInfoProvider> _provider;
	NSArray* _headerSortDescriptors;
	int _snippetsLogged;

}

@property (nonatomic,retain) NSArray * headerSortDescriptors;              //@synthesize headerSortDescriptors=_headerSortDescriptors - In the implementation block
-(id)initWithProvider:(id)arg1 ;
-(void)dealloc;
-(void)logCoreDAVRequest:(id)arg1 withTaskIdentifier:(id)arg2 ;
-(void)finishCoreDAVResponse;
-(void)logCoreDAVResponseSnippet:(id)arg1 withTaskIdentifier:(id)arg2 isBody:(char)arg3 ;
-(void)logCoreDAVResponseSnippet:(id)arg1 withTaskIdentifier:(id)arg2 ;
-(void)logCoreDAVResponseHeaders:(id)arg1 andStatusCode:(int)arg2 withTaskIdentifier:(id)arg3 ;
-(void)setHeaderSortDescriptors:(NSArray *)arg1 ;
-(id)_inflateRequestBody:(id)arg1 ;
-(NSArray *)headerSortDescriptors;
-(void)logCoreDAVResponseSnippet:(id)arg1 ;
@end
