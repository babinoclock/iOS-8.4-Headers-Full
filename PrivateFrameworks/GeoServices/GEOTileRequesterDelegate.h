/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:40:46 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol GEOTileRequesterDelegate
@required
-(void)tileRequester:(id)arg1 receivedError:(id)arg2;
-(void)tileRequester:(id)arg1 receivedData:(id)arg2 tileEdition:(unsigned)arg3 tileSet:(unsigned)arg4 etag:(id)arg5 forKey:(GEOTileKey)arg6 userInfo:(id)arg7;
-(void)tileRequesterFinished:(id)arg1;

@end

