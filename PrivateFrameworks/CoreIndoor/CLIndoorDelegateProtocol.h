/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:40:11 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/CoreIndoor.framework/CoreIndoor
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol CLIndoorDelegateProtocol <NSObject>
@optional
-(void)indoorIsUncertainWithLocation:(id)arg1;
-(void)indoorGivesUpWithLocation:(id)arg1;
-(void)indoorAssetDownloadProgress:(float)arg1;
-(void)indoorDidFailWithError:(id)arg1;

@required
-(void)indoorDidUpdateToLocation:(id)arg1 fromLocation:(id)arg2;

@end

