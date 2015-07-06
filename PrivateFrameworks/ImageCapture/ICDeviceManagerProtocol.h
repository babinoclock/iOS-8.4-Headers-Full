/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:13 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol ICDeviceManagerProtocol <NSObject>
@required
-(int)openSession:(id)arg1 contextInfo:(void*)arg2;
-(int)closeSession:(id)arg1 contextInfo:(void*)arg2;
-(int)syncClock:(id)arg1 contextInfo:(void*)arg2;
-(int)deleteFile:(id)arg1 fromDevice:(id)arg2 contextInfo:(void*)arg3;
-(int)eject:(id)arg1;
-(int)downloadFile:(id)arg1 fromDevice:(id)arg2 options:(id)arg3 contextInfo:(void*)arg4;
-(int)getThumbnailOfFile:(id)arg1 fromDevice:(id)arg2 contextInfo:(void*)arg3;
-(int)getMetadataOfFile:(id)arg1 fromDevice:(id)arg2 contextInfo:(void*)arg3;
-(int)openDevice:(id)arg1 contextInfo:(void*)arg2;
-(int)closeDevice:(id)arg1 contextInfo:(void*)arg2;

@end

