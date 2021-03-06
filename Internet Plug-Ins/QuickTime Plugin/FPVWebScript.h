/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:39:10 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Internet Plug-Ins/QuickTime Plugin.webplugin/QuickTime Plugin
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class FigPluginView;

@interface FPVWebScript : NSObject {

	FigPluginView* _figPluginView;

}
+(id)selectorMap;
+(char)isSelectorExcludedFromWebScript:(SEL)arg1 ;
+(id)webScriptNameForSelector:(SEL)arg1 ;
+(char)isKeyExcludedFromWebScript:(const char*)arg1 ;
-(id)getCurrentTime;
-(void)play;
-(void)seekToDate:(id)arg1 ;
-(char)isFullScreen;
-(void)setCurrentTime:(id)arg1 ;
-(void)stop;
-(void)setURL:(id)arg1 ;
-(void)setFigPluginView:(id)arg1 ;
-(id)getPluginStatus;
-(id)getRate;
-(void)exitFullScreen;
-(id)getDate;
-(id)getTimeScale;
-(id)getMaxTimeLoaded;
-(id)getMaxBytesLoaded;
-(id)getMovieSize;
-(id)getLastTimedMetadata;
-(id)getAccessLog;
-(id)getErrorLog;
-(id)getURL;
-(id)getDuration;
-(void)setRate:(id)arg1 ;
@end

