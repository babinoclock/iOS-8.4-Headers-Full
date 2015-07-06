/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:40:03 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface CPLErrors : NSObject
+(id)unknownError;
+(id)incorrectMachineStateErrorWithReason:(id)arg1 ;
+(id)cplErrorWithCode:(int)arg1 underlyingError:(id)arg2 description:(id)arg3 ;
+(id)posixErrorForURL:(id)arg1 ;
+(id)invalidClientCacheError;
+(id)incorrectParametersErrorForParameter:(id)arg1 ;
+(id)cplErrorWithCode:(int)arg1 description:(id)arg2 ;
+(id)cplErrorWithCode:(int)arg1 description:(id)arg2 arguments:(void*)arg3 ;
+(id)cplErrorWithCode:(int)arg1 underlyingError:(id)arg2 userInfo:(id)arg3 description:(id)arg4 arguments:(void*)arg5 ;
+(id)underlyingErrorWithReason:(id)arg1 ;
+(id)versionMismatchError;
+(id)notImplementedError;
+(id)transportErrorFromTransportError:(id)arg1 ;
+(id)libraryClosedError;
+(id)invalidCloudCacheError;
+(id)invalidDaemonErrorWithConnectionError:(id)arg1 ;
+(id)cplErrorWithCode:(int)arg1 underlyingError:(id)arg2 description:(id)arg3 arguments:(void*)arg4 ;
+(id)cplErrorWithCode:(int)arg1 underlyingError:(id)arg2 userInfo:(id)arg3 description:(id)arg4 ;
+(id)missingError;
+(id)operationCancelledError;
@end

