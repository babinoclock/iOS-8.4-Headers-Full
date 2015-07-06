/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:55 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol ICCameraDeviceDelegate <ICDeviceDelegate>
@optional
-(void)cameraDevice:(id)arg1 didAddItems:(id)arg2;
-(void)cameraDevice:(id)arg1 didRemoveItems:(id)arg2;
-(void)cameraDevice:(id)arg1 didReceiveThumbnail:(CGImageRef)arg2 forItem:(id)arg3 error:(id)arg4;
-(void)cameraDevice:(id)arg1 didReceiveMetadata:(id)arg2 forItem:(id)arg3 error:(id)arg4;

@end

