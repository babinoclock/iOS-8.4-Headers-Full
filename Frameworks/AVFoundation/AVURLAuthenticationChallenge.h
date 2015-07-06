/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:36:13 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CFNetwork/NSURLAuthenticationChallenge.h>
#import <AVFoundation/AVAssetResourceLoaderRequest.h>

@class AVWeakReference, NSDictionary, NSString;

@interface AVURLAuthenticationChallenge : NSURLAuthenticationChallenge <AVAssetResourceLoaderRequest> {

	AVWeakReference* _weakReference;
	NSDictionary* _requestDictionary;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(SEL)_selectorForInformingDelegateOfCancellationByFig;
-(id)_weakReference;
-(id)initWithAuthenticationChallenge:(id)arg1 sender:(id)arg2 requestDictionary:(id)arg3 ;
-(id)initWithAuthenticationChallenge:(id)arg1 sender:(id)arg2 ;
-(id)_requestDictionary;
-(void)_performCancellationByClient;
-(char)_shouldInformDelegateOfFigCancellation;
-(id)initWithProtectionSpace:(id)arg1 proposedCredential:(id)arg2 previousFailureCount:(int)arg3 failureResponse:(id)arg4 error:(id)arg5 sender:(id)arg6 ;
-(void)dealloc;
-(id)init;
@end

