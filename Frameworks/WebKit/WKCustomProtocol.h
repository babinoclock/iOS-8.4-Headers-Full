/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:39:06 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CFNetwork/NSURLProtocol.h>

@interface WKCustomProtocol : NSURLProtocol {

	unsigned long long _customProtocolID;

}

@property (nonatomic,readonly) unsigned long long customProtocolID;              //@synthesize customProtocolID=_customProtocolID - In the implementation block
+(char)canInitWithRequest:(id)arg1 ;
+(char)requestIsCacheEquivalent:(id)arg1 toRequest:(id)arg2 ;
+(id)canonicalRequestForRequest:(id)arg1 ;
-(id)initWithRequest:(id)arg1 cachedResponse:(id)arg2 client:(id)arg3 ;
-(void)startLoading;
-(void)stopLoading;
-(unsigned long long)customProtocolID;
@end

