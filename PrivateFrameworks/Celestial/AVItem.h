/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:39:42 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <Celestial/Celestial-Structs.h>
@interface AVItem : NSObject {

	AVItemPrivate* _priv;

}
+(id)avItem;
+(id)avItemWithPath:(id)arg1 error:(id*)arg2 ;
-(void)dealloc;
-(id)init;
-(double)duration;
-(id)url;
-(id)path;
-(char)setAttribute:(id)arg1 forKey:(id)arg2 error:(id*)arg3 ;
-(id)initWithPath:(id)arg1 error:(id*)arg2 ;
-(CGSize)naturalSize;
-(char)setPath:(id)arg1 error:(id*)arg2 ;
-(void)stopDownload;
-(id)formatDetailsForTracks;
-(id)nextThumbnailTimesStartingAt:(double)arg1 minimumInterval:(double)arg2 forwards:(char)arg3 maxCount:(int)arg4 ;
-(id)evenlySpacedThumbnailTimesFromStartTime:(double)arg1 toEndTime:(double)arg2 maxCount:(int)arg3 ;
-(id)urlFromPath:(id)arg1 ;
-(int)_instantiateItem;
-(void)setEQPreset:(int)arg1 ;
-(id)chapterImageForImageID:(int)arg1 ;
-(void*)downloadThread;
-(long)beginDownloading;
-(void)cancelDownload;
-(long)downloadStatus;
-(int)eqPreset;
-(id)attributeForKey:(id)arg1 ;
-(float)downloadProgress;
-(id)initWithError:(id*)arg1 ;
-(float)volume;
-(void)setVolume:(float)arg1 ;
-(id)accessLog;
-(id)errorLog;
@end

