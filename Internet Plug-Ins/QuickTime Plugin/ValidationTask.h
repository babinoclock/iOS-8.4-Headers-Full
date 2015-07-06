/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:39:10 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Internet Plug-Ins/QuickTime Plugin.webplugin/QuickTime Plugin
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QuickTime Plugin/FPVTask.h>

@class AVAsset, NSURL, NSDictionary, NSString;

@interface ValidationTask : FPVTask {

	AVAsset* _avAsset;
	NSURL* _resultURL;
	NSURL* _assetURL;
	NSDictionary* _assetOptions;
	char _isPlayable;
	char _isStreaming;
	int _resultCode;
	NSString* _localizedDescription;

}

@property (readonly) AVAsset * asset;                              //@synthesize avAsset=_avAsset - In the implementation block
@property (readonly) NSURL * resultURL;                            //@synthesize resultURL=_resultURL - In the implementation block
@property (readonly) char isPlayable;                              //@synthesize isPlayable=_isPlayable - In the implementation block
@property (readonly) char isStreaming;                             //@synthesize isStreaming=_isStreaming - In the implementation block
@property (readonly) int resultCode;                               //@synthesize resultCode=_resultCode - In the implementation block
@property (readonly) NSString * localizedDescription;              //@synthesize localizedDescription=_localizedDescription - In the implementation block
-(void)cancel;
-(void)dealloc;
-(void)start;
-(NSString *)localizedDescription;
-(AVAsset *)asset;
-(void)cleanup;
-(char)isStreaming;
-(int)resultCode;
-(NSURL *)resultURL;
-(char)isPlayable;
-(id)initWithURL:(id)arg1 options:(id)arg2 ;
@end
